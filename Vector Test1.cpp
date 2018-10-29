#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[] = { 16,2,77,29 };
	int arr1[] = { 10,20,30 };

	vector<int>v(arr, arr + sizeof(arr) / sizeof(int));
	vector<int>v1(arr1, arr1 + sizeof(arr1) / sizeof(int));

	for (int i=0; i< v.size(); i++)
		cout << arr[i] << ' ';
	cout << "\n";
	for (int i = 0; i< v1.size(); i++)
		cout << arr1[i] << ' ';
	cout << '\n';

	return 0;
}

