#include <iostream>
#include <math.h>
using namespace std; 
void input(int &n);
bool checkSquareRoot (int n);
void pintSquareRoot(int n);
void output(int n);
int main()
{
	int n;
	input(n);
	pintSquareRoot(n);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

bool checkSquareRoot(int n)
{
	int sqr=sqrt(n);
		if (sqr*sqr==n)
			return true;
		return false;
}

void pintSquareRoot (int n)
{
	for(int i=1;i<n;i++)
		if(checkSquareRoot(i)==true)
			output(i);	
}
void output(int kq)
{
	cout<<kq<<" ";
}

