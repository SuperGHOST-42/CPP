#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int    picoshell(char **cmds[])
{
	int prev = -1, fd[2], status;
	pid_t pid;

	for(int i = 0; cmds[i]; i++)
	{
		if (cmds[i + 1])
		{
			if (pipe(fd) == -1)
				return (1);
		}
		pid = fork();
		if (pid == -1)
		{
			close(fd[1]);
			close(fd[1]);
			return (1);
		}
		if (pid == 0)
		{
			if (prev != -1)
				dup2(prev, 0);
			if (cmds[i + 1])
			{
				dup2(fd[1], 1);
				close(fd[1]);
				close(fd[0]);
			}
			execvp(cmds[i][0], cmds[i]);
			exit(1);
		}
		if (prev != -1)
			close(prev);
		if (cmds[i + 1])
		{
			prev = fd[0];
			close(fd[1]);
		}
	}
	while (wait(&status) > 0)
	{
		if (WEXITSTATUS(status) != 0)
			return 1;
	}
	return (0);
}
