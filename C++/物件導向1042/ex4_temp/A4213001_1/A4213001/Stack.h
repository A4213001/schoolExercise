#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{
public:
	Stack();
	Stack(const Stack &);
	~Stack();
	bool empty() const;
	T peek() const;
	void push(T value);
	T pop();
	int getSize() const;

private:
	T *elements;
	int size;
	int cap;
	void ensureCapacity();
};
template<typename T>
Stack<T>::Stack() : cap(16) ,size(0)
{
	elements = new T[cap];
}
template<typename T>
Stack<T>::Stack(const Stack &stack)
{
	elements = new T[stack.capacity];
	size = stack.size;
	for (int i = 0; i < size; i++)
	{
		elements = stack.elements;
	}
}
template<typename T>
Stack<T>::~Stack()  
{
	delete [] elements;
}
template<typename T>
void Stack<T>::ensureCapacity()
{
	if (size >= cap)
	{
		T *old = elements;
		cap = 2 * size;
		elements = new T[cap];

		for (int i = 0; i < size; i++)
			elements = old;

		delete[] old;
	}
}

template<typename T>
bool Stack<T>::empty() const
{
	return (size == 0);
}

template<typename T>
T Stack<T>::peek() const
{
	return elements[size - 1];
}

template<typename T>
void Stack<T>::push(T value)
{
	ensureCapacity();
	elements[size++] = value;
}

template<typename T>
T Stack<T>::pop()
{
	return elements[--size];
}

template<typename T>
int Stack<T>::getSize() const
{
	return size;
}

#endif