#include "test.h"
#pragma once
#include "Planty.cpp"
#include "stdio.h"
#include <iostream>

int main() {

	Planty<int> en;
	en.Insert(1);
	en.Insert(4);
	en.Insert(2);
	en.Insert(3);
	en.Insert(2);
	cout << "int" << endl;
	en.out();
	en.remove(4);
	cout << "After remove" << endl;
	en.out();
	

	Planty<double> en2;
	en2.Insert(5.5);
	en2.Insert(4.2);
	en2.Insert(0.000002);
	en2.Insert(5.6666);
	cout << "double" << endl;
	en2.out();
	en2.remove(4.2);
	en2.Insert(57.2);
	cout << "After remove and insert" << endl;
	en2.out();
	system("PAUSE");

}
