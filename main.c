#include <stdio.h>

int main ()
{
    float a, b, d;
    char c;

    printf("Podaj dzialanie jakie chcesz wykonac: \n");
    scanf("%f %c %f", &a, &c, &b);

    switch (c)
    {
        case   '+': d=a+b;break;
        case   '-': d=a-b;break;
        case   '*': d=a*b;break;
        case   '/': d=a/b;
            if (b==0)
                printf ("Nie dzieli sie przez zero!");return 0;
    }
    printf("Wynik to: %.2f\n", d);
    return 0;
}