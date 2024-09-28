#include "libft.h"
#include <stdio.h>
int	main(void)
{
	char *strpr = "Hello World!";
	printf(ft_strlen(strpr));

	char obj1a[30] = "Hello";
	char *obj2a = "World";
	ft_strcat(obj1a, obj2a, 50);
        printf(obj1a);

	char *obj1b = ft_strjoin("Hello", ", World!");
	printf(obj1b);
	free(obj1b);
	
	char *trimmed = ft_strtrim("        Hola       ");
	printf(trimmed);
	free(trimmed);	
}
