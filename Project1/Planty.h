#pragma once
#include <memory.h> // NULL
#include <iostream>

using namespace std;

template <class T>
class Planty {

	class Node {
	public:
		T data;
		Node *next;
		Node *previous;
	};

private:
	Node *first;

public:
	Planty();
	int Insert(T a); // добавление
	int remove(T a); // удаление
	void out(); // вывод
	~Planty();
};



