#include "StdAfx.h"
#include "Massiv.h"
#include <iostream>
using namespace std;

Massiv::Massiv() // конструктор по умолчанию, без параметров
{
	size = 5;
	chislo = new int[size]; // выделить место в памяти для массива
	for (int ix = 0; ix < size; ix++) // обнуляем массив
		chislo[ix] = (rand() % 13 - 2);
}

Massiv::Massiv(int size)
{
	this->size = size;
	chislo = new int[size]; // выделить место в памяти для массива
	for (int ix = 0; ix < size; ix++) // обнуляем массив
		chislo[ix] = (rand() % 13 - 2);
}

Massiv::Massiv(Massiv&a)
{
	chislo = new int [a.size];
	size= a.size;
	for (int i = 0; i<size; i++)
		chislo[i] = a.chislo[i];
}

void Massiv::print()
{
	for (int i = 0; i < size; i++)
	{
		cout << chislo[i] << ' ';
	}
	cout << endl;
}

Massiv::~Massiv() // десструктор класса 
{
	delete[] chislo; // освободить память, удалив массив
}

int Massiv::getSize()const { return size; }

int Massiv::operator!=(const Massiv &right) const
{
	if (size != right.size)
		return 1;
	else
	{
		for (int i = 0; i < size; i++)
		if (chislo[i] != right.chislo[i])
			return 1;
	}
	return 0;
}

int &Massiv::operator[] (int subscript)
{
	if (subscript < 0 || subscript >= size)
	{
		cout<< "\n Ошибка индекса: " << subscript <<endl;
		exit(1); // завершить работу программы, неправильный индекс
	}
	return chislo[subscript]; // возврат ссылки на элемент массива
}
