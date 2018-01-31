#include <stdio.h>
#include <stdlib.h>



// liczba na chary
//

char* IntToStr(int x, char *liczba)
{

    int y=x;
    int i = 1;

    // zliczanie ilosci bitow do rezerwacji
    for ( i ;x>0; i++)
    {
        x=x/10;
    }

    if (y==0)
    {
        i++;
    }


    // jezeli liczba jest minusowa to rezerwuje bit na '-'
    if (y<0)
    {
        i++;
    }


    //dynamiczna alokacja pamieci
    liczba=(char*) malloc(i *sizeof(char));

    printf("ilosc zarezerwowanych bitow to %d\n",i);

    int j =0;

    if(y==0)
    {
        *(liczba+j)='0';
        printf("%c",*liczba+j);
    }


    while(y!=0)
    {
        *(liczba+j)='A'/*(y%10)+'0'*/;
        printf("%c",liczba+j);
        j++;
        y/=10;
    }




}


int main()
{
char *liczba;
IntToStr(12, liczba);


    return 0;
}
