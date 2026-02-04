/**
* \file tworznie_kasowanie.h
* \brief Plik nagłówkowy modułu \b tworzenie_kasowanie.
*
* Moduł \b tworznie_kasowanie odpowiada za tworznie i kasowanie tablic przetrzymujących macierze.
* * \see tworzenie_kasowanie.cpp
*/
#ifndef TWORZENIE_KASOWANIE_WYPIS_H
#define TWORZENIE_KASOWANIE_WYPIS_H
#include <iostream>
#include <fstream>
#include "struktury.h"
using namespace std;
/**
 * @brief wypis -odpowiada za wypis tablicy
 * @param tab -wskaźnik na tablicę która będzie wypisywana
 * @param W -ilość wierszy macierzy
 * @param K -ilość kolumn macierzy
 * @param ktoramacierz -przekazuje która tablica jest wypisywana
 */
void wypis(double **tab,int W,int K,string ktoramacierz);
/**
 * @brief tworzeniemacierzy -odpowiada za tworzenie tablicy
 * @param tab -wskaźnik na tablicę która będzie tworzona
 * @param W -ilosć wierszy tablicy
 * @param K -ilość kolumn tablicy
 */
void tworzeniemacierzy(double **&tab, int W,int K);
/**
 * @brief kasowaniemacierzy -odpowiada za kasowanie macierzy
 * @param tab -wskaźnik na tablicę która będzie kasowana
 * @param N -ilość wierszy tablicy
 */
void kasowaniemacierzy(double **&tab, int N);
/**
 * @brief podawanierozmiaruwiersze -odpowiada za pobieranie ilości wierszy tablicy
 * @param G -przechowuje zmienną oznaczającą ilość wierszy tablicy
 * @param t -przechowuje której tablicy podawana jest ilośc wierszy
 */
void podawanierozmiaruwiersze(int &G,int t);
/**
 * @brief podawanierozmiarukilumny -odpowiada za pobieranie ilości kolumn tablicy
 * @param G -przechowuje zmienną oznaczającą ilość kolumn tablicy
 * @param t -przechowuje której tablicy podawana jest ilośc kolumn
 */
void podawanierozmiarukilumny(int &G,int t);
/**
 * @brief usuwanie_listy -odpowiada za usuwanie listy
 * @param w -glowa Adres listy
 */
void usuwanie_listy(lista_dzialan *&w);
/**
 * @brief wypislisty -odpowiada za wypis listy i zapis listy do pliku
 * @param w -glowa Adres listy
 */
void wypislisty(lista_dzialan *w);
#endif // TWORZENIE_KASOWANIE_WYPIS_H
