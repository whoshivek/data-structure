#include<iostream>
#include<vector>
using namespace std;

//////////////////////////////////////////////////////////////
string removehi(string str)
{
if (str.length()==0)
{
   
    return "";
}

char ch = str.at(0);

if (str.length()>1 && str.at(0) == 'h' &&  str.at(1) == 'i')
{
  return removehi(str.substr(2));
}
else
{
     return ch + removehi(str.substr(1));
}

}
//////////////////////////////////////////////////////////////////////////////////////////////

string removehiwithouthit(string str)
{

if (str.length()==0)
{
    return "";
}



    if (str.length()>1 && str.at(0)== 'h' && str.at(1)=='i')
    {
       if (str.length()>2 && str.at(2) == 't')
       {
           return "hit" + removehiwithouthit(str.substr(3));
       }
       else
       {
           return removehiwithouthit(str.substr(2));
       }
    }
    else
    {
        return str.at(0) + removehiwithouthit(str.substr(1));
    }
    
    
}
////////////////////////////////////////////////////////////////////////////////////////////////
string removedupli0(string str)
{
    if (str.length()==0)
    {
      return " ";
    }
    


if (str.length()>1 && str.at(0)==str.at(1))
{
    return removedupli0(str.substr(2) );
}
else
{
    return str.at(0) + removedupli0(str.substr(1) );
}



}

void removeDupli0(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    if (ans[ans.length() - 1] != str[0])
        ans += str[0];

    removeDupli0(str.substr(1), ans);
}



int main()
{

//cout<<removehi("hipyuhinbhi");
//cout<<removehiwithouthit("hithijhsghijs");
cout<<removedupli0("acaab");
//removeDupli0("acaab" , " ");

}