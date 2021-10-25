#include<iostream>
using namespace std;
int count = 0;
class test {
	Public:
	test()
	{
		count++;
		cout<<"Constructor Object NO "<<count<<endl;
			
	}
	~test()
	{
		cout<<"Constructor Object NO "<<count<<endl;
		count--;	
	}
};
int main()
{
			cout<<"Inside main"<<endl;
			cout<<"first object"<<endl;
			test t1;
			{
				cout<<"Inside BLOCK= 1"<<endl;
				cout<<"CREATE SECOND OBJECT"<<endl;
				test t1,t2;
				cout<<"Leaving block 1"<<endl;
				
			}
			cout<<"back to main block"<<endl;
			return 0;
}	
