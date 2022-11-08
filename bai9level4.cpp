# include <iostream>
using namespace std;
void input(int &n);
int kiemTraGiamDan(int n);
void output(bool co);
int main()
{
	int n;
	input(n);
	bool co=kiemTraGiamDan(n);
	output(co);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

int kiemTraGiamDan(int n)
{
	int temp1,temp2;
	while (n!=0)
	{
		temp1=n%10;
		temp2=(n/10)%10;
		if (temp1>temp2)
			return false;
		n=n/10;
	}
	return true;
}
void output(bool co)
{
	if(co)
	cout<<"So giam dan";
	else
		cout<<"Khong la so giam dan";
}
