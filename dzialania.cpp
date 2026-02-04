/**
* \file dzialania.cpp
* \brief Plik implementacyjny modułu \b dzialania.
*
* Moduł \b dzialania odpowiada za dzialania na macierzach.
* \see dzialania.h
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include "odwracanie.h"
#include "dzialania.h"
#include "tworzenie_kasowanie_wypis.h"
#include "wypelnianie.h"
using namespace std;
lista_dzialan *glowa=nullptr;
lista_dzialan *ogon=nullptr;
void *odejmowanie(double **tab1,double **tab2,int W1,int K1,int W2,int K2)
{
    lista_dzialan *nowy=new lista_dzialan;
    nowy->wynik.nazwa_dzialania="odejmowanie";
    tworzeniemacierzy(nowy->wynik.tab,W1,W2);
    double **wynik;
    tworzeniemacierzy(wynik,W1,W2);
    for(int w=0;w<W1;w++)
    {
        for(int k=0;k<K1;k++)
        {
            wynik[w][k]=tab1[w][k]-tab2[w][k];
            nowy->wynik.tab[w][k]=wynik[w][k];
        }
        cout<<endl;
    }
    nowy->wynik.wiersze=W1;
    nowy->wynik.kolumny=K1;
    wypis(wynik,W1,K1,"wynik odejmowania");
    if(glowa==nullptr)
    {
        glowa=nowy;
        ogon=nowy;
    }
    else
    {
        ogon->nast=nowy;
        ogon=ogon->nast;
    }
    kasowaniemacierzy(wynik,W1);
    ogon->nast=nullptr;
    return glowa;
}
void *dodawanie(double **tab1,double **tab2,int W1,int K1,int W2,int K2)
{
    lista_dzialan *nowy=new lista_dzialan;
    nowy->wynik.nazwa_dzialania="dodawanie";
    tworzeniemacierzy(nowy->wynik.tab,W1,W2);
    double **wynik;
    tworzeniemacierzy(wynik,W1,W2);
    for(int w=0;w<W1;w++)
    {
        for(int k=0;k<K1;k++)
        {
            wynik[w][k]=tab1[w][k]+tab2[w][k];
            nowy->wynik.tab[w][k]=wynik[w][k];
        }
        cout<<endl;
    }
    nowy->wynik.wiersze=W1;
    nowy->wynik.kolumny=K1;
    wypis(wynik,W1,K1,"wynik dodawania");
    if(glowa==nullptr)
    {
        glowa=nowy;
        ogon=nowy;
    }
    else
    {
        ogon->nast=nowy;
        ogon=ogon->nast;
    }
    kasowaniemacierzy(wynik,W1);
    ogon->nast=nullptr;
    return glowa;
}
void *mnozenie(double **tab1,double **tab2,int W1,int K1,int W2,int K2)
{
    lista_dzialan *nowy=new lista_dzialan;
    nowy->wynik.nazwa_dzialania="mnozenie";
    tworzeniemacierzy(nowy->wynik.tab,W1,K2);
    double **wynik;
    tworzeniemacierzy(wynik,W1,K2);
    for(int w=0;w<W1;w++)
    {

        for(int k=0;k<K2;k++)
        {
            double suma=0;
            for(int j=0;j<W2;j++)
            {
                suma+=tab1[w][j]*tab2[j][k];
            }
            wynik[w][k]=suma;
            nowy->wynik.tab[w][k]=suma;
        }
    }
    nowy->wynik.wiersze=W1;
    nowy->wynik.kolumny=K2;
    wypis(wynik,W1,K2,"wynik mnozenia");
    if(glowa==nullptr)
    {
        glowa=nowy;
        ogon=nowy;
    }
    else
    {
        ogon->nast=nowy;
        ogon=ogon->nast;
    }
    kasowaniemacierzy(wynik,W1);
    ogon->nast=nullptr;
    return glowa;
}
void *transponowanie(double **tab1,double W1,int K1,string ktora)
{
    lista_dzialan *nowy=new lista_dzialan;
    nowy->wynik.nazwa_dzialania="transponowana"+ktora;
    tworzeniemacierzy(nowy->wynik.tab,K1,W1);
    double **wynik;
    tworzeniemacierzy(wynik,K1,W1);
    for(int w=0;w<K1;w++)
    {

        for(int k=0;k<W1;k++)
        {

            wynik[w][k]=tab1[k][w];
            nowy->wynik.tab[w][k]=tab1[k][w];
        }
    }
    nowy->wynik.wiersze=K1;
    nowy->wynik.kolumny=W1;
    wypis(wynik,K1,W1,"wynik transponowanie macierzy "+ktora);
    if(glowa==nullptr)
    {
        glowa=nowy;
        ogon=nowy;
    }
    else
    {
        ogon->nast=nowy;
        ogon=ogon->nast;
    }
    kasowaniemacierzy(wynik,K1);
    ogon->nast=nullptr;
    return glowa;
}
bool ortogonalnosc(double **tab1,int W1,int K1)
{
    if(W1==K1)
    {
        double **wynik;
        tworzeniemacierzy(wynik,K1,W1);
        for(int w=0;w<K1;w++)
        {

            for(int k=0;k<W1;k++)
            {

                wynik[w][k]=tab1[k][w];
            }
        }
        double **pomocnicza1,**pomocnicza2;
        tworzeniemacierzy(pomocnicza1,K1,W1);
        tworzeniemacierzy(pomocnicza2,K1,W1);
        for(int w=0;w<W1;w++)
        {

            for(int k=0;k<K1;k++)
            {
                double suma=0;
                for(int j=0;j<W1;j++)
                {
                    suma+=tab1[w][j]*wynik[j][k];
                }
                pomocnicza1[w][k]=suma;
            }
        }
        for(int w=0;w<W1;w++)
        {

            for(int k=0;k<K1;k++)
            {
                double suma=0;
                for(int j=0;j<W1;j++)
                {
                    suma+=wynik[w][j]*tab1[j][k];
                }
                pomocnicza2[w][k]=suma;
            }
        }
        for(int w=0;w<W1;w++)
        {
            for(int k=0;k<K1;k++)
            {
                if(w==k&&(pomocnicza1[w][k]!=1&&pomocnicza1[w][k]!=-1))
                    return false;
                if(w!=k&&(pomocnicza1[w][k]!=0))
                    return false;
            }
        }
        kasowaniemacierzy(wynik,K1);
        kasowaniemacierzy(pomocnicza1,K1);
        kasowaniemacierzy(pomocnicza2,K1);
        return true;
    }
    else
    {
        return false;
    }
}
void *odwracanie(double **macierz1,int W1,int K1,string ktora)
{
    lista_dzialan *nowy=new lista_dzialan;
    nowy->wynik.nazwa_dzialania="odwrotna "+ktora;
    tworzeniemacierzy(nowy->wynik.tab,K1,W1);
    double **X,**zastepcza;
    X = new double * [W1];
    zastepcza=new double *[W1];
    for(int i=0;i<W1;i++)
      {
        X[i]=new double [W1];
      }
    for(int i=0;i<W1;i++)
      {
        zastepcza[i]=new double [W1];
      }
    for(int i=0;i<W1;i++)
    {
        for(int j=0;j<W1;j++)
            zastepcza[i][j]=macierz1[i][j];
    }
    bool ok;
    if(rozkladLU (W1,zastepcza))
      {

        for(int i=0;i<W1;i++)
        {
          for(int j=0;j<W1;j++) X[i][j]=0;
          X[i][i]=1;
        }

    ok=true;
    for(int i=0;i<W1;i++)
          if(!wektorX (i,W1,zastepcza,X))
          {
              ok=false;
            break;
          }
    }
   else ok=false;
    if(ok)
    {
    cout<<"macierz odwrotna "<<ktora<<endl;
        for(int i = 0; i < W1; i++ )
            {
              for(int j = 0; j < W1; j++ )
              {
                cout <<fixed<<setprecision(3)<< X [ i ][ j ]<<'\t';
                nowy->wynik.tab[i][j]=X [ i ][ j ];
              }
              cout << endl;
            }
        nowy->wynik.wiersze=K1;
        nowy->wynik.kolumny=W1;
        if(glowa==nullptr)
        {
            glowa=nowy;
            ogon=nowy;
        }
        else
        {
            ogon->nast=nowy;
            ogon=ogon->nast;
        }
        ogon->nast=nullptr;

    }
    else cout<<"nie mozna odwrocic macierzy "<<ktora<<endl;
        for(int i=0;i<W1;i++)
          {
            delete [] zastepcza [i];
            delete [] X [i];
          }
          delete [] zastepcza;
          delete [] X;

       return glowa;
}
void oblicznia(double **tab1,double **tab2,int W1,int K1,int W2,int K2)
{
    if(ortogonalnosc(tab1,W1,K1))
        cout<<"macierz pierwsza jest ortogonalna"<<endl;
    else
        cout<<"macierz pierwsza nie jest ortogonalna"<<endl;
    if(ortogonalnosc(tab2,W2,K2))
        cout<<"macierz druga jest ortogonalna"<<endl;
    else
        cout<<"macierz druga nie jest ortogonalna"<<endl;
    cout<<"oblicznienia ktore mozna wykonac: "<<endl;
    if(K1==W2)
    {
        cout<<"mnozenie"<<endl;
    }
    if(W1==W2&&K1==K2)
    {
        cout<<"dodawanie i odejmowanie"<<endl;
    }
    cout<<"transponowanie"<<endl;
    string dzialanie;
    do
    {
    cout<<"podaj jakie chcesz wykonac dzialanie: dodawanie, odejmowanie, transponowanie, odwracanie1, odwracanie2, mnozenie lub koniec"<<endl;
    cin>>dzialanie;
    if(dzialanie=="dodawanie"&&W1==W2&&K1==K2)
    {
        dodawanie(tab1,tab2,W1,K1,W2,K2);
    }
    if(dzialanie=="odejmowanie"&&W1==W2&&K1==K2)
    {
        odejmowanie(tab1,tab2,W1,K1,W2,K2);
    }
    if(dzialanie=="mnozenie"&&K2==W1)
    {
        mnozenie(tab1,tab2,W1,K1,W2,K2);
    }
    if(dzialanie=="transponowanie")
    {
        transponowanie(tab1,W1,K1," 1");
        transponowanie(tab2,W2,K2," 2");
    }
    if(dzialanie=="odwracanie1")
        odwracanie(tab1,W1,K1,"1");
    if(dzialanie=="odwracanie2")
        odwracanie(tab2,W2,K2,"2");
    }while(dzialanie!="koniec");
    wypislisty(glowa);
    usuwanie_listy(glowa);
}
