#include <iostream>
#include <vector>
using namespace std;

class Vector
{
	int num = 0;
	vector <int> var;
	vector<vector<int>> v;
public:
	void CreateVector()
	{
		//int num = 0;
		int x;
		cin >> x;
		for (int i = 0; i < 3; i++)
		{
			var.push_back(x);
		}
		num++;
	}
	void CreateBivector()
	{
		//vector<vector<int>> v;
		v.push_back(var);
		var.clear();
	}

};

int main(void)
{
	Vector V;
	V.CreateVector();
	V.CreateVector();
	//V.Display();

	int k = 0;
}