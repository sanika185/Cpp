#include<iostream>
using namespace std;
class matrix
{
public :
    int m[10][10];
    int size;
public :
     friend istream& operator >>(istream& get,matrix& obj);
     friend ostream& operator <<(ostream& show, matrix& obj);
     matrix operator +(matrix m1);
     matrix operator -(matrix m1);
     matrix operator *(matrix m1);
     
};
istream& operator >>(istream& get,matrix& obj)
{
     cout<<"\nEnter Size : ";
     cin>>obj.size;
     cout<<"\nEnter Matrix : ";
     
     for(int i=0;i<obj.size;i++)
     {
           for(int j=0;j<obj.size;j++)
           {
                 cin>>obj.m[i][j];
           }
     }
    
}
ostream& operator <<(ostream& show, matrix& obj)
{
         
     for(int i=0;i<obj.size;i++)
     {
           for(int j=0;j<obj.size;j++)
           {
                 cout<<obj.m[i][j]<<" ";
           }
           cout<<endl;
     }
     
}
matrix matrix :: operator +(matrix m1)
{
    matrix mat;
    mat.size=size;
    for(int i=0;i<mat.size;i++)
     {
         for(int j=0;j<mat.size;j++)
         {
             mat.m[i][j]=m[i][j]+m1.m[i][j];
         }
     }
     return mat;
}
matrix matrix :: operator -(matrix m1)
{
    matrix mat;
    mat.size=size;
    for(int i=0;i<mat.size;i++)
     {
         for(int j=0;j<mat.size;j++)
         {
             mat.m[i][j]=m[i][j]-m1.m[i][j];
         }
     }
     return mat;
}

matrix matrix :: operator *(matrix m1)
{
    matrix mat;
    mat.size=size;
    
     for(int i=0;i<mat.size;i++)
     {
         for(int j=0;j<mat.size;j++)
         {
             mat.m[i][j]=0;
             for(int k=0;k<mat.size;k++)
             {
                 mat.m[i][j]+=m[i][k]*(m1.m[k][j]);
             }
         }
     }
     return mat;
}

int main()
{
matrix m1,m2,r1,r2,r3;
cin>>m1;
cout<<m1;

cin>>m2;
cout<<m2;

r1=m1+m2;
cout<<"Addition : \n";
cout<<r1;

r2=m1-m2;
cout<<"Substraction : \n";
cout<<r2;

r3=m1*m2;
cout<<"Multiplication : \n";
cout<<r3;
}
