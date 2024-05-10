#include<iostream>
using namespace std;
class B
{
    public:
	void display()
        {
            cout<<"this is base class"<<endl;
        }
        void view()
        {
            cout<<"this is base view"<<endl;;
        }
};
class D1: public virtual B 
{
    public:
	void display()
        {
            cout<<"this is D1 class";
        }
        void view()
        {
            cout<<"this is D1 view";
        }
};
class D2: public virtual D1,public virtual B
{
    public:
	void display()
        {
            cout<<"this is D2 class";
        }
        void view()
        {
            cout<<"this is D2 view";
        }
};
class D3: public virtual D1,public virtual D2
{
    public:
	void display()
        {
            cout<<"this is D3 class";
        }
        void view()
        {
            cout<<"this is D3 view";
        }
};
int main()
{
    B*b;
    D3 d;
    b=&d;
    b->display();
    b->view();
}
