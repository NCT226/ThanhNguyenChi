#include <iostream>
using namespace std;
void input(int &a, int &b);
int findMax(int a, int b);
void output(int maxnum);
int main()
{
	int a,b;
	input(a,b);
	int maxnum=findMax(a,b);
	output(maxnum);
	return 0;
}

void input(int &a, int &b)
{
	cin>>a>>b;
}

int findMax(int a, int b)
{
	int max=a;
	if (b>max)
		max=b;
	return max;
}

void output(int maxnum)
{
	cout<<maxnum;
}

