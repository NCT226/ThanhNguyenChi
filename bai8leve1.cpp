# include <iostream>
using namespace std;

void input(char &chr);
char UpperLow(char &c);
void output(char c);
int main()
{
    char chr;
    input(chr);
    char c= UpperLow(chr);
    output(c);
}

void input(char &chr)
 {
   cin>>chr;
 }
 
char UpperLow(char &c)
{
    if ( 'A'<=c && c<= 'Z')
        {
        	c=c+32;
        	return c;
		}
    if ('a'<= c && c <= 'z')
    	{
    		c=c-32;
    		return c;
		}
}

void output(char c)
{
    cout<<c;
}


