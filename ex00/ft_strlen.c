//#include <unistd.h>
#include <stdio.h>

int ft_strlen(char* str)
{
    unsigned     int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    char str[] = "Hello, world!";

    int length = ft_strlen(str);

    printf("Length of the string \"%s\" is: %d\n", str, length);

    return 0;
}
