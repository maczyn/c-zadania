#include <iostream>
#include <string>

using namespace std;


struct drzewo    // drzewo kodu bezprzystankowego
{
  drzewo * lewo;
  drzewo * prawo;
  char klucz;
};


void nowe(drzewo * & korzen)  // tworzenie drzewa
{
  int a,i,j;
  char s;
  string b;
  drzewo * p;

  korzen = new drzewo;
  korzen->lewo  = NULL;
  korzen->prawo = NULL;

  cin >> a;

  for(i = 0; i < a; i++)
  {
    cin >> s >> b;

    p = korzen;

    for(j = 0; j < (int)b.length(); j++)
    {
      if(b[j] == '0')
      {
        if(!p->lewo)
        {
          p->lewo = new drzewo;
          p->lewo->lewo  = NULL;
          p->lewo->prawo = NULL;
        }
        p = p->lewo;
      }
      else
      {
        if(!p->prawo)
        {
          p->prawo = new drzewo;
          p->prawo->lewo  = NULL;
          p->prawo->prawo = NULL;
        }
        p = p->prawo;
      }
    p->prawo;
    }
  }
}
void kodowanie(drzewo * korzen)  //funkcja kodujaca
{
  drzewo * p;
  string b;
  int i;

  cin >> b;

  cout << endl;

  p = korzen;

  for(i = 0; i < (int)b.length(); i++)
  {
    if(b[i] == '0') p = p->lewo;
    else            p = p->prawo;
    if(!p->lewo)
    {
      cout << p->prawo;
      p = korzen;
    }
  }
  cout << endl;
}


void usun(drzewo * v)   // usuwanie drzewa

{
  if(v)
  {
    usun(v->lewo);
    usun(v->prawo);
    delete v;
  }
}


int main()
{
  drzewo * korzen;

  nowe(korzen);
  kodowanie(korzen);
  usun(korzen);
  return 0;
}
