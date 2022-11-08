# include <iostream>
# include <math.h>
using namespace std;
void input(int &n);
int demSoNguyenTo(int n);
bool laNguyenTo(int n);
void output(int co);
int main()
{
	int n;
	input(n);
	int co=demSoNguyenTo(n);
	output(co);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

bool laNguyenTo(int n)
{
	if(n==1)
		return false;
	for(int i=2;i<sqrt(n);i++)
		if (n%i==0)
			return false;
	return true;	
}

int demSoNguyenTo(int n)
{
	int d=0;
	int temp;
	while (n!=0)
	{
		temp=n%10;
		if(laNguyenTo(temp))
			d++;
		n=n/10;
	}	
	return d;
}
void output(int co)
{
	cout<<co;
}
