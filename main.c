#include <stdio.h>

int main ()
{
    int a, b, d;
    char c;

    printf("Podaj dzialanie jakie chcesz wykonac: \n");
    scanf("%d %c %d", &a, &c, &b);

    switch (c)
    {
        case   '+': d=a+b;break;
        case   '-': d=a-b;break;
        case   '*': d=a*b;break;
        case   '/': d=a/b;
            if (b==0)
                printf ("Nie dzieli sie przez zero ");break;
    }
    printf("Wynik to: %d\n", d);
    return 0;
}