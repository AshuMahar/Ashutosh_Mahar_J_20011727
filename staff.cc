#include<iostream>
using namespace std;
class staff
{
    int code; 
    string name;
    public:
    void get_info(int a, string b)
    {
        code = a;
        name =b;
    }
    void display1()
    {
        cout<<"Code is:"<<code<<endl;
        cout<<"Name is:"<<name<<endl;
    }
};
class teacher : public staff 
{
    string subject;
    int  publication;
    public:
   void get_info2(string d,int e)
   {
        subject=d;
        publication=e;
   }
   void display2()
   {
         cout<<"Subject is :"<<subject<<endl;
         cout<<"Publication is:"<<publication<<endl;
   }
    
};
class typist: public staff
{
    int speed;
    public:
    void getspeed(int s)
    {
        speed =s;
    }
    void display3()
    {
        cout<<"Speed of typist is:"<<speed<<endl;
    }
    
};
class officer : public staff
{
    char grade;
    public:
    void get_grade(char g)
    {
        grade =g;
    }
    void display4()
    {
        cout<<"Grade :"<<grade<<endl;
    }
};
class regular : public typist
{
    int salary;
    public:
    void get_salary(int s)
    {
        salary = s;
        
    }
    void display5()
    {
        cout<<"Salary of typist is :"<<salary<<endl;
    }

};                                                                           
class causual : public typist
{
    int wages;
    public:
    void get_wages(int w)
    {
        wages=w;
    }
    void display6()
    {
        cout<<"Wages per day is:"<<wages<<endl;
    }
};
int main()
{
    teacher s1;
    officer s2;
    regular s3;
    causual s4;
    s1.get_info(1,"Ashu");
    s1.display1();
    s1.get_info2("English",5);
    s1.display2();
    s3.getspeed(55);
    s3.display3();
    s2.get_grade('A');
    s2.display4();
    s3.get_salary(50000);
    s3.display5();
    s4.get_wages(1500);
    s4.display6();
   
}

















