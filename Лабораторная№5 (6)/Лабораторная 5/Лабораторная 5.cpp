// Лабораторная 5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Massiv.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Massiv A(6);
	A.print();

	Massiv B(2);
	B.print();
	
	Massiv C((Massiv)(A + B));
	C.print();

	
	cout << C[2]<<endl;
	

	cout << "Proverka na vhogdenie:" << endl;
	cout << (A > C);
	cout << endl;
	cout << (A > B);
	cout << endl;
	

	cout << "Proverka na neravenstvo:" << endl;
	cout << (A != B);
	cout << endl;
	cout << (B != C);
	cout << endl;

	return 0;
}

