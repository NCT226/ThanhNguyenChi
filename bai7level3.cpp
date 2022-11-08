# include <iostream> 
# include <math.h>
using namespace std;
void input (int &n);
int tinhTongCacChuSo(int n);
void output(int kq);
int main()
{
	int n;
	input(n);
	int tongCacChuSo=tinhTongCacChuSo(n);
	output(tongCacChuSo);
	return 0;
}

void input (int &n)
{
	cin>>n;
}

int tinhTongCacChuSo(int n)
{
	int s=0;
		while(n>0)
		{
			s=s+(n%10);
			n=n/10;
		}
	return s;
}

void output(int kq)
{
	cout<<kq;
}
