#include <iostream>
using namespace std;
void input(int &a, int &b);
int sum (int a, int b);
void output(int sum); 

int main()
{
	int a,b;
	cout<<"Enter two integer numbers: ";
	input(a,b);
	int tong=sum(a,b);
	cout<<"Result= ";
	output(tong);
	return 0;
}

void input(int &a, int &b)
{
	cin>>a>>b;
}

int sum (int a, int b)
{
	int sum=a+b;
	return sum;
}

void output(int sum)
{
	cout<<sum;
}

