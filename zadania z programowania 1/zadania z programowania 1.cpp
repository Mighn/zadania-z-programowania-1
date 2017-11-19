// zadania z programowania 1.cpp : Defines the entry point for the console application.
/*
* Napisz program, który oblicza pole prostokąta. Wartość boków a i b wprowadzamy z klawiatury.
* W programie należy przyjąć, że zmienne a i b oraz pole są typu float. Przyjmujemy format ich wyświetlania 
* na ekranie z dokładnością do dwóch miejsc po kropce dziesiętnej.
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>


int main()
{

	float a, b, pole;

	std::cout << "Program oblicza pole prostokata o bokach a i b\n " << std::endl;
	std::cout << "podaj dlugosc boku a: ";
	std::cin >> a;
	std::cout << "podaj dlugosc boku b: ";
	std::cin >> b;

	pole = a*b;

	std::fixed;
	std::cout << std::setprecision(2);
	std::cout << "\n\nPole porstokata o boku a = " << a << " i boku b = " << b << " wynosi " << pole << std::endl;
	_getch();

    return 0;
}

