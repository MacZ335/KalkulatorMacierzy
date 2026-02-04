/**
* \file dzialania.h
* \brief Plik nagłówkowy modułu \b dzialania.
*
* Moduł \b dzialania odpowiada za dzialania na macierzach.
* \see dzialania.cpp
*/
#ifndef DZIALANIA_H
#define DZIALANIA_H
#include <iostream>
#include "struktury.h"
using namespace std;
/**
 * @brief odejmowanie -jest działaniem odejmowania na macierzach
 * @param tab1 -wskaźnik na macierz pierwszą
 * @param tab2 -wskaźnik na macierz drugą
 * @param W1 -liczba wierszy macierzy pierwszej
 * @param K1 -liczba kolumn macierzy pierwszej
 * @param W2 -liczba wierszy macierzy drugiej
 * @param K2 -liczba kolumn macierzy drugiej
 * @return  głowę listy
 */
void *odejmowanie(double **tab1,double **tab2,int W1,int K1,int W2,int K2);
/**
 * @brief dodawanie -jest działaniem dodawnia na macierzach
 * @param tab1 -wskaźnik na macierz pierwszą
 * @param tab2 -wskaźnik na macierz drugą
 * @param W1 -liczba wierszy macierzy pierwszej
 * @param K1 -liczba kolumn macierzy pierwszej
 * @param W2 -liczba wierszy macierzy drugiej
 * @param K2 -liczba kolumn macierzy drugiej
 * @return  głowę listy
 */
void *dodawanie(double **tab1,double **tab2,int W1,int K1,int W2,int K2);
/**
 * @brief mnozenie - jest działaniem mnożenia na macierzach
 * @param tab1 -wskaźnik na macierz pierwszą
 * @param tab2 -wskaźnik na macierz drugą
 * @param W1 -liczba wierszy macierzy pierwszej
 * @param K1 -liczba kolumn macierzy pierwszej
 * @param W2 -liczba wierszy macierzy drugiej
 * @param K2 -liczba kolumn macierzy drugiej
 * @return  głowę listy
 */
void *mnozenie(double **tab1,double **tab2,int W1,int K1,int W2,int K2);
/**
 * @brief transponowanie - jest działaniem transponowania macierzy
 * @param tab1 -wskaźnik na macierz którą transponuje
 * @param W1 -liczba wierszy macierzy
 * @param K1 -liczba kolumn macierzy
 * @return  głowę listy
 */
void *transponowanie(double **tab1,double W1,int K1,string ktora);
/**
 * @brief ortogonalnosc -sprawdza czy macierz jest ortogonalna
 * @param tab1 -wskaźnik na macierz która jest sprawdzana
 * @param W1 -liczba wierszy macierzy
 * @param K1 -liczba kolumn macierzy
 * @param ktora -używana do zapisu na której macierzy zostało wykonane działanie
 * @param czy macierz jest ortogonalna
 */
bool ortogonalnosc(double **tab1,int W1,int K1);
/**
 * @brief odwracanie -jest działaniem odwracania macierzy
 * @param tab1 -wskaźnik na macierz która jest sprawdzana
 * @param W1 -liczba wierszy macierzy
 * @param K1 -liczba kolumn macierzy
 * @param ktora -używana do zapisu na której macierzy zostało wykonane działanie
 * @return głowę listy
 */
void *odwracanie(double **macierz1,int W1,int K1,string ktora);
/**
 * @brief oblicznia -wykonuje oblicznia na macierzach
 * @param tab1 -wskaźnik na macierz pierwszą
 * @param tab2 -wskaźnik na macierz drugą
 * @param W1 -liczba wierszy macierzy pierwszej
 * @param K1 -liczba kolumn macierzy pierwszej
 * @param W2 -liczba wierszy macierzy drugiej
 * @param K2 -liczba kolumn macierzy drugiej
 */
void oblicznia(double **tab1,double **tab2,int W1,int K1,int W2,int K2);
#endif // DZIALANIA_H
