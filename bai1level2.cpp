#include<iostream>
#include<iomanip>
using namespace std;
void input(int &a, int &b);
void output(float kq);
float tinhThuong(int a, int b, float &th);

int main()
{
	int a,b;
	input(a,b);
	float kq;
	float quotient = tinhThuong(a,b,kq);
	output(quotient);
}
float tinhThuong(int a, int b, float &kq)
{
	return kq = float(a)/b;
}
void output(float kq)
{
		cout<<setprecision(2)<<fixed<<kq;
}
void input(int &a, int &b)
{
	cin>>a>>b;
}
