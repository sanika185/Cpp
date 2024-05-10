#include<iostream>
using namespace std;
class complex
{
     int a,b;
     public :
     void getd()
     {
          cout<<"\nEnter a and b : ";
          cin>>a>>b;
     }
    void  operator -()
     {
     a=-a;
     b=-b;
     }
     void operator ++()
     {
     ++a;
     ++b;
     }
     void operator ++(int)
     {
       a++;
       b++;
     }
     complex operator +(complex ob)
     {
        complex t;
        t.a=a+ob.a;
        t.b=b+ob.b;
        return t;
     }
      complex operator -(complex ob)
     {
        complex t;
        t.a=a-ob.a;
        t.b=b-ob.b;
        return t;
     }
    void  display()
     {
         cout<<a<<"+"<<b<<"i"<<"\n";
     }
};
int main()
{
    complex obj1,obj2,res1,res2;
    obj1.getd();
    obj2.getd();
    cout<<"\nInput values : \n";
    obj1.display();
    obj2.display();
    res1=obj1+obj2;
    res2=obj1-obj2;
    cout<<endl;
    cout<<"Result : \n";
    res1.display();
    res2.display();
    ++obj1;
    obj2++;
    cout<<"After increment : \n";
    obj1.display();
    obj2.display();
    -obj1;
    -obj2;
    cout<<"\nAfter negation : ";
    obj1.display();
    obj2.display(); 
}
