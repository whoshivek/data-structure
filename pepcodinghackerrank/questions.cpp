#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
int n;
int m;
cin>>n>>m;
vector<int> arr1(n ,0);
vector <int> arr2(m,0);
vector<int> large;

for(int i=0 ; i<n ; i++)
{
    cin>>arr1[i];
    large.push_back(arr1[i]);
}
for(int i=0 ; i<m ; i++)
{
    cin>>arr2[i];
    large.push_back(arr2[i]);
}
sort(large.begin() , large.end());
int p = large[0];

int q= large[large.size()-1];
static int c=0;
static int d=0;
int ans =0;
    for(int j = p ; j<= q ; j++)
    {
        for(int i=0 ; i<large.size() ; i++)
        {
            d = j%large[i];

          if(d==0)
          {
              ans++;
          }
         if(ans==large.size())
        {
            c++;
        }
        }
       
      
    }
     
cout<<c;

}
