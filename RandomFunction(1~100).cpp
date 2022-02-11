#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int Random(void)
{
	srand((unsigned int)time(NULL));

	int num = rand();
	return (num % 10);
}
int main()
{
	int N = Random();
	if (0 <= N && N < 2)
	{
		cout << "A";
		return 0;
	}
		
	if (2 <= N && N< 4)
	{
		cout << "B";
		return 0;
	}
		
	if (4 <= N && N < 6)
	{
		cout << "C";
		return 0;
	}
		
	if (6 <= N && N < 8)
	{
		cout << "D";
		return 0;
	}
		
	else
	{
		cout << "E";
		return 0;
	}
		
	return 0;
}