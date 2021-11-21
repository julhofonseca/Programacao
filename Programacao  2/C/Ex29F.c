

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "");
    int i = 1, r = 0;
    for (i = 1; i <= 100; i++)
    {
        r += i;
    }
    printf ("A soma dos cem primeiros numeros e %d\n\n", r);
    
    system ("pause");
    return (0);
}

