#include <iostream>

using namespace std;

template<typename T>

class Stack
{
	T _first;
	T _end;
	T* _stack = new T;
	int _size = 0;
	bool _stop = true;
public:


	void push(T elem) {
		_stack[_size] = elem;
		_size++;
	}

	void pop() {
		
		_size--;

	}
	void sout() {
		for (size_t i = 0; i < _size; i++)
		{
			cout << _stack[i];
		}
		cout << endl;
	}


};

void main() {
	Stack<int> st;
	for (size_t i = 0; i < 4; i++)
	{
		st.push(i);

	}st.sout();
	st.pop();
	st.sout();


}

