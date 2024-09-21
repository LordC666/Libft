
void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1); 
}

/*
0: STDIN (Standard Input) - Este descriptor de archivo se usa para la entrada estándar, que generalmente proviene del teclado o de un archivo redirigido a la entrada estándar.

1: STDOUT (Standard Output) - Este descriptor de archivo se usa para la salida estándar, que normalmente se muestra en la pantalla o se redirige a un archivo.

2: STDERR (Standard Error) - Este descriptor de archivo se usa para la salida de error estándar, que también suele mostrarse en la pantalla pero se puede redirigir por separado de la salida estándar.
*/