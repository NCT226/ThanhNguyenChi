# include <iostream>
# include <math.h>
using namespace std;
void input(int &n);
int kiemTraSoDoiXung(int n);
void output(bool co);
int main()
{
	int n;
	input(n);
	bool co= kiemTraSoDoiXung(n);
	output(co);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

int kiemTraSoDoiXung(int n)
{
	int s=0;
	while (n>0)
	{
		int m=n%10;
		s=s*10+m;
		n=n/10;
	if (s==n)
		return true;
	return false;
	}
}
void output(bool co)
{
	if(co==true)
		cout<<"La so Doi Xung";
	else
		cout<<"Khong la so Doi Xung";
}
