# include <iostream>
using namespace std;
void input(int &n);
int chekEvenElement(int n);
void output(bool co);
int main()
{
	int n;
	input(n);
	bool co=chekEvenElement(n);
	output(co);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

int chekEvenElement(int n)
{
	
	while (n!=0)
	{
		int m=n%10;
		if (m % 2 !=0)
			return false;
		n=n/10; 
	}
	return true;
}
void output(bool co)
{
	if(co)
	cout<<"All of elements is Even Number";
	else
		cout<<"There is at least an element is Odd Number";
}
