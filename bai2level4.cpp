# include <iostream>
# include <math.h>
using namespace std;
void input(int &n);
bool laNguyenTo(int n);
void output(int kq);
int main()
{
	int n;
	input(n);
	int co = laNguyenTo(n);
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
void output(int kq)
{
	if(kq==true)
		cout<<"La so Nguyen To";
	else
		cout<<"Khong la so Nguyen To";
}
