// zadania z programowania 1.cpp : Defines the entry point for the console application.
/*
* 	Program oblicza wynik dzielenia calkowitego bez reszty dla dwoch liczb calkowitych a=37 i b = 11.
* 	Nalezy wykorzystac automatyczna detekcje typow dla zmiennych a i b.
*
*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>

int main()
{
	auto a = 37, b = 11;

	std::cout << "program wylicza wynik dzielenia calkowitego bez reszty liczb calkowitych 37 i 11. " << std::endl;

	std::cout << "\nWynik dzialania " << a << " dzielone przez " << b << " rowna sie " << a / b << std::endl;
	_getch();

	return 0;
}