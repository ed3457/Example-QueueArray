#pragma once
template<class Type>
class Queue
{
private:
	int count;
	int front;
	int rear;
	int maxSize;
	Type* elements;
public:
	Queue();
	bool isEmpty();
	bool isFull();
	bool enqueue(Type element);
	Type dequeue();
	void reset(); 
	Type frontElem();
	Type backElem();



};

