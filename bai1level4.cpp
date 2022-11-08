# include <iostream>
# include <math.h>
using namespace std;
void input(int &n);
int laSoChinhPhuong(int n);
void output(int kq);
int main()
{
	int n;
	input(n);
	int co = laSoChinhPhuong(n);
	output(co);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

int laSoChinhPhuong(int n)
{
		int squareRoot= int sqrt(n);
		long long square=squareRoot*squareRoot;
		if (square==n)
		 	return 1;
		else 
			return 0;	
}
void output(int kq)
{
	if(kq==1)
		cout<<"True";
	else
		cout<<"False";
}
