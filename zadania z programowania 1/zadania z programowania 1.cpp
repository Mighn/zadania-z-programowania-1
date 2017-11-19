// zadania z programowania 1.cpp : Defines the entry point for the console application.
/*
* Program ktory wyswietla na ekranie komputera pierwiastek kwadratowy
* z wartosci predefiniowanej stalej "pi" = 3.1415...
* nalezy przyjac format wyswietlanego pierwiastka do dwoch liczb po kropce
*/

#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <conio.h>

int main()
{
	std::cout << "progra wyswietla pierwiastek kwadratowy stalej \"pi\" " << std::endl;
	std::cout << "z dokladnoscia do 2 miejsc po przecinku" << std::endl;
	std::cout << "Pierwiastek kwadratowy z pi = " << std::fixed << std::setprecision(2) << sqrt(M_PI) << std::endl;
	_getch();

	return 0;
}