#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string>v;
	v.push_back("1,2,3");
	v.push_back("3,4,5");
	//for (const auto & x : v)
		//cout << x << endl;
	cout << v[0] << "\n";
	cout << v[1];
	return 0;
}