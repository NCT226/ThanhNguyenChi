#include <iostream>
#include <math.h>
using namespace std; 
void input(int &n);
int checkPrime(int n);
int findMaxPrime(int n);
void output(int n);
int main()
{
	int n;
	input(n);
	int kq=findMaxPrime(n);
	output(kq);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

int checkPrime(int n)
{
	int count=0;
	if (n<2)
		return 1;
	for(int i=2;i<=sqrt(n);i++)
		if (n%i==0)
			count++;
	return count;
}

int findMaxPrime(int n)
{
	int temp=0;
	int max=0;
	int i;
		for(i=1; i<n;i++)
		{
			if(n%i==0)
			{
				if(checkPrime(i)==0)
					temp=i;
				if (temp>max)
				{
					max=temp;
					if(max==2)
						max=0;
				}
			}
		}
		n=n/i;	
	return max;		
}
void output(int kq)
{
	if(kq==0)
		cout<<"Khong co gia tri thoa";
	else
		cout<<kq;
}

