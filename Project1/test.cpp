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
	en.out();
	system("PAUSE");

}
