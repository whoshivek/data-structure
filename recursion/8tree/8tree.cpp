#include<iostream>
#include<vector>
using namespace std;
///////////////////////////////////////////////////////////////////////
void infipermu( vector<int> arr , int ssf , int tar , string path)
{ 
    int static c =0 ;
    if (ssf==tar)
    {
        c++;
        cout<<c<<". "<<path<<endl;
        return;
    }
    if (ssf>tar)
    {
        return;
    }
    
 for (int i = 0; i < arr.size(); i++)
 {
    
     infipermu(arr ,ssf + arr[i] , tar, path + to_string(arr[i]) );
 }
}
 ///////////////////////////////////////////////////////////////////////////////////////////
 void inficombi(vector<int> arr , int idx , int ssf , int tar , string path)
 {
     static int c=0;
     if (ssf==tar)
         {
                c= c +1;
               cout<<c<<". "<<path<<endl;
                 return;
           }
if (ssf>tar)
{
    return;
}

int i =0 ;
for ( i = idx; i < arr.size(); i++)
{
    if (ssf<=tar)
    {
      inficombi(arr , i , ssf + arr[i], tar , path + to_string(arr[i]));
    }
    

}


 }
////////////////////////////////////////////////////////////////////////////////////////////////////
 void nonrepcombi(vector<int> & arr ,int idx , int ssf , int tar , string path )
 {

if (ssf==tar)
{
    cout<<"->"<<path<<endl;
    return;
}
if (ssf>tar)
{
    return;
}



 for (int i = idx; i < arr.size(); i++)
 {
      nonrepcombi(arr , i + 1 , ssf + arr[i] , tar ,path + to_string(arr[i]) );
 }
 


 }
////////////////////////////////////////////////////////////////////////////////////////////////////
 vector <string> sub(string str)
 {
if (str.length()==0)
{
    vector <string> base ={ " "};
    return base;
}

 char ch = str.at(0);

 vector <string> smallans = sub(str.substr(1));

vector <string> myans;
 for (string d : smallans)
 {
    myans.push_back(d);
    myans.push_back(ch + d);
 }
 return myans;


 }
///////////////////////////////////////////////////////////////////////////////////
 void subss(string str , string ans)
 {
if (str.length()==0)
{
    cout<<ans<<endl;
    return;

}


   char ch = str.at(0);
   subss(str.substr(1) , ans);
   subss(str.substr(1) , ans + ch);


 }

////////////////////////////////////////////////////////////////////////////////////////////////////
 void permunotrep(vector<int> arr , vector<bool> visited , int ssf , int tar , string path)
 {
if (ssf==tar)
{
    cout<<"->"<<path<<endl;
    return;
}
if (ssf>tar)
{
    return;
}



for (int i = 0; i < arr.size(); i++)
{
  
    if (visited[i] == false)
    {
          visited[i] = true;
      permunotrep(arr , visited , ssf + arr[i] , tar , path + to_string(arr[i]));
          
    }
    visited[i]= false;
}



 }
/////////////////////////////////////////////////////////////////////subsequenceapproach//////////////////////////////////
 void permunotrepess(vector<int> arr ,vector<bool> visited , int idx ,int ssf , int tar , string path)
 {

if (idx==arr.size()||tar==ssf)
{
       if (tar==ssf)
       {
           cout<<"->"<<path<<endl;
           return;
       }

       return;
}

if (ssf>tar)
{
    return;
}


if (visited[idx]==false)
{
    visited[idx] = true;
    permunotrepess(arr,visited, 0 , ssf + arr[idx] , tar , path + to_string(arr[idx]));

visited[idx] = false;
}
permunotrepess(arr, visited ,idx +1 , ssf , tar , path);


}
////////////////////////////////////////////////////////////////////////////////////////////
void perinfiss(vector<int> arr , int idx ,int ssf , int tar , string path)
 {

if (idx==arr.size()||tar==ssf)
{
       if (tar==ssf)
       {
           cout<<"->"<<path<<endl;
           return;
       }

       return;
}

if (ssf>tar)
{
    return;
}

perinfiss(arr, 0 , ssf + arr[idx] , tar , path + to_string(arr[idx]));
perinfiss(arr ,idx +1 , ssf , tar , path);


}

////////////////////////////////////////////////////////////////////////////////////////////
void combinfiss(vector<int> arr , int idx ,int ssf , int tar , string path)
 {

if (idx==arr.size()||tar==ssf)
{
       if (tar==ssf)
       {
           cout<<"->"<<path<<endl;
           return;
       }

       return;
}

if (ssf>tar)
{
    return;
}

combinfiss(arr, idx , ssf + arr[idx] , tar , path + to_string(arr[idx]));
combinfiss(arr ,idx +1 , ssf , tar , path);


}
////////////////////////////////////////////////////////////////////////////////////////////

void combinotrepess(vector<int> arr , int idx ,int ssf , int tar , string path)
 {

if (idx==arr.size()||tar==ssf)
{
       if (tar==ssf)
       {
           cout<<"->"<<path<<endl;
           return;
       }

       return;
}

if (ssf>tar)
{
    return;
}

combinotrepess(arr, idx+1 , ssf + arr[idx] , tar , path + to_string(arr[idx]));
combinotrepess(arr ,idx +1 , ssf , tar , path);


}
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
      
      vector<int> arr = {2 , 3 , 5 , 7};
      vector<bool> visit(arr.size(), false);
  // infipermu(arr , 0 , 10 , "");
     // inficombi(arr , 0 , 0 ,10 , "");
        //nonrepcombi(arr , 0 , 0 , 10 , "");
//vector <string> a =sub("abc");
//for (int i = 0; i < a.size(); i++)
//{
  //  cout<<a[i]<<endl;
//}
//permunotrep(arr , visit , 0 , 10 , "");
//subss("abc" , "");

permunotrepess(arr,visit ,0 , 0 , 10 , "");
cout<<endl;
perinfiss(arr , 0 ,0 , 10 , "");
cout<<endl;
combinfiss(arr , 0 ,0 , 10 , "");
cout<<endl;
combinotrepess(arr , 0 ,0 , 10 , "");



}