#include<iostream>
#include<vector>
using namespace std;

void mergesort(vector<int> & arr , int li , int si)
{
if (li ==0)
{
    return;
}


if (si == li)
{
    mergesort(arr , li -1 , 0);
    return;

}


if (arr[si] > arr[si +1])
{
    swap(arr[si],arr[si+1]);
}

mergesort(arr , li , si+1);


}


int main ()
{
vector<int> arr = {2 , 3 , 6 , 5 , -2 , 9 , 3};
mergesort(arr , arr.size()-1, 0);

for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i];
}



}