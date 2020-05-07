#include "Planty.h"

template<class T>
Planty<T>::Planty()
{
	first = NULL;
}

template<class T>
Planty<T>::~Planty()
{
	Node *cur = first;
	if (cur) {
		if (cur->next)
			cur = cur->next;
		while (cur->next)
		{
			delete cur->previous;
			cur = cur->next;
		}
		delete cur;
	}
	first = NULL;
}

template<class T>
int Planty<T>::Insert(T a)
{
	Node *cur = first;
	if (!cur) {
		Node *nd = new Node();
		if (!nd)
			return 0;
		Node *lfirst = first;
		first = nd;
		nd->data = a;
		nd->previous = NULL;
		nd->next = NULL;
	}
	else {
		while (cur->next) {
			if (cur->data == a)
				return 0;
			cur = cur->next;
		}
		Node *nd = new Node;
		if (!nd)
			return 0;
		cur->next = nd;
		nd->data = a;
		nd->previous = cur;
		nd->next = NULL;
	}
	return 1;

}

template<class T>
int Planty<T>::remove(T a)
{
	
}

template<class T>
void Planty<T>::out()
{
	Node *cur = first;
	while (cur) {
		cout << cur->data << " ";
		cur = cur->next;
	}
	cout << endl;
}
