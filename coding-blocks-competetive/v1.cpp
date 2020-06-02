//https://www.youtube.com/watch?time_continue=30&v=TmsBNS1dSl4&feature=emb_logo
#include<iostream>
using namespace std;

void ganeshapattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ;j< n; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}


int main()
{
          ganeshapattern(5);
}