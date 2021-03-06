// zadania z programowania 1.cpp : Defines the entry point for the console application.
/*
* Program, ktory z wykorzystaniem instrukcji warunkowej switch oblicza pierwiastki
* rownania kwadratowego ax^2 + bx + c = 0, gdzie zmienne a,b,c to liczby rzeczywiste wprowadzane z klawiatury.
* Dla zmiennych a,b,c,x1 oraz x2 nalezy przyjac format wyswietlania z dokladnoscia do 2 miejsc po kropce.
*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

int main()
{
	float a, b, c, x1, x2, d;
	int trigger;

	std::cout << "Program, ktory oblicza rownanie kwadratowego ax^2 + bx + c = 0" << std::endl << std::endl;

	std::cout << "podaj wartosc a ";
	std::cin >> a;

	if (a == 0)
	{
		std::cout << " Wartość 0 jest niedozwolona dla zmiennej a. Nacisnij dowolny klawisz";
		_getch();
		return 1;
	}
	std::cout << "podaj wartosc b ";
	std::cin >> b;
	std::cout << "podaj wartosc c ";
	std::cin >> c;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::endl;

	d = b*b - 4 * a*c;

	if (d < 0) trigger = 0;
	if (d == 0)trigger = 1;
	if (d < 0) trigger = 2;

	switch (trigger)
	{
	case 0:
	{
		std::cout << "brak pierwiastkow rzeczywistych" << std::endl;
	}
	break;
	case 1:
	{
		x1 = -b / (2 * a);
		std::cout << "trojmian ma jeden pierwiastek podwojny x = " << x1 << std::endl;
	}
	break;
	case 2:
	{
		x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);

		std::cout << "trojmian ma dwa pierwiastki: x1= " << x1 << " x2 = " << x2 << std::endl;
	}
	}
	_getch();

	return 0;
}