#include <iostream>
#include<math.h> 
using namespace std;
void input(float &n);
int lessthanN(float &n);
void output(int tmp);

int main(){
    float n;
    input(n);
    int tmp=lessthanN(n);
    output(tmp);
    return 0;
}

void input(float &n){
    cin>>n;
}

int lessthanN(float &n){
    int tmp= round(n);
    if (tmp>n)
    {
    	tmp=tmp-1;
    	return tmp;
	}
    else 
        return tmp;
}

void output(int tmp)
{
    cout<<tmp;
}
