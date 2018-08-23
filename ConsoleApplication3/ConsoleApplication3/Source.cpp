#include<iostream>
#include<cstring>
using namespace std;

class AString
{
private:
	char * name;
	int num;
public:
	int i,j;
	AString(char * myname)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		num = len;
	}
	void func()
	{
		for (int i = 0; i < num - 1; i++)
		{
			for (int j = i + 1; j < num; j++)
			{
				if (name[i] == name[j])
				{
					cout << "not unique\n";
					break;
				}
			}
		}
	}
	~AString()
	{
		delete[]name;
	}
};

int main(void)
{
	AString var("hello world");
	return 0;
}
