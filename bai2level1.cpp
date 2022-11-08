#include <iostream>
#include <math.h>
using namespace std;
void input(int &n);
int findAbsolute (int n);
void output(int n); 

int main()
{
	int n;
	input(n);
	int abs=findAbsolute (n);
	output(abs);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

int findAbsolute (int n)
{
	if (n<0)
		n=n*-1;
	return n;
}

void output(int n)
{
	cout<<n;
}

