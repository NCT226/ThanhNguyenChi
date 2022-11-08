#include <iostream>
#include <math.h>
using namespace std;
void input(int &n);
void output(int n); 

int main()
{
	int n;
	cout<<"Enter an integer numbers: ";
	input(n);
	cout<<"Result= ";
	output(n);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

void output(int n)
{
	cout<<abs(n);
}

