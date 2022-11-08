#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std; 
void input(int &n, float &x);
int tinhGiaiThua(int n);
float tinhLuyThua(float x,int n);
float tinhTong(int n, float x);
void output(float kq);

int main()
{
	int n; 
	float x;
	input(n,x);
	float sum=tinhTong(n,x);
	output(sum);
	return 0;
}
/*int tinhGiaiThua(int n)
{
	if(n==0)
		return 1;
	else 
		return n*tinhGiaiThua(n-1);
}
*/

int tinhGiaiThua(int n) //Khong dung de quy
{
	int giaiThua=1;
	while (n!=0)
	{
		giaiThua=giaiThua*n;
		n=n-1;
	}
	return giaiThua;
}

/*float tinhLuyThua(float x,int n)
{
	if(n==0)
		return 1;
	int res=tinhLuyThua(x,n/2);
	if(n%2==0)
		return res*res;
	else 
		return res*res*x;
}
*/

float tinhTong(int n, float x)
{
	float tong=1;
	float div;
	for(int i=1;i<=n;i++)
		{
			div=float(pow(x,i))/tinhGiaiThua(i);
			tong=tong+div;
		}
	return tong;
}

void input(int &n, float &x)
{
	cin>>n>>x;
}


void output(float kq)
{
	cout<<kq;
}
