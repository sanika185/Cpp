#include<iostream>
using namespace std;
class sample
{
    int x;
    public:
           void set(int x)
           {
              this->x=x;
           }
          void operator -()
           {
              x=-x;
           }
           void show()
           {
              cout<<"x =  "<<x<<endl; 
           }
           friend sample operator + (sample,sample);
           friend sample operator - (sample,sample);
           
};
sample operator + (sample a,sample b)
{
   sample obj;
   obj.x=a.x+b.x;
   return(obj);
}
sample operator - (sample a,sample b)
{
   sample obj;
   obj.x=a.x-b.x;
   return(obj);
}
int main()
{
   sample obj1,obj2,obj3;
   obj1.set(15);
   obj2.set(100);
   obj1.show();
   obj2.show();
   
   cout<<"addition :  "<<endl;
   obj3=obj1+obj2;
   obj3.show();
   
   cout<<"subtraction :  "<<endl; 
   obj3=obj1-obj2;
   obj3.show();
   
   cout<<"reverse : "<<endl;
   -obj1;
   -obj2;
   obj1.show();
   obj2.show(); 
}
