//ASHUTOSH MAHAR UNI ROLL:2018244 SEC:J  ID:20011727
#include<iostream>
using namespace std;
double fact(int n);
int main()
    {
    	int n ;
    	
	cout<<" Enter Number To Find Its Factorial:  ";
	cin>>n;
	fact(n);
	return 0;
    }
    double fact(int n)
    {
    	int  factorial=1;
    	for (int a=1;a<=n;a++) {
		factorial=factorial*a;
	}
	cout<<"Factorial of Given Number is ="<<factorial<<endl;
	return 0;
    }
    		
