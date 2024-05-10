#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
   private:int date,month,year;
   
    public: void display();
            void display1();
            void difference();
    Date();
    Date(int day,int m,int y);
};

     
Date::Date()

 {
         cout<<"\n Enter date"<<endl;
         cin>>date;
         cout<<"\n Enter month"<<endl;
         cin>>month;
         cout<<"\n Enter year"<<endl;
         cin>>year;
} 
Date::Date(int day, int m, int y)
{
   date=day;
   month=m;
   year=y;
}

void Date::display()
{
   cout<<date<<"-"<<month<<"-"<<year<<endl;
}
void Date::display1()
{
   cout<<date<<"-";
   if(month==1)
   cout<<"jan";
   else if(month==2)
   cout<<"feb";
   else if(month==3)
   cout<<"mar";
   else if(month==4)
   cout<<"apr";
   else if(month==5)
   cout<<"may";
   else if(month==6)
   cout<<"june";
   else if(month==7)
   cout<<"july";
  else if(month==8)
   cout<<"aug";
   else if(month==9)
   cout<<"sep";
   else if(month==10)
   cout<<"oct";
   else if(month==11)
   cout<<"nov";
   else if(month==12)
   cout<<"dec";
   else
   cout<<"
   
  cout<<"-"<<year%100<<endl;
}
void Date::difference()
{ 
   int a;
   a=d1.date-d.date;
   cout<<a;
}

int main()
{
   Date d;
   Date d1;
   d.display();
   d1.display();
   d.display1();
   d1.display1();
   d.difference();
   d1.difference();
   
   
}
   
   

