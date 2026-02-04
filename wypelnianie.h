/**
* \file wypelnianie.h
* \brief Plik nagłówkowy modułu \b wypelnianie.
*
* Moduł \b wypelnianie odpowiada za wypełnianie tablic macierzami podanymi ręcznie lub z pliku.
* * \see wypelnianie.cpp
*/
#ifndef WYPELNIANIE_H
#define WYPELNIANIE_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/**
 * @brief wypelnienie -odpowiada za wypełnienie tablicy macierzą podaną ręcznie
 * @param tab -wskaźnik na tablicę która będzie wypełniania
 * @param W -ilośc wierszy wypełnianej tablicy
 * @param K -ilość kolumn wypełnianej tablicy
 * @param ktora -zapisuję która tablica jest wypełniana
 */
void wypelnienie(double **tab,int W,int K,int ktora);
/**
 * @brief rozmiaryplik -odpowiada za sprawdznie rozmiarów macierzy znajdującej się w pliku
 * @param W -przekazuję ilość wierzsy macierzy z pliku
 * @param K -przekazuję ilość kolumn macierzy z pliku
 * @param awzan -przechowuję nazwę pliku (bez dopiska .txt)
 */
void rozmiaryplik(int &W,int &K,string &awzan);
/**
 * @brief wypelnieniezpliku -odpowiada za wypełnianie tablicy macierzą z pliku
 * @param tab -wskaźnik na tablicę która będzie wypełniana
 * @param W -przekazuję ilość wierzsy macierzy z pliku
 * @param K -przekazuję ilość kolumn macierzy z pliku
 * @param nazwa -przechowuję nazwę pliku (bez dopiska .txt)
 */
void wypelnieniezpliku(double **tab,int W,int K,string nazwa);
#endif // WYPELNIANIE_H
