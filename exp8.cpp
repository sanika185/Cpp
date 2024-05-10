#include <iostream>
using namespace std;
template <int rows, int cols>
void display(int (&array)[rows][cols])
{
  int i, j;
  cout<<endl;
  for(i = 0; i<rows; i++) 
      {
        for(j = 0; j<cols; j++) 
        {
           cout<<" ";
           cout<<array[i][j];
        }
        cout<<"\n";
     }
}
template <int r, int c>
void display1(int (&arr)[r][c])
{
  int p, q;
  cout<<endl;
  for(p = 0; p<r; p++) 
      {
        for(q = 0; q<c; q++) 
        {
           cout<<" ";
           cout<<arr[p][q];
        }
        cout<<"\n";
     }
}

int main() 
{
  int M1[3][3];
  cout<<"Enter your matrix 1 elements: \n";
  int i, j;
    for(i = 0; i<3; i++)
     {
      for(j = 0; j<3; j++) 
      {
        cout<<"a["<<i<<"]["<<j<<"]: ";
        cin>>M1[i][j];
      }
     }
    display(M1);
    
    int M2[3][3];
    cout<<"Enter matrix 2 elements: \n";
    int p, q;
    for(p = 0; p<3; p++) 
    {
      for(q = 0; q<3; q++) 
      {
        cout<<"a["<<p<<"]["<<q<<"]: ";
        cin>>M2[p][q];
      }
    }
    display1(M2);
  return 0;
}

