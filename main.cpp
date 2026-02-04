/**
* \file main.cpp
* \brief Plik źródłowy  programu.
* \mainpage
* \par   Kalkulator macierzy
* kalkulator zajmuje się działaniami na macierzach
* \author Maciej Żabolicki
* \date 2022.05.23
* \version 1.0
* \par Kontakt:
* email: 01171794@pw.edu.pl
*/
/** \code
 *  #include <iostream>
#include <fstream>
#include "dzialania.h"
#include "tworzenie_kasowanie_wypis.h"
#include "wypelnianie.h"
#include "odwracanie.h"
using namespace std;

int main()
{

    double **macierz1,**macierz2;


    int W1,W2,K1,K2;
    string nazwa1,nazwa2;
    string zczego,zczego2;
        while(zczego!="zpliku"&&zczego!="recznie")
        {
            cout<<"jak chcesz wczytac macierz 1, zpliku czy recznie"<<endl;
            cin>>zczego;
        }
    if(zczego=="zpliku")
    {
        rozmiaryplik(W1,K1,nazwa1);
        tworzeniemacierzy(macierz1,W1,K1);
        wypelnieniezpliku(macierz1,W1,K1,nazwa1);
    }
    if(zczego=="recznie")
    {
        podawanierozmiaruwiersze(W1,1);
        podawanierozmiarukilumny(K1,1);
        tworzeniemacierzy(macierz1,W1,K1);
        wypelnienie(macierz1,W1,K1,1);
    }
    while(zczego2!="zpliku"&&zczego2!="recznie")
        {
            cout<<"jak chcesz wczytac macierz 2, zpliku czy recznie"<<endl;
            cin>>zczego2;
        }
    if(zczego2=="zpliku")
    {
        rozmiaryplik(W2,K2,nazwa2);
        tworzeniemacierzy(macierz2,W2,K2);
        wypelnieniezpliku(macierz2,W2,K2,nazwa2);
    }
    if(zczego2=="recznie")
    {
        podawanierozmiaruwiersze(W2,2);
        podawanierozmiarukilumny(K2,2);
        tworzeniemacierzy(macierz2,W2,K2);
        wypelnienie(macierz2,W2,K2,2);
    }

    wypis(macierz1,W1,K1,"1");

    wypis(macierz2,W2,K2,"2");
    oblicznia(macierz1,macierz2,W1,K1,W2,K2);
    kasowaniemacierzy(macierz1,W1);
    kasowaniemacierzy(macierz2,W2);
    return 0;
}
 *  \endcode
 */
#include <iostream>
#include <fstream>
#include "dzialania.h"
#include "tworzenie_kasowanie_wypis.h"
#include "wypelnianie.h"
#include "odwracanie.h"
using namespace std;

int main()
{

    double **macierz1,**macierz2;


    int W1,W2,K1,K2;
    string nazwa1,nazwa2;
    string zczego,zczego2;
        while(zczego!="zpliku"&&zczego!="recznie")
        {
            cout<<"jak chcesz wczytac macierz 1, zpliku czy recznie"<<endl;
            cin>>zczego;
        }
    if(zczego=="zpliku")
    {
        rozmiaryplik(W1,K1,nazwa1);
        tworzeniemacierzy(macierz1,W1,K1);
        wypelnieniezpliku(macierz1,W1,K1,nazwa1);
    }
    if(zczego=="recznie")
    {
        podawanierozmiaruwiersze(W1,1);
        podawanierozmiarukilumny(K1,1);
        tworzeniemacierzy(macierz1,W1,K1);
        wypelnienie(macierz1,W1,K1,1);
    }
    while(zczego2!="zpliku"&&zczego2!="recznie")
        {
            cout<<"jak chcesz wczytac macierz 2, zpliku czy recznie"<<endl;
            cin>>zczego2;
        }
    if(zczego2=="zpliku")
    {
        rozmiaryplik(W2,K2,nazwa2);
        tworzeniemacierzy(macierz2,W2,K2);
        wypelnieniezpliku(macierz2,W2,K2,nazwa2);
    }
    if(zczego2=="recznie")
    {
        podawanierozmiaruwiersze(W2,2);
        podawanierozmiarukilumny(K2,2);
        tworzeniemacierzy(macierz2,W2,K2);
        wypelnienie(macierz2,W2,K2,2);
    }

    wypis(macierz1,W1,K1,"1");

    wypis(macierz2,W2,K2,"2");
    oblicznia(macierz1,macierz2,W1,K1,W2,K2);
    kasowaniemacierzy(macierz1,W1);
    kasowaniemacierzy(macierz2,W2);
    return 0;
}
