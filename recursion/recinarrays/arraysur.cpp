#include<iostream>
#include<vector>
using namespace std;

void displayarray(vector<int> & arr , int idx) // similar to print decreasing
{
if (idx == arr.size())
{
    return;
}

       
    cout<<arr[idx];
    displayarray(arr , idx + 1);
}

void displayreversearray(vector<int> & arr , int idx) // simialar to print increasing
{

 if (idx == arr.size())
 {
     return;
 }
 

     displayreversearray(arr , idx + 1);
     cout<<arr[idx];


}

int maximuminarray(vector<int> & arr , int i)
{

if (i== arr.size()-1)
{
    return arr[i];
}


 int misa = maximuminarray(arr , i+1);
 int ans = max(arr[i],misa);

 return ans;

}
 bool find(vector<int> & arr , int i , int data)
 {
if (i ==arr.size())
{
    return false;
}


if (data == arr[i])
{
    return true;
}


   return find(arr , i+1 , data);
    



 }

int main()
{


vector<int> arr (3,0);
arr = {111212,8 , 7 ,100000, 9};
displayarray(arr , 0);
cout<<endl;
displayreversearray(arr , 0 );
cout<<maximuminarray(arr, 0);
cout<<boolalpha<<find(arr , 0 , 77);
}