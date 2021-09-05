#include <iostream>

using namespace std;

void katarn(int);

int main()
{
	int x;

	cout << "Press x: ";

	cin >> x;

	katarn(x);

	return 0;
}


void katarn(int y)
{
	char d[40];

	int i;

	for (i = 0; y; i++)
	{
		d[i] = y % 2;

		y /= 2; 
	}

	for (i--; i >= 0; i--)
	{
		cout << (int)d[i];
	}
}