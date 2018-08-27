#include<iostream> //  code to remove the duplicate characters 
#include<cstring>
using namespace std;


class Array
{
private:
	char * Str;
	char * Str1;
	int num;
	int num1;
public:
	int i, j;
	int count = 0;
	Array(char * myname, char *yourname)
	{
		int len = strlen(myname) + 1;
		Str = new char[len];
		strcpy_s(Str, len, myname);
		int len1 = strlen(yourname) + 1;
		Str1 = new char[len1];
		strcpy_s(Str1, len1, yourname);
		num = len;
		num1 = len1;
	}

	void func()
	{
		if (num = num1)
		{
			for (i = 0; i < num; i++)
			{
				for (j = 0; j < num; j++)
				{
					if (Str[i] == Str1[j])
					{
						count++;
					}
				}

			}
		}
		else
		{
			cout << "not anagram\n";
		}
	}

	void Cnt()
	{
		if (count == num)
		{
			cout << "Anagram";
		}
	}

	~Array()
	{
		delete[]Str;
		delete[]Str1;
	}
};


int main(void)
{
	Array var("asdfghj","jahsgdf");
	var.func();
	var.Cnt();
	cout << "\n";
	return 0;
}
