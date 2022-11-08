# include <iostream>
# include <math.h>
using namespace std;
void input(int &n);
int laSoHoanHao(int n);
void output(int kq);
int main()
{
	int n;
	input(n);
	int co= laSoHoanHao(n);
	output(co);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

int laSoHoanHao(int n)
{
	int m=0;
	int temp=n;
	for (int i=1; i<n; i++)
	{
		if(n%i==0)
			m=m+i;
	}
	if (m==temp)
		return 1;
	else
		return 0;
}
void output(int kq)
{
	if(kq==1)
		cout<<"La so Hoan Hao";
	else
		cout<<"Khong la so Hoan Hao";
}
