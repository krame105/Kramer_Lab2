#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float x;

	cout << "Hello, my name is DJ and I'm going to solve the equation:" << endl;
	cout << "Ax + B = 0" << endl;
	cout << "For x" << endl;

	cout << "Please enter a value for A:";
	cin >> A;

	cout << "Please enter a value for B:";
	cin >> B;

	cout << "Solving..." << A << "x +" << B << " = 0" << endl;

	x = (-B / A);
	cout << "x=" << x << endl;


}