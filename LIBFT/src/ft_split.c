
#include <stdlib.h>
#include <stdio.h>

char **ft_split(char const *s, char c)
{
    int i = 0;
    int j;
    int k = 0;
    char **split;

    if (!(split = (char **)malloc(sizeof(char *) * 256)))
        return NULL;

    while (s[i] == c || s[i] == ' '|| s[i] == '    ') //iniciales ",,,,,,,,,hola soy cesar"
        i++;

    while (s[i])
    {
        j = 0;

        if (!(split[k] = (char *)malloc(sizeof(char) * 4096))) 
            return NULL;

        while (s[i] && s[i] != c) //null y caracter 
            split[k][j++] = s[i++];

        split[k][j] = '\0';
            k++;

        while (s[i] == c)
            i++;
    }

    split[k] = NULL;
    return split;
}

/*
int main(void)
{
    char **result;
    char *str = "Hello, this is a test string";
    char delimiter = ' ';
    int i;

    result = ft_split(str, delimiter);
    if (!result)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    i = 0;
    while (result[i])
    {
        printf("Sub-string %d: %s\n", i, result[i]);
        free(result[i]); // Liberar memoria de cada subcadena
        i++;
    }
    free(result); // Liberar memoria del array de punteros

    return 0;
}
/*

s = "hola,soy,cesar" 'c = " " '

k
* h o l a \0 
* s o y \0
* c e s a r \0
\0 
...

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"


*/

