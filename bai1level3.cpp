# include <iostream> 
using namespace std;
void input (int &n);
int tinhCapSoCong(int n);
void output(int kq);
int main()
{
	int n;
	input(n);
	int sum=tinhCapSoCong(n);
	output(sum);
	return 0;
}

void input (int &n)
{
	cin>>n;
}

int tinhCapSoCong(int n)
{
	int sum=(n*(1+n)/2);
	return sum;
}

void output(int kq)
{
	cout<<kq;
}
