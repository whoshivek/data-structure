#include<iostream>
using namespace std;

string myans;
char ch;
void abc(string a , int k)
{
    for (int i = 0 ; i < a.size(); i++)
    {
    
       myans =a.substr(i , k);
       if (myans.size()==k )
       {
           
           for (int i = 0; i < k; i++)
           {
               ch = myans.at(i);
                  if (ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' ||ch == 'u')
           {
                  cout<<myans<<endl;
           }
           else
           {
               cout<<"Not Found";
           }
           
           
              
           }
        
             
       }
       
  
     
    }
    
    
}


int main()
{
       abc("sky" , 2);
       cout<<endl;
}