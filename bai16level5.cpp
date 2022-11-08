#include <iostream>
#include <math.h>
using namespace std;
void input(int &n);
void timPhuongAnToiUu(int n, int &toMotTram, int &toNamMuoi, int &toHaiMuoi, int &toMuoi);
void output(int toMotTram, int toNamMuoi, int toHaiMuoi, int toMuoi);
int main()
{
	int toMotTram, toNamMuoi, toHaiMuoi, toMuoi;
	int n;
	input(n);
	timPhuongAnToiUu(n, toMotTram, toNamMuoi, toHaiMuoi, toMuoi);
	output(toMotTram, toNamMuoi, toHaiMuoi, toMuoi);
	return 0;	
}

void input(int &n)
{
	do
	{ 
		cin>>n;
	}while (n%10000!=0);
}

void timPhuongAnToiUu(int n, int &toMotTram, int &toNamMuoi, int &toHaiMuoi, int &toMuoi)
{
	int temp=n/10000;
	toMotTram=temp/10;
	temp=(n%100000);
	toNamMuoi=temp/5;
	temp=(temp%50000);
	toHaiMuoi=temp/2;
	temp=(temp%20000);
	toMuoi=temp;
}

void output(int toMotTram, int toNamMuoi, int toHaiMuoi, int toMuoi)
{
	cout<<toMotTram<<endl;
	cout<<toNamMuoi<<endl;
	cout<<toHaiMuoi<<endl;
	cout<<toMuoi;
}
