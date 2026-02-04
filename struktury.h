/**
* \file struktury.h
* \brief Plik nagłówkowy \b struktury.
*
* Plik nagłówkowy \b struktury odpowiada za strukturę listy.
*/
#ifndef STRUKTURY_H
#define STRUKTURY_H
#include <iostream>
/**
 * @brief The dzialania struct
 * @param tab -wskaźnik do tablicy wyników działania.
 * @param wierzsze,kolumny -zapamiętują rozmiar tablicy wyników
 * @param nazwa_dzialania -zapamiętuje nazwę wykonanego działania.
 */
struct dzialania{
    double **tab;
    int wiersze,kolumny;
    std::string nazwa_dzialania;
};
/**
 * @brief The lista_dzialan struct
 * @param wynik -zmienna typu dzialanie \see dzialania
 * @param nast -wskaźnik na następny element listy
 */
struct lista_dzialan{
    dzialania wynik;
    lista_dzialan *nast;
};
#endif // STRUKTURY_H
