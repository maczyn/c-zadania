#include <iostream>
#include "conio.h"
#include "Windows.h"
#define SIZE_MAP 20
#pragma comment(lib, "User32.lib")   //niezbedne do GetAsyncKeyState

char map[SIZE_MAP][SIZE_MAP]=                       //mapa
{

    "@@@@@@@@@@@@@@@@@@@",
    "@ Y Y Y Y Y Y Y Y @",
    "@  Y Y Y Y Y Y Y  @",
    "@       Y Y       @",
    "@        Y        @",
    "@                 @",
    "@                 @",
    "@                 @",
    "@                 @",
    "@                 @",
    "@                 @",
    "@                 @",
    "@                 @",
    "@                 @",
    "@                 @",
    "@                 @",
    "@                 @",
    "@        X        @",
    "@@@@@@@@@@@@@@@@@@@",

};





int main()
{
    int score = 0;
    int*scr;
    scr = &score;
    int lives = 3;

    bool play = true;                   //zmienna petli gry

    int speed = 1000;

    while (play==true)
    {

        system ("cls");         //"odswiezanie" widoku konsoli,               poprawic odswiezanie
        for (int y = 0; y<SIZE_MAP; y++)        //wyswietlanie mapy, gry
        {
            std::cout<<map[y]<<std::endl;
        }
        std::cout<<std::endl<<"SCORE: "<<score<<std::endl<<"LIVES: "<<lives<<std::endl;



        //RUCH STATKIEM


       for (int y = 0; y<SIZE_MAP; y++)
       {
           for (int x = 0; x<SIZE_MAP; x++)
           {


                if (map[y][x]=='X')
                {
                    int move1 = GetAsyncKeyState(VK_LEFT);
                    int move2 = GetAsyncKeyState(VK_RIGHT);

                    int move3 = GetAsyncKeyState(VK_DOWN);

                    if (move1 < 0 && map[y][x-1] != '@' )
                    {
                        map[y][x]=' ';
                        map[y][x-1]='X';
                    }
                    if (move2 < 0 && map[y][x+1] != '@' )
                    {
                        map[y][x]=' ';
                        map[y][x+1]='X';
                    }
                    if (move3 < 0)
                    {
                        scr++;
                    }

                    break;

                }
            }
        }

        //STRZAL
       for (int y = 0; y<SIZE_MAP; y++)
       {
           for (int x = 0; x<SIZE_MAP; x++)
           {

                if (map[y][x]=='X')
                {
                    int shoot = GetAsyncKeyState(VK_UP);

                    if (shoot < 0 && map[y-1][x] != '@')     //petla strzalu
                    {
                        for (auto i=y;i>0;i--)
                        {
                            map[y-1][x]='*';
                        }
                    }
                }
                if (map[y][x]=='*' && map[y-1][x]!='@' && map[y-1][x]!='Y')       //petla pocisku
                {
                    map[y][x]=' ';
                    map[y-1][x]='*';
                }

                else (map[y][x]=='*' && map[y-1][x]=='Y')       //kolizja + punkt NIE DZIALA
                {
                    map[y][x]=' ';
                    map[y-1][x]=' ';

                    scr++;
                }
            }
        }

        //CEL TRAFIONY

        //WROG STRZAL

        //JA TRAFIONY

        //WYGRANA & PRZEGRANA

        //ZLICZANIE PUNKTOW, ZYCIE
    Sleep(speed);
    }

    return 0;
}
