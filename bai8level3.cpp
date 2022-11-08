# include <iostream> 
# include <math.h>
using namespace std;
void input (int &n);
int timDaoSo(int n);
void output(int kq);
int main()
{
	int n;
	input(n);
	int daoSo=timDaoSo(n);
	output(daoSo);
	return 0;
}

void input (int &n)
{
	cin>>n;
}

int timDaoSo(int n)
{
	int m=0;
		while(n>0)
		{
			m=m*10+(n%10);
			n=n/10;
		}
	return m;
}

void output(int kq)
{
	cout<<kq;
}
