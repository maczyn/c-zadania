#include <stdio.h>
#include <stdlib.h>
char base4_1[]="00";
char base4_2[]="00";
int a, b=0, x, y, i=0;

int conv1(char tab[2])
{

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


        }
        printf("%d",x);
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
        }
        printf("%d",y);

    return x*4+y;

}

int main()
{
    printf("podaj liczbe w base4\n");
    scanf ("%c%c", &base4_1[0], &base4_1[1]);

    a=conv1(base4_1);
    printf("%d\n",a);


    printf("podaj kolejna liczbe w base4\n");
    scanf ("%c%c", &base4_2[0], &base4_2[1]);

    b=conv1(base4_2);

    printf("%d\n",b);

    return 0;
}
