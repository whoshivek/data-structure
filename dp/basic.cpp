#include<iostream>
#include<vector>
using namespace std;

void dice(int start , int dest , string path)
{
    int static c=0;
if (start==dest)
{
    c++;
    cout<<c<<". "<<path<<endl;
    return;
}
if (start>dest)
{
    return;
}



    for(int i=1 ; i<=6 ; i++)
    {
        dice(start+i , dest , path + to_string(i));
    }
}

int main()
{
dice(0,10,"");
}

