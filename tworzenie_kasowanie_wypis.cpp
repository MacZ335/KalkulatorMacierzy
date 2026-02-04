/**
* \file tworzenie_kasowanie.cpp
* \brief Plik implementacyjny modułu \b tworzenie_kasowanie.
*
* Moduł \b tworznie_kasowanie odpowiada za tworznie i kasowanie tablic przetrzymujących macierze.
* \see tworzenie_kasowanie.h
*/
#include "tworzenie_kasowanie_wypis.h"
void wypis(double **tab,int W,int K,string ktoramacierz)
{
    cout<<"macierz:"<<ktoramacierz<<endl<<endl;
    for(int w=0;w<W;w++)
    {
        for(int k=0;k<K;k++)
        {
            cout<<tab[w][k]<<'\t';
        }
        cout<<endl;
    }
    cout<<endl;
}
void tworzeniemacierzy(double **&tab, int W,int K)
{
    tab=new double *[W];
    for (int i=0; i<W; i++)
        tab[i] = new double [K];
}

void kasowaniemacierzy(double **&tab, int N)
{
    for (int i=0; i<N; i++)
        delete [] tab[i];
    delete [] tab;
}
void podawanierozmiaruwiersze(int &G,int t)
{
    int b;
    cout<<"podaj ilosc wierszy macierzy nr:"<<t<<endl;
    cin>>b;
    G=b;
}
void podawanierozmiarukilumny(int &G,int t)
{
    int b;
    cout<<"podaj ilosc kolumn macierzy nr:"<<t<<endl;
    cin>>b;
    G=b;
}
void usuwanie_listy(lista_dzialan *&w)
{
    while(w)
    {
        lista_dzialan *p=w;
        w=w->nast;
        delete p;
    }
}
void wypislisty(lista_dzialan *w)
{
    cout<<"Podaj nazwe pliku wynikow"<<endl;
    string nazwa;
    cin>>nazwa;
    cout<<endl<<"Dzialania wykonane przez program"<<endl;
    ofstream plik;
    plik.open(nazwa+".txt");
    while(w)
    {
        plik<<w->wynik.nazwa_dzialania<<endl;
        for(int i=0;i<w->wynik.wiersze;i++){
            for(int j=0;j<w->wynik.kolumny;j++){
                plik<<w->wynik.tab[i][j]<<"\t";
            }
            plik<<endl;
        }
        wypis(w->wynik.tab,w->wynik.wiersze,w->wynik.kolumny,w->wynik.nazwa_dzialania);
        w=w->nast;
    }
    plik.close();
    cout<<endl;

}
