#include <iostream>
#include <math.h>
using namespace std; 
void input(int &n);
int kiemTraNguyenTo(int n);
int demUocNguyenTo (int n);
void output(int n);
int main()
{
	int n;
	input(n);
	int kq=demUocNguyenTo(n);
	output(kq);
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

int demUocNguyenTo (int n)
{
	int d=0;
	int i;
	for(i=1;i<n;i++)
		if(n%i==0)
			if(kiemTraNguyenTo(i)==0)
				d=d+1;
	n=n/i;
	return d;	
}
void output(int kq)
{
	cout<<kq;
}

