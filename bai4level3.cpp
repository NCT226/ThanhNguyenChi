# include <iostream> 
# include <math.h>
using namespace std;
void input (int &n);
int tinhGiaiThua(int n);
void output(int kq);
int main()
{
	int n;
	input(n);
	int sum=tinhGiaiThua(n);
	output(sum);
	return 0;
}

void input (int &n)
{
	cin>>n;
}

int tinhGiaiThua(int n)
{
	int giaiThua=1;
	for(int i=1;i<=n;i++)
		giaiThua=giaiThua*i;
	return giaiThua;
}

void output(int kq)
{
	cout<<kq;
}
