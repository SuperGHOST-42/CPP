#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int ft_popen(const char *file, char *const argv[], char type)
{
	if (!file || !argv || (type != 'w' && type != 'r'))
		return -1;
	
	int	fd[2];
	if (pipe(fd))
		return -1;

	pid_t	pid;
		
	pid = fork();
	if (pid == -1)
	{
		close(fd[0]);
		close(fd[1]);
		return (-1);
	}
	if (pid == 0)
	{
		if (type == 'r')
			dup2(fd[1], 1);
		else
			dup2(fd[0], 0);
		close(fd[0]);
		close(fd[1]);
		execvp(file, argv);
		exit(1);
	}
	if (type == 'r')
	{
		close(fd[1]);
		return (fd[0]);
	}
	else
	{
		close(fd[0]);
		return (fd[1]);
	}
	return (0);
}

int	main(void)
{
	int		fd;
	char	buffer[1024];
	ssize_t	bytes;

	/* 'r': ler o output do comando */
	printf("=== Teste 'r': deve imprimir ola ===\n");
	fflush(stdout);
	fd = ft_popen("echo", (char *const []){"echo", "ola", NULL}, 'r');
	if (fd == -1)
		return (perror("ft_popen"), 1);
	while ((bytes = read(fd, buffer, sizeof(buffer))) > 0)
		write(STDOUT_FILENO, buffer, bytes);
	close(fd);
	wait(NULL);

	/* 'w': enviar texto para o input do comando */
	printf("\n=== Teste 'w': deve imprimir OLA MUNDO ===\n");
	fflush(stdout);
	fd = ft_popen("tr",
			(char *const []){"tr", "a-z", "A-Z", NULL}, 'w');
	if (fd == -1)
		return (perror("ft_popen"), 1);
	write(fd, "ola mundo\n", 10);
	close(fd);
	wait(NULL);

	/* Parâmetro inválido */
	fd = ft_popen("ls", (char *const []){"ls", NULL}, 'x');
	printf("\n=== Tipo invalido: deve devolver -1 ===\n%d\n", fd);
	return (0);
}