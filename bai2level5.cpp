#include <iostream>
#include <math.h>
using namespace std; 
void input(int &n);
bool isMersennePrime (int x);
int countMersennePrime(int n);
void output(int n);
int main()
{
	int n;
	input(n);
	int kq=countMersennePrime(n);
	output(kq);
	return 0;
}

void input(int &n)
{
	cin>>n;
}
bool isMersennePrime (int x)
{
		int tongUoc=0;
		{
			for(int i=1;i<x;i++)
			if (x%i==0)
				tongUoc=tongUoc+i;
			if(tongUoc==x)
				return true;
			return false;
		}
}
int countMersennePrime(int n)
{
	int d=0;
	for(int i=6;i<n;i++)
		if (isMersennePrime(i))
			d++;
	return d;
}
void output(int result)
{
	cout<<result;
}

