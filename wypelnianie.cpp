/**
* \file wypelnianie.cpp
* \brief Plik implementacyjny modułu \b wypelnianie.
*
* Moduł \b wypelnianie odpowiada za wypełnianie tablic macierzami podanymi ręcznie lub z pliku.
* * \see wypelnianie.h
*/
#include "wypelnianie.h"
void wypelnienie(double **tab,int W,int K,int ktora)
{
    {
        for(int w=0;w<W;w++)
        {
            for(int k=0;k<K;k++)
            {
                int a;
                cout<<"podaj liczbe znajdujaca sie w miejscu wiersz:"<<w<<" kolumna:"<<k<<" macierzy nr:"<<ktora<<endl;
                cin>>a;
                tab[w][k]=a;
            }
        }
    }
}
void rozmiaryplik(int &W,int &K,string &awzan)
{
    string nazwa;
    cout<<"podaj nazwe pliku"<<endl;
    cin>>nazwa;
    awzan=nazwa;
    ifstream plik(nazwa+".txt");
    while(!plik.good())
    {
        cout<<"podaj nazwe pliku"<<endl;
        cin>>nazwa;
        awzan=nazwa;
        plik.open(nazwa+".txt");
    }
    int w=0;
    while(!plik.eof())
    {
        getline(plik,nazwa);
        w++;
    }
    W=w;
    int k=0,dlugos=nazwa.size();
    for(int i=0;i<dlugos;i++)
    {
       if(nazwa[i]==' ')
           k++;
    }
    K=k+1;
    plik.close();
}
void wypelnieniezpliku(double **tab,int W,int K,string nazwa)
{
    ifstream plik(nazwa+".txt");
    {
        for(int w=0;w<W;w++)
        {
            for(int k=0;k<K;k++)
            {
               plik>>tab[w][k];
            }
        }
    }
    plik.close();
}
