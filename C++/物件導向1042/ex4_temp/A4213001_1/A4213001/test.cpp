#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;




template<typename T>
void simpleOperation(Stack<T> &a){
	char c1, c2, ans;

	for (int q = 1; q <= 3; q++){
		c1 = a.pop();
		c2 = a.pop();
		if (c2 == '+'){
			ans = (c1 - 48) + (a.pop() - 48);
		}
		if (c2 == '-'){
			ans = (c1 - 48) - (a.pop() - 48);
		}
		if (c2 == '*'){
			ans = (c1 - 48) *(a.pop() - 48);
		}
		if (c2 == '/'){
			ans = (c1 - 48) / (a.pop() - 48);
		}
		if (ans <= 9){
			a.push(ans + 48);
		}
		else
			cout << "X";
	}
	cout << a.pop() << endl;
}

int main()
{
	// Create a stack of int values
	Stack<int> intStack;
	Stack<char> charStack;
	Stack<char> char2Stack;
	char charAry[7] = { '6', '+', '2', '/', '4', '*', '2' };
	char char2Ary[7] = { '8', '+', '2', '/', '4', '*', '2' };
	for (int i = 0; i < 10; i++){
		intStack.push(i);
	}
	for (int q = 6; q >= 0; q--){
		charStack.push(charAry[q]);
	}
	for (int q = 6; q >= 0; q--){
		char2Stack.push(char2Ary[q]);
	}
	
	
	while (!intStack.empty()){
	cout << intStack.pop() << " ";
	}
	cout << endl;
	// Create a stack of strings
	Stack<string> stringStack;
	stringStack.push("Chicago");
	stringStack.push("Denver");
	stringStack.push("London");

	while (!stringStack.empty())
	cout << stringStack.pop() << " ";
	cout << endl;
	cout << "6+2/4*2=";
	simpleOperation(charStack);
	cout << "8+2/4+2=";
	simpleOperation(char2Stack);
	system("pause");
	return 0;
}