# include <iostream> 
# include <math.h>
using namespace std;
void input (int &n);
int tinhTongUoc(int n);
void output(int kq);
int main()
{
	int n;
	input(n);
	int sum=tinhTongUoc(n);
	output(sum);
	return 0;
}

void input (int &n)
{
	cin>>n;
}

int tinhTongUoc(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
		{
			sum=sum+i;
			n=n/i;
		}
	return sum;
}

void output(int kq)
{
	cout<<kq;
}
