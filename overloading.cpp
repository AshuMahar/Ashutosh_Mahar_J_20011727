#include<iostream>
using namespace std;
double area(double s);
double area(double l, double b);
float area(float r);

  int main()
    {
 	 double s , l , b;
	 float r;
 	 cout<<"Enter Side of square "<<endl;
 	 cin>>s;
 	 cout<<"Enter l and b  of rectangle "<<endl;
	 cin>>l>>b;
	 cout<<"Enter radius of circle"<<endl;
 	 cin>>r;
	 area(s);
	 area(l,b);
	 area(r);
 
    }
    double area (double s)
    {
    	cout<<"Area of square: "<<s*s<<endl;
    	
    }
    double area (double l, double b)
    {
    	cout<<"Area of rectangle: "<<l*b<<endl;
    	
    }
    float area (float r)
    {
    		cout<<"Area of circle: "<<3.14*r*r<<endl;
    	
    }
    
