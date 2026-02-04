# Kalkulator Macierzy - Projekt C++

Zaawansowany kalkulator konsolowy umożliwiający wykonywanie operacji matematycznych na macierzach o dowolnych rozmiarach, z obsługą historii działań.

## Opis projektu
Program pozwala na wczytywanie macierzy zarówno ręcznie z konsoli, jak i z plików tekstowych. Główną cechą projektu jest dynamiczne zarządzanie pamięcią oraz wykorzystanie struktury listy do przechowywania wyników kolejnych operacji.

## Funkcjonalności
* Operacje arytmetyczne: Dodawanie, odejmowanie oraz mnożenie macierzy.
* Analiza macierzy: Transponowanie macierzy oraz sprawdzanie ich ortogonalności.
* Odwracanie macierzy: Implementacja algorytmu odwracania wykorzystującego rozkład LU (Lower Upper decomposition).
* System historii: Zapisywanie wyników działań w dynamicznej liście struktur, co pozwala na śledzenie wykonanych operacji.
* Obsługa danych: Elastyczne wczytywanie danych (plik/konsola) oraz automatyczne sprawdzanie możliwości wykonania danego działania (sprawdzanie wymiarów).

## Struktura plików
* dzialania.h/cpp: Główna logika operacji matematycznych.
* odwracanie.h/cpp: Implementacja rozkładu LU i odwracania macierzy.
* tworzenie_kasowanie_wypis.h/cpp: Moduł odpowiedzialny za zarządzanie pamięcią (alokacja/dealokacja) i wyświetlanie danych.
* struktury.h: Definicje struktur danych dla macierzy i listy historycznej.
* wypelnianie.h/cpp: Obsługa wprowadzania danych z różnych źródeł.

## Dokumentacja techniczna
Szczegółowa dokumentacja techniczna wygenerowana za pomocą systemu Doxygen (diagramy klas, opisy metod i parametrów) dostępna jest pod poniższym adresem:

[Link do dokumentacji online](https://macz335.github.io/KalkulatorMacierzy/)

## Technologie i kompilacja
* Język: C++11
* Środowisko: Qt Creator / Visual Studio
* Kompilator: MinGW / MSVC
* Dokumentacja: Doxygen
