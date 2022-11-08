#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void input(float &n);
int lamTron(float n);
void output(float kq);

int main()
{
    float n;
    input(n);
	int kq=lamTron(n);
    output(kq);
    return 0;
}

void input(float &n)
{
    cin>>n;
}
int lamTron(float n)
{
	int soNguyen= int(n);
	float soDu=n-soNguyen;
	if(soDu >= 0.5)
	{
		soNguyen=soNguyen+1;
		return soNguyen;
	}
	else
		return soNguyen;
}
void output(float kq)
{
    cout<<kq;
}

