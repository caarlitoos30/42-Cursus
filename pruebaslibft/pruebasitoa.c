
#include <stdio.h>
#include <string.h>

size_t len_int(int n)

{
    size_t len;

    len = 0;
    if (n <= 0)
        len++; 
    while (n != 0)
    {
        len++;
        n /= 10; 
    }
    return (len);
}

int main()
{
    int numero = -1;
    size_t longitud = len_int(numero);
    printf("La longitud de %d es %zu\n", numero, longitud);
    return 0;
}