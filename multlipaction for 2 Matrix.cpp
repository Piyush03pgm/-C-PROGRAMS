#include<iostream>
using namespace std;

int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int b[3][3] = {9,8,7,6,5,4,3,2,1};
    int c[3][3],i ,j,k;
    
    cout<<"Multiplication value is  "<<endl;
    for (i=0;i<3;i++)
    {
    for (j=0;j<3;j++)
       {
           c[i][j]=0; 
           for (k=0;k<3;k++)
           {
               c[i][j] = c[i][j]+(a[i][k]*b[k][j]);
           }
       
       cout<<c[i][j];
       }
    cout<<endl;
    
    }
    
return 0 ;  
}