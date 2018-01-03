#include<stdio.h>

int main(){
  int liczba = 0;
  int reszta, temp;
  char wybor;
  char* czworkowa;
  printf("Co chcesz policzyc?\n a. Dziesietna na czworkowa\n b. Czworkowa na dziesietna\n");
  scanf("%c", &wybor);
  if (wybor == 'a')
      {
          printf("Prosze o cala liczbe: ");
          scanf("%d", &liczba);
          printf("Decimalna %d jest w Base4 ", liczba);
          do{
            reszta = liczba % 4;
            liczba = liczba / 4;
            temp = reszta * 4;
            switch(reszta){
              case 1:
                  printf("1");
                break;
              case 2:
                  printf("2");
                break;
              case 3:
                  printf("3");
                break;
              default:
                  printf("0");
                break;
            }
          }while(liczba != 0);
          printf("\n");
      }
else if (wybor == 'b')
    {
          printf("Prosze o czworkowa: ");
          scanf("%s", czworkowa);
          printf("%s", czworkowa);

        printf("\n");
    }
else
  {
      printf("to chyba pomylka, bye!\n");
  }
  return 0;
}
