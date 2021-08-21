#include <iostream>
using namespace std;

//function declaration
int addition(int a, int b);

int main()
{
	int a, b;	//to store numbers
	int add;	//to store addition 

	//read numbers
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;

	//call function
	add = addition(a, b);

	//print addition
	cout << "Addition is: " << add << endl;

	return 0;
}

//function definition
int addition(int a, int b)
{
	return (a + b);
}