#include<iostream>
#include<cstring>
using namespace std;


class AString
{
private:
	char * name;
	int num;
public:
	int i, j;
	AString(char * myname)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		num = len;
	}
	void func()
	{
		for (i = 0; i < num - 1; i++)
		{
			for (j =i+1; j < num; j++)
			{
				if (name[i] == name[j])
				{
					name[i] = NULL;
					name[j] = name[i];
				}
			}
			
			if (name[i] != NULL)
				cout << name[i];
				
		}
	}

	~AString()
	{
		delete[]name;
	}
};


int main(void)
{
	AString var("asdfaaa");
	var.func();
	cout << "\n";
	return 0;
}