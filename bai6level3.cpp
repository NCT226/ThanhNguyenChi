# include <iostream> 
# include <math.h>
using namespace std;
void input (int &n);
int demUoc(int n);
void output(int kq);
int main()
{
	int n;
	input(n);
	int count=demUoc(n);
	output(count);
	return 0;
}

void input (int &n)
{
	cin>>n;
}

int demUoc(int n)
{
	int d=0;
	for(int i=2;i<=n;i++)
		if(n%i==0)
		{
			d=d+1;
			n=n/i;
		}
	return d;
}

void output(int kq)
{
	cout<<kq;
}
