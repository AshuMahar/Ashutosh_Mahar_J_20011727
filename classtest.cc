#include<iostream>
using namespace std;
class test 
{
	int code;
	static int count;
	public:
	void setcode(void)
	{
		code=++count;
	}
	void showcode(void)
	{
		cout<<"Obj no ="<<code<<endl;
	}
	static void showcount()
	{
		cout<<"count"<<count<<endl;
	}
};

int test :: count;
int main()
{
	test t1,t2,t3;
	t1.setcode();
	t2.setcode();
	test :: showcode();
	t3.setcode();
	test :: showcode();
	t1.showcode();
	t2.showcode();
	t3.showcode();
	return 0;
	
}
