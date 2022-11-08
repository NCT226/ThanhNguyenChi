# include <iostream> 
# include <math.h>
using namespace std;
void input (int &a, int &b, int &n);
int tinhTongSo(int a, int b, int n);
void output(int kq);
int main()
{
	int a,b,n;
	input(a,b,n);
	int sum=tinhTongSo(a,b,n);
	output(sum);
	return 0;
}

void input (int &a, int &b, int &n)
{
	cin>>a>>b>>n;
}

int tinhTongSo(int a, int b, int n)
{
	int tong=0;
	for(int i=1;i<n;i++)
		if ((i%a==0)&&(i%b!=0))
			tong=tong+i;
	return tong;
}
void output(int kq)
{
	cout<<kq;
}
