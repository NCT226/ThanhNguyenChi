#include <iostream>
using namespace std; 
void input(int &n);
int tinhGiaiThua(int n);
int tinhTongGiaiThua(int n);
void output(int kq);
int main()
{
	int n; 
	input(n);
	int sumOfFactorial=tinhTongGiaiThua(n);
	output(sumOfFactorial);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

/*int tinhGiaiThua(int n) //Dequy
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

int tinhTongGiaiThua(int n)
{
	int tong=0;
	for(int i=1;i<=n;i++)
		tong=tong+tinhGiaiThua(i);
	return tong;
}

void output(int kq)
{
	cout<<kq;
}
