#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char *point;
	char *str = "abcd efg";
	int len = strlen(str);
	point = new char[len];
	//cout << len;
	for (int i = 0; i < len; i++)
	{	
		point[i] = str[len - 1 - i];
	}

	for (int j = 0; j < len; j++)
	{
		cout << point[j];
	}
	cout << "\n";
	return 0;
}

