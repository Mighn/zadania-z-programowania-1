// zadania z programowania 1.cpp : Defines the entry point for the console application.
/*
* 	Program oblicza sume, roznice, iloraz oraz iloczyn dla dwoch liczb x, y wprowadzonych  z klawiatury.
* 	W programie przyjmujemy, ze liczby x i y sa typu float. Dla zmiennych x, y, suma, roznica, iloczyn i iloraz nalezy przyjac
*   format wyswietlania na ekranie z dokladnoscia do dwoch miejsc po kropce dziesietnej.
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>

int main()
{
	float x, y, suma, roznica, iloraz, iloczyn;

	std::cout << "Program oblicza sume, roznice, iloraz, iloczyn" << std::endl;
	std::cout << "dla dwoch liczb x i y wprowadzonych z klawiatury" << std::endl;
	std::cout << std::endl;

	std::cout << "Podaj x ";
	std::cin >> x;
	std::cout << "Podaj y ";
	std::cin >> y;

	suma = x + y;
	roznica = x - y;
	iloraz = x*y;
	iloczyn = x / y;

	std::cout << std::fixed << std::setprecision(2);

	std::cout << std::endl;
	std::cout << "Dla x = " << x << "   oraz y = " << y << std::endl;
	std::cout << " suma    = " << suma << std::endl;
	std::cout << " roznica = " << roznica << std::endl;
	std::cout << " iloraz  = " << iloraz << std::endl;
	std::cout << " iloczyn = " << iloczyn << std::endl;

	_getch();

	return 0;
}