#include <stdio.h>
#include <stdlib.h>
char base4_1[]="00";
char base4_2[]="00";
int a, b, x, y;
unsigned int e;
char d;

int conv1(char tab[2])
{
    int i=0;
        switch(tab[i])
        {
            case '0':
                x=0;
                break;
            case '1':
                x=1;
                break;
            case '2':
                x=2;
                break;
            case '3':
                x=3;
                break;
            default:
            printf("blad\n");
            getchar();
            exit(0);
            break;
        }
        i++;
        switch(tab[i])
        {
            case '0':
                y=0;
                break;
            case '1':
                y=1;
                break;
            case '2':
                y=2;
                break;
            case '3':
                y=3;
                break;
                    default:
            printf("blad\n");
            getchar();
            exit(0);
            break;
        }
    return x*4+y;
}

int main()
{
    printf("Podaj dwie liczby w systemie czworkowym. Jesli jest to liczba 1-cyfrowa, poprzedz ja '0'.\n");
    printf("podaj liczbe w base4\n");
    scanf ("%c%c", &base4_1[0], &base4_1[1]);

    a=conv1(base4_1);
    printf("%d\n",a);

    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }


    printf("podaj kolejna liczbe w base4\n");
    scanf ("%c%c", &base4_2[0], &base4_2[1]);

    b=conv1(base4_2);
    printf("%d\n",b);

    while ((c = getchar()) != '\n' && c != EOF) { }

    printf("jakie dzialanie chcesz wykonac?\n");
    printf("+\n");
    printf("-\n");
    scanf("%c\n",&d);
    if (d=='+')
    {
        e=a+b;
    }
    else if (d=='-')
    {
        e=a-b;
    }
    else
    {
        printf("blad\n");
        getchar();
        exit(0);
    }



    printf("%d%c%d=%d",a,d,b,e);

    return 0;
}
