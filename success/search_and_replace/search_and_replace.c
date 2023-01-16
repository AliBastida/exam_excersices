#include <unistd.h>

int	main(int argc, char **argv)
{
	int cont1;

	cont1 = 0;
	if(argc == 4 && !argv[2][1] && !argv[3][1])
	{
		while (argv[1][cont1])
		{
			if (argv[1][cont1] == argv[2][0])
				argv[1][cont1] = argv[3][0];
			write(1, &argv[1][cont1], 1);
			cont1++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

