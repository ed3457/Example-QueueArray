#include "Queue.h"
#include <iostream>
using namespace std; 
template <class Type>
Queue<Type>::Queue()
{
	count = 0;
	front = 0;
	rear = 0;
	maxSize = 200;

	elements = new Type[maxSize]; // elements of the queue 


}

template<class Type>
bool Queue<Type>::isEmpty()
{
	return (count == 0);
		
}

template<class Type>
bool Queue<Type>::isFull()
{
	return (count == maxSize);
}

template<class Type>
bool Queue<Type>::enqueue(Type element)
{   if (isFull())
	return false;
else
{
	elements[rear] = element;
	rear += 1;
	count += 1;

	return true;

}

}

template<class Type>
bool Queue<Type>::dequeue()
{    if (isEmpty())
	return false;
else
{
	cout << elements[front]<<endl;
	front += 1; 
	count -= 1;
	return true;

}
}

template<class Type>
void Queue<Type>::reset()
{
	count = front = rear = 0;
}

template<class Type>
Type Queue<Type>::frontElem()
{
	if (!isEmpty())
		return elements[front];
	else
		return NULL;
}

template<class Type>
Type Queue<Type>::backElem()
{
	if (!isEmpty())
		return elements[rear];
	else return NULL; 
}

template class Queue <int>;// fix for link problem 