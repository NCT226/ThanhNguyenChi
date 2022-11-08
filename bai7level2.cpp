#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
void input(int &a, int &b, int &c);
int giaiPT(int a, int b, int c);
void tinhNghiem(int a, int b, int c, float &x1, float &x2);
void nghiemkep(int a, int b, int c, float &x);
void output(int a, int kq, float x1, float x2, float x);
int main()
{
	int a,b,c;
	input(a,b,c);
	float x1,x2,x;
	int result=giaiPT(a,b,c);
	tinhNghiem(a,b,c,x1,x2);
	nghiemkep(a,b,c,x);
	output(a,result,x1,x2,x);
}

void input(int &a, int &b, int &c)
{
	cin>>a>>b>>c;
}

void tinhNghiem(int a, int b, int c, float &x1, float &x2)
{
    int delta=pow(b,2)-4*a*c;
    x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
}

void nghiemkep(int a, int b, int c, float &x)
{
    x=-b/(2*a);
}
int giaiPT(int a, int b, int c)
{
	int delta=pow(b,2)-4*a*c;
	if (delta>0)
		return 1;
	else 
	{
		if (delta<0)
			return 0;
		else 
			return 2;
	}	
}

void output( int a, int kq, float x1, float x2, float x)
{
	if (a==0)
		cout<<"Linear Equation";
	if (kq==0)
		cout<<"NO SOLUTION";
	else
		if (kq==1)
		{
			cout<<"x1="<<setprecision(2)<<fixed<<x1<<endl;
			cout<<"x2="<<setprecision(2)<<fixed<<x2;
		}
		else
			cout<<"x="<<setprecision(2)<<fixed<<x;
		
}
