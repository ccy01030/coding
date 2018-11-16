#include<iostream>
#include<vector>

int main(void)
{
	std::vector <std::vector<int>> v(100);
	const int colum = 10;
	const int row = 10;
	int arr[colum][row] = { {10, 20, 30, 1}, {1,2,3,4,5} };
	
	for (int i = 0; i < colum; i++)
	{
		for (int j = 0; j < row; j++)
		{
			v[i].push_back(arr[i][j]);
			
			if (v[i][j] != NULL)
			{
				std::cout << v[i][j];
			}
		}
	}
}