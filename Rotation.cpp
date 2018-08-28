#include <iostream>
using namespace std;

class Mat
{
private:
	int matrix[3][3] = { {0,1,2},{3,4,5},{6,7,8} };
public:
	void Rot();
};

void Mat ::Rot()
{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << matrix[3-1-j][i];
			}
		}
}

int main(void)
{
	Mat mat;
	mat.Rot();
	return 0;
}
