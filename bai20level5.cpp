#include <iostream>
#include <math.h>
using namespace std; 
void input(int &n);
void output(int i, int d, int n);
void phanTichThuaSoNguyenTo(int n);
int main()
{
	int n;
	input(n);
	phanTichThuaSoNguyenTo(n);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

void output(int i, int d, int n)
{
	if(d>1)
		cout<<i<<"^"<<d;
	if(d==1)
		cout<<i;
	if (n>1)
		cout<<"*";
}

void phanTichThuaSoNguyenTo(int n)
{
    int d=0;
    int i=2;
	while (n>0)
	{
		if (n%i==0)
		{
			d=d+1;
			n=n/i;
		}
		else 
		{
			if(d>0)
				output(i,d,n);
			d=0;
			i++;
		}
	}
}
