//ASHUTOSH MAHAR 20011727 SEC:J
#include <string.h>
#include <iostream>
using namespace std;
  
    int main()
   {
    
   	 string s1  ;
    	cout<<"Enter line "<<endl;
   	cin>>s1; 
   	int a , b;
   	cout<<"Enter starting and ending indexes"<<endl;
   	cin>>a>>b;
  
    
      string r = s1.substr(a-1, b-1);
  
     cout << "String is: " << r;
  
     return 0;
}
