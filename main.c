#include <stdio.h>

int main ()
{
    int a, b;
    float d;
    char c;

    printf("Podaj dzialanie jakie chcesz wykonac: \n");
    scanf("%d %c %d", &a, &c, &b);

    switch (c)
    {
        case '+':
            d=a+b;
            break;
        case '-':
            d=a-b;
            break;
        case '*':
            d=a*b;
            break;
        case '/':
            if (b==0) {
                printf("Nie dzieli sie przez zero!");
                return 0;
            }
            d=(float)a/b;
            break;

        default:
            printf("blad w dzialaniu");
            return 0;
    }
    printf("Wynik to: %.2f\n", d);
    return 0;
}