#include <iostream>
#include <cstring>
using namespace std;

class Array
{
private:
	char *arr;
	char *point;
	int num;
public:
	Array(char *str):arr(str)
	{
		int len = strlen(str);
		point = new char[len];
		num = len;
	}

	void Rev()
	{
		for (int i = 0; i < num; i++)
		{
			point[i] = arr[num - 1 - i];
		}
	}

	void Print()
	{
		for (int j = 0; j < num; j++)
		{
			cout << point[j];
		}
	}

	~Array()
	{
		delete[] point;
	}
};

int main(void)
{
	Array str("abcdefgh");
	str.Rev();
	str.Print();
	cout << "\n";
}

