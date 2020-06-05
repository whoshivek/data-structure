#include<iostream>
#include<vector>
using namespace std;

vector <string> subseq(string str)
{
if (str.size()==0)
{
  vector <string> abc;
  abc.push_back("_");
return abc;
}

char a = str.at(0);
string b = str.substr(1);



vector <string> smallans = subseq(b);
vector<string> myresult;
for (string bc : smallans)
{
  myresult.push_back(bc);
  myresult.push_back(a + bc);

}
  return myresult;
}


int main()
{

vector<string> a = subseq("abc");
for (int i = 0; i < a.size(); i++)
{
 cout<<a[i]<<endl;
}




}