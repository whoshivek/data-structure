#include<iostream>
using namespace std;

void pattern(int n)
{
int nst = 1;
int nsp = n/2;

for (int i = 0; i <n ;  i++)
{ for (int  csp = 0; csp < nsp; csp++)
    {
        cout<<" ";
    }
    for (int cst = 0; cst < nst; cst++)
    {
        cout<<"*";
    }
   
    
     cout<<endl;
  
  if (i < n/2)
  {
      nst =nst +2;
      nsp--;
  }
  else
  {
     nst = nst -2;
     nsp++;
  }
  
 
     
     
}


}







int main()
{
    int n;
    cin>>n;

cout<<"for "<<"n ="<<n<<"output"<<endl;

         pattern(n);
}