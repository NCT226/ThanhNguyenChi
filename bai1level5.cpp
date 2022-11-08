#include <iostream>
#include <math.h>
using namespace std; 
void input(int &n);
int kiemTraNguyenTo(int n);
void inCacSoNguyenTo (int n);
void output(int n);
int main()
{
	int n;
	input(n);
	inCacSoNguyenTo(n);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

int kiemTraNguyenTo(int n)
{
	int count=0;
	if (n<2)
		return 1;
	for(int i=2;i<=sqrt(n);i++)
		if (n%i==0)
			count++;
	return count;
}

void inCacSoNguyenTo (int n)
{
	for(int i=1;i<n;i++)
		if(kiemTraNguyenTo(i)==0)
			output(i);	
}
void output(int kq)
{
	cout<<kq<<" ";
}

