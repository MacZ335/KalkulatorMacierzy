/**
* \file odwracanie.h
* \brief Plik nagłówkowy modułu \b odwracanie.
*
* Moduł \b odwracanie odpowiada za część funkcji odwracania macierzy.
* \see odwracanie.cpp
*/
#ifndef ODWRACANIE_H
#define ODWRACANIE_H
#include <iostream>
#include "struktury.h"
/**
 * @brief eps -jest która blokuje wielkość liczb w macierzy przy odwracaniu
 */
static const double eps = 1e-12;
/**
 * @brief rozkladLU -odpowiada za rozkład LxU macierzy
 * @param n -przetrzymuje rozmiar macierzy kwadratowej
 * @param A -wskaźnik na macierz odwracaną
 * @return
 */
bool rozkladLU (int n,double **A);
/**
 * @brief wektorX -odpwiada za stworzenie wektora macirzy X która będzię zamieniana w macierz odwrotną
 * @param k -zapisuję które raz jest wykonywana funcja
 * @param n -przetrzymuje rozmiar macierzy kwadratowej
 * @param A -wskaźnik na macierz odwracaną
 * @param X -wskaźnik na macierz która jest macierzą odwórconą A
 * @return
 */
bool wektorX (int k,int n,double **A,double **X);
#endif // ODWRACANIE_H
