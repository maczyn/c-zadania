#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Napisz funkcjê compareStrings() która porównywa dwa tablice
z charami na równoœæ. Funkcja ma wynik w formie prawdy(1) i fa³sz(0).
Funkcja ma u¿ywac tylko wskaŸniki!
*/

bool compareStrings(char *tab1[], char *tab2[])
{
    int i = 0, size = 3;

    while (i;i<size;i++)
    {
        if (*tab1+i<size && *tab2+i<size)
        {
            if (*tab1+i==*tab2+i)
            {

                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
}


int main()
{
    char t1={'a','s','d'};
    char t2={'a','s','d'};

    printf(compareStrings(t1,t2) ? "true" : "false");
    return 0;
}
