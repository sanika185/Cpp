#include<iostream>
using namespace std;
class circle
{
     int cx,cy;
     float circum,x1,x2,y1,y2,s;
 
     
     public :
             circle(int cx,int cy)
             {
             
                this->cx=cx;
                this->cy=cy;
             }  
             circle(float x1,float x2,float y1,float y2)
             {
                 this->x1=x1;
                 this->x2=x2;
                 this->y1=y1;
                 this->y2=y2; 
             }
            
             void show()
             {
                s=(y2-y1)/(x2-x1);
                cout<<"slope =  "<<s<<endl;
                
             }
              
             void get()
             {
                cout<<"value of x1,x2,y1,y2 :  ";
                cin>>x1>>x2>>y1>>y2;
             }
             void showint()
             {
               
               s=(y2-y1)/(x2-x1);
               float h=y2-y1;
               float j=x2-x1;
               float f=s*j;
               cout<<"(y2-y1) =  "<<h<<endl;
               cout<<"(x2-x1) =  "<<j<<endl;
               cout<<"(s*(x2-x1)) =  "<<f<<endl;
                if(h=f)
                cout<<"This is tanget "<<endl;
                else
                cout<<"This is not tangent "<<endl;
                
             }
             
             
};
float area(float r)
{
    return(3.14*r*r);
}
float circum(int r)
{
    return(2*3.14*r);
}
int main()
{
   float a,b,q;
   int p;
  
   circle c(3,4);
   
   cout<<"Radius :  ";
   cin>>b;
   a=area(b);
   cout<<"area of circle = "<<a<<endl;
   
   cout<<"Radius :  ";
   cin>>p;
   q=circum(p);
   cout<<"circumference = "<<q<<endl;
   
   circle m(3,2,3,2);
   m.show();
   
   m.get();
   m.showint();
   
}
