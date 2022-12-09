#include<iostream>
using namespace std;
int main()
{
	int n = 5;
	int arr[n];

	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		int sum = 0;
		for(int j = i+1; j < n; j++)
		{
			sum += arr[j];
			arr[i] = sum;
		}
		cout << arr[i] << endl;
	}
}

