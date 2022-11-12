#include <iostream>
#include<iomanip>
using namespace std; 
void input(int &n);
int tinhGiaiThua(int n);
int tinhTongSo(int n);
float tinhTong(int n);
void output(float kq);
int main()
{
	int n; 
	input(n);
	float sum=tinhTong(n);
	output(sum);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

/*int tinhGiaiThua(int n) //De quy
{
	if(n==0)
		return 1;
	else 
		return n*tinhGiaiThua(n-1);
}*/
int tinhGiaiThua(int n)
{

	int giaiThua=1;
	while (n!=0)
	{
		giaiThua=giaiThua*n;
		n=n-1;
	}
}

int tinhTongSo(int n)
{
	int tong=0;
	for(int i=1; i<=n; i++)
	{
		tong=tong+i;
	}
	return tong;
}

//float tinhTong(int n) 
//Sua lai kieu du lieu double (Vi phep tinh co nhieu phep chia => sai so de xay ra)
float tinhTong(int n)
{
	float tong=0;
	float div;
	for(int i=1;i<=n;i++)
	{
		div=float(tinhTongSo(i))/tinhGiaiThua(i);
		tong=tong+div;
	}
	return tong;
}

void output(float kq)
{
	cout<<kq;
}
