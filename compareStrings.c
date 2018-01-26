
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Napisz funkcjê compareStrings() która porównywa dwa tablice
z charami na równoœæ. Funkcja ma wynik w formie prawdy(1) i fa³sz(0).
Funkcja ma u¿ywac tylko wskaŸniki!
*/

#define SIZE 3

bool compareStrings(char *tab1,char *tab2)
{
    int i = 0;

    for(i;i<SIZE;i++)
    {
        if (*(tab1+i)!=*(tab2+i))
        {
            return false;
        }
    }
    return true;

}


int main()
{
    char t1[SIZE]={'a','s','d'};
    char t2[SIZE]={'a','s','d'};

    printf(compareStrings(t1,t2) ? "true" : "false");
    return 0;
}
