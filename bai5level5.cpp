#include <iostream>
#include <math.h>
using namespace std; 
void input(int &n);
bool isMersennePrime (int x);
void printMersennePrime(int n);
void output(int n);
int main()
{
	int n;
	input(n);
	printMersennePrime(n);
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
void printMersennePrime(int n)
{
	for(int i=6;i<n;i++)
		if (isMersennePrime(i))
			output(i);
}
void output(int result)
{
	cout<<result<<" ";
}

