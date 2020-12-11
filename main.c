#include <stdio.h>

int main ()
{
    int a, b, d;
    char c;

    printf("Podaj pierwsza liczbe : \n");
    scanf("%d", &a);

    printf("Podaj druga liczbe: \n");
    scanf("%d", &b);

    getchar();
    printf("Co chcesz zrobic (podaj znak): \n");
    scanf("%c", &c);

    switch (c)
    {
        case   '+': d=a+b;
        printf("Wynik to: %d\n", d);break;

        case   '-': d=a-b;
            printf("Wynik to: %d\n", d);break;

        case   '*': d=a*b;
        printf("Wynik to: %d\n", d);break;

        case   '/': d=a/b;
            printf("Wynik to: %d\n", d);

            if (b==0)
                printf ("Nie dzieli sie przez zero ");break;
    }
    return 0;
}