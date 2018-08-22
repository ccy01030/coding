#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	char * name;
public:
	Person(char * myname)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		for (int i = 0; i < len - 1; i++)
		{
			for (int j = i + 1; j < len; j++)
			{
				if (name[i] == name[j])
				{
					cout << "not unique\n";
					break;
				}
			}
		}
	}
	~Person()
	{
		delete[]name;
	}
};

int main(void)
{
	Person father("my father is going");
	return 0;
}