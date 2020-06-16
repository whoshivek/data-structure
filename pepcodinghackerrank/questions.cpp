#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool ques(vector <int> & arr , int idx)
{
    
     if(idx == arr.size()-1)
     {
        return true;
     }
        
     if(arr[idx]>=arr[idx+1]){
       return false;}
       

       return ques(arr , idx +1);
      
          
}

////////////////////////////////////////
int ques2(vector<int> & arr , int i , int data)
{
if (i == arr.size())
{
    return -1;
}


int smallans = ques2(arr , i +1 , data);
if (smallans != -1)
{
    return smallans;
}
else
{
    return 77;
}





}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0 ; i< n ;i++)
    {
        cin>>arr[i];
    }
    //cout<<ques(arr , 0);
    cout<<ques2(arr,0 , 8);
    return 0;
}
