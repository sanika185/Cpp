#include<iostream>
using namespace std;
class person
{
    
    protected :
    string email,nm,add,mob;
    
    public:
           void getp();
           void showp();
    
};
class student : public person
{
    string prn;
    string cls;
    float gr;
    public:
          void gets();
          void shows();
};
class employee : public person
{
   string eid,sal;
   string des;
   public: 
          void gete();
          void showe();
};          
void person ::getp()
{
    cout<<"Name= ";
    cin>>nm;
    cout<<"Email_id= ";
    cin>>email;
    cout<<"Address= ";
    cin>>add;
    cout<<"Mobile_number= ";
    cin>>mob;
    
}   
void person ::showp()
{
    
    cout<<nm<<"\t"<<email<<"\t"<<add<<"\t"<<mob<<"\t";
}
void student ::gets()
{
    getp();
    cout<<"PRN= ";
    cin>>prn;
    cout<<"class= ";
    cin>>cls;
    cout<<"Grade= ";
    cin>>gr;
}
void student ::shows()
{
    showp();
    
    cout<<prn<<"\t"<<cls<<"\t"<<gr<<endl;
}
void employee ::gete()
{
    getp();
    cout<<"Employee_id = ";
    cin>>eid;
    cout<<"Salary= ";
    cin>>sal;
    cout<<"Designation= ";
    cin>>des;
}
void employee ::showe()
{
    showp();
   
    cout<<eid<<"\t"<<sal<<"\t"<<des<<endl;
}
int main()
{

    char k;
    cout<<"(student/employee) =  ";
    cin>>k;
    if(k=='s' || k=='S')
    {
        student obj;
        obj.gets();
        cout<<"nm\temail\t\tadd\tmob\t\tPRN\t\tclass\tgrade"<<endl;
        obj.shows();
    }
    else
    {
        employee obj;
        obj.gete();
        cout<<"nm\temail\t\tadd\t\teid\t\tsal\tdes"<<endl;
        obj.showe();
    }
}








 
