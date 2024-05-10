#include<iostream>
#include<cmath>
using namespace std;
class circle
{
	protected : int r;
	            float a,c;
	            
	public: void getcircle()
	        {
	        	cout<<"radius :  ";
	        	cin>>r;
	        	         
	           	a=3.14*r*r;
	            c=2*3.14*r;
			}
			void show()
			{
					
			    cout<<"area of circle :  "<<a<<endl;
				cout<<"circumference :  "<<c<<endl;
				cout<<"--------------------------------------------------------------------------------"<<endl;
			}		
};
class line 
{
	protected :
		    float x1,x2,y1,y2;
		    float s,i;
			double dis,A,B,C;
			double cx,cy;
    public:
    	void getline()
	        {
				cout<<" value of x1 and x2 :  ";
	        	cin>>x1>>x2;
	        	cout<<" value of y1 and y2 :  ";
	        	cin>>y1>>y2;
	           	cout<<"x1 = "<<x1<<"\t"<<"x2 = "<<x2<<endl;
	           	cout<<"y1 = "<<y1<<"\t"<<"y2 = "<<y2<<endl;
		        		        
		        s=(y2-y1)/(x2-x1);
				cout<<"slope = "<<s<<endl;
			    i=y1-s*x1;
			    cout<<"Intercept =  "<<i<<endl;
		        cout<<"-----------------------------------------------------------------------------------"<<endl;
		        
				cout<<"centre of x element : ";
	        	cin>>cx;
	        	cout<<"centre of y element : ";
	        	cin>>cy;
				cout<<"A = ";
		        cin>>A;
		        cout<<"B = ";
		        cin>>B;
		        cout<<"C = ";
		        cin>>C;
				dis=(A*cx+B*cy+C)/sqrt(A*A+B*B);
		        cout<<"Distance bet centre of circle and line =  "<<dis<<endl;
		        
		       	}
		    void tgt()
			{
		         if(dis==0)
				 {
				     cout<<"line is tangent to circle "; 	
				 }
				 else if(dis>0)
				      {
				          cout<<"line is intercept to circle at two point ";      	
					  }
					  else if(dis<0)
					       {
					           cout<<"line is not tanget to circle";       	
						   }		
			}	
	        		    
};
int main()
{
	circle m;
	line l;
	m.getcircle();
	m.show();
	l.getline();
	l.tgt();
}
