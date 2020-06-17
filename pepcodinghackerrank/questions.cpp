#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void permutation(string str , string myans)
{
    if(str.length()==0)
    {
        cout<<myans<<endl;
        return;
        
    }
   
    
    
         
    for(int i =0 ; i< str.length() ; i++)
    {
       
        permutation(str.substr(0 , i) + str.substr(i+1)   , myans + str.at(i) );
    }
        
        
 
    
}

int main() {
    string s;
    cin>>s;
    permutation(s , "");
    return 0;
}