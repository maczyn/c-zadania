#include <stdio.h>
#include <stdlib.h>
char base4_1[]="00";
char base4_2[]="00";
char wynik []="        ";
int a, b, x, y;
signed int e;
char d, f=0;
int reszta;

int bError = 0;


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
                bError = 1;
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
         printf("%c%c%c%c%c=-",base4_1[0],base4_1[1],d,base4_2[0],base4_2[1]);   case '3':
                y=3;
                break;
            default:
                printf("blad\n");
                bError=1;
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
    if(bError)
        exit(0);
    //printf("%d\n",a);

    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }


    printf("podaj kolejna liczbe w base4\n");
    scanf ("%c%c", &base4_2[0], &base4_2[1]);

    b=conv1(base4_2);
    if(bError)
        exit(0);
    //printf("%d\n",b);

    while ((c = getchar()) != '\n' && c != EOF) { }

    printf("jakie dzialanie chcesz wykonac?\n");
    printf("+\n");
    printf("-\n");
    scanf("%c",&d);
    if (d=='+')
    {
        e=a+b;
        printf("znak + \n");
    }
    else if (d=='-')
    {
        e=a-b;
        printf("znak - \n");
    }
    else
    {
        printf("blad\n");
        getchar();
        exit(0);
    }

    printf("%c%c%c%c%c=",base4_1[0],base4_1[1],d,base4_2[0],base4_2[1]);

    if (e<0)
    {
        e=abs(e);
        printf("tu%d\n",e);
        printf("-");

    }
    do{
        printf("[e=%d]",e);
        reszta = e % 4;
        e = e / 4;
        if(reszta == 0){
          printf("0");
          wynik[f]='0';
        }else if(reszta==1){
          printf("1");
          wynik[f]='1';
        }else if(reszta == 2){
          printf("2");
          wynik[f]='2';
        }else{
          printf("3");
          wynik[f]='3';
        }

        ++f;

    }while(e != 0);

    printf("\n");


    return 0;
}
