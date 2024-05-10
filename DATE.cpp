#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
public :
     int date1;
     int date2;
     int month1;
     int month2;
     int year1;
     int year2;
     string mon;
public:
     void getdata()
     {
     cout<<"Date 1 : ";
     cin>>date1;
     cout<<endl;
     cout<<"Month 1 : ";
     cin>>month1;
     cout<<endl;
     cout<<"Year 1 : ";
     cin>>year1;
     cout<<endl;
     cout<<"Date 2 : ";
     cin>>date2;
     cout<<endl;
     cout<<"Month 2 : ";
     cin>>month2;
     cout<<endl;
     cout<<"Year 2 : ";
     cin>>year2;
     cout<<endl;
     }
     
    Date() 
     {
     getdata();
     cout<<"Start date : "<<date1<<"-"<<month1<<"-"<<year1<<endl;
     cout<<"End date : "<<date2<<"-"<<month2<<"-"<<year2<<endl;
     }
      
     Date(int d,int m,int y)
     {
      cout<<d<<"/"<<m<<"/"<<y<<endl;
      cout<<"with month name : "<<endl;
      if(m==01 || m==1)
      {
      mon="JAN";
      }
      else if(m==02 || m==2)  
      {
      mon="FEB";
      }
       else if(m==03 || m==3)  
      {
      mon="MAR";
      }
       else if(m==04 || m==4)  
      {
      mon="APR";
      }
       else if(m==05 || m==5)  
      {
      mon="MAY";
      }
      else if(m==06 || m==6)  
      {
      mon="JUN";
      }
      else if(m==07 || m==7)  
      {
      mon="JUL";
      }
      else if(m==8)  
      {
      mon="AUG";
      }
      else if (m==9)  
      {
      mon="SEP";
      }
      else if(m==10)  
      {
      mon="OCT";
      }
      else if(m==11 )  
      {
      mon="NOV";
      }
      else if(m==12)  
      {
      mon="DEC";
      }
      else
      {
      cout<<"Invalid month"<<endl;
      }
      cout<<d<<"/"<<mon<<"/"<<y<<endl;
   }
    void incre(int d,int m,int y)
    { 
    m=m+1;
    if(m>=13)
    {
    m=1;
    y=y+1;
    }
    d=d+1;
    if(m==1 || m==3 || m== 5 || m==7 ||m==8 || m==10 || m==12)
    {
         if(d>=31)
         {
         d=1;
         }
    }
    else if(m==02)
    { 
    if(y%4==0 && y%100!=0 || y%4==0) 
    {
    if(d>=29)
    {
    d=1;
    }
    }
    else
    {
            if(d>=28)
    {
    d=1;
    }
    }
    }
     cout<<"Incremented Date and Month : "<<d<<"/"<<m<<"/"<<y<<endl;; 
    }
  
  void days()
  {
  int days=0;
            if(month1==1 || month1==3 || month1== 5 || month1==7 ||month1==8 || month1==10 || month1==12)
    {
         for(date1;date1<=31;date1++)
         {
         days++;
         }
    }
    else if(month1==02)
    { 
    if(year1%4==0 && year1%100!=0 || year1%4==0) 
    {
        for(date1;date1<=29;date1++)
         {
         days++;
         }
    }
    else
    {
         for(date1;date1<=28;date1++)
         {
         days++;
         }
    }
  }
  else
  {
         for(date1;date1<=30;date1++)
         {
         days++;
         }
  }
  month1++;
  int mon=0;
  for(month1;month1<12;month1++)
  {
  mon++;
  }
 
  for(date2;date2>=1;date2--)
  {
  days++;
  }
  for(month2;month2>=1;month2--)
  {
  mon++;
  }
  days=days+(mon*30.5);
  year1++;
  int yea=0;
  yea=year2-year1;
  days=days+(yea*365.25);
  cout<<"No. of days : "<<days<<endl;
  }
};
int main()
{
Date d;
cout<<"------------------------------------------------------"<<endl;
cout<<"FROM : "<<endl;
Date d2(d.date1,d.month1,d.year1);
cout<<"TO : "<<endl;
Date d3(d.date2,d.month2,d.year2);
cout<<"------------------------------------------------------"<<endl;
d.incre(d.date1,d.month1,d.year1);
d.incre(d.date2,d.month2,d.year2);
cout<<"------------------------------------------------------"<<endl;
d.days();
}
