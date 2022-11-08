# include <iostream>
using namespace std;
int giaiThua(int n);
float tinhToHop(int n, int k);
void input (int &n, int &k);
void output(int kq);
int main()
{
	int n,k;
	input(n,k);
	float toHop=tinhToHop(n,k);
	output(toHop);
	return 0;
}

/*int giaiThua(int n)
{
	if (n==0)
		return 1;
	else
		return n*giaiThua(n-1);
}
*/

int tinhGiaiThua(int n) //Khong dung de quy
{
	int giaiThua=1;
	while (n!=0)
	{
		giaiThua=giaiThua*n;
		n=n-1;
	}
	return giaiThua;
}

float tinhToHop(int n, int k)
{
	float toHop; 
			toHop=(giaiThua(n))/(giaiThua(k)*giaiThua(n-k));
	return toHop;
}

void input (int &n, int &k)
{
	cin>>n>>k;
}

void output(int kq)
{
	cout<<kq;
}
