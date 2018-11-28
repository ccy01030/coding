#include<iostream>
#include<vector>

class StoreVector
{
private:
	static const int row = 50;
	static const int column = 50;
	std::vector <std::vector<int>> v;

public:
	StoreVector(int arr[row][column]);
};

StoreVector::StoreVector(int arr[row][column])
{
	v.resize(100);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			v[i].push_back(arr[i][j]);
		}
	}
};

int main()
{
	int Array[50][50] = { {1,34,5,7,8,9},{2,37,909,76} };
	StoreVector Vec(Array);
}
