/**
* \file odwracanie.cpp
* \brief Plik implementacyjny modułu \b odwracanie.
*
* Moduł \b odwracanie odpowiada za część funkcji odwracania macierzy.
* \see odwracanie.h
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include "dzialania.h"
#include "tworzenie_kasowanie_wypis.h"
#include "wypelnianie.h"
#include "odwracanie.h"
using namespace std;

bool rozkladLU(int n,double **A)
{
  for(int k=0;k<n-1;k++)
  {
    if(fabs(A[k][k])<eps)
        return false;

    for(int i=k+1;i<n;i++)
      A[i][k]/=A[k][k];

    for(int i=k+1;i<n;i++)
      for(int j=k+1;j<n;j++)
        A[i][j]-=A[i][k]*A[k][j];
  }

  return true;
}
bool wektorX(int k,int n,double **A,double **X)
{
  double s;

  for(int i=1;i<n;i++ )
  {
    s=0;

    for(int j=0;j<i;j++)
        s+=A[i][j]*X[j][k];

    X[i][k]-=s;
  }

  if(fabs(A[n-1][n-1])<eps)
      return false;

  X[n-1][k]/=A[n-1][n-1];

  for(int i=n-2;i>=0;i--)
  {
    s = 0;

    for(int j=i+1;j<n;j++)
        s+=A[i][j]*X[j][k];

    if(fabs(A[i][i])<eps)
        return false;

    X[i][k]=(X[i][k]-s)/A[i][i];
  }

  return true;
}

