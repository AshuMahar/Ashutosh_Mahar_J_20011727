#include<iostream>
using namespace std;
class parent
{
	public:
	int x;

	void display(void)
	{
		cout<<"Enter the value  of y=";	
		cin>>y;
		cout<<"Value of y = "<<y<<endl;
		
	}

	private:
	int y;
	
	
	

	protected:
	int z;
	
	

};

class child: public parent
{	
	public:
	void show(void)
	{

	cout<<"Enter the value  of z="<<endl;
	cin>>z;
	cout<<"Enter the value  of z="<<z<<endl;
	}
};
int main()
{	
	parent obj ;
	cout<<"Enter the value  of x=";
	cin>>obj.x;	
	cout<<" The value  of x="<<obj.x<<endl;
	obj.display();
	child d;
	d.show();
	
}
