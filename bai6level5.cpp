#include <iostream>
#include <math.h>
using namespace std; 
void input(int &n);
bool checkSquareRoot (int n);
int countSquareRoot (int n);
void output(int n);
int main()
{
	int n;
	input(n);
	int kq=countSquareRoot(n);
	output(kq);
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

int countSquareRoot (int n)
{
	int count=0;
	for(int i=1;i<n;i++)
		if(checkSquareRoot(i)==true)
			count++;
	return count;	
}
void output(int kq)
{
	cout<<kq;
}

