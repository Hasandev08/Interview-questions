#include<iostream>
using namespace std;

int main()
{
	int x = 10, y = 5;

	x = x + y;
	y = x - y;
	x = x - y;
	cout << "After Swapping: x =" << x << ", y=" << y;
}

