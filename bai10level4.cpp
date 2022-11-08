# include<iostream> 
using namespace std; 
void input( int &n);
int showFibonacci(int n);
void output(int n);
int main()
{
	int n;
	input(n);
	int kq=showFibonacci(n);
	output(kq);
}

int showFibonacci(int n)
{
	int f0=0;
	int f1=1;
	int fn=1;
		if (n==0||n==1)
			return 1;
		for(int i=2; i<=n; i++)
		{
			f0=f1;
			f1=fn;
			fn=f0+f1;
		}
	return fn;
}
void input( int &n)
{
	cin>>n;
}

void output(int n)
{
	for(int i=0; i<n; i++)
		cout<<showFibonacci(i)<<" ";
}


