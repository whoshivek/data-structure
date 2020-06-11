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

vector <string> subseqascii(string str)
{

if (str.length()==0 )
{
  vector<string> base;
  base = {"_"};
  return base;
}

char ab = str.at(0);
string b = str.substr(1);

vector <string> smallans = subseqascii(b);
vector <string> ans;


for (string r : smallans)
{
  ans.push_back(r);
  ans.push_back(ab + r);
 
 

}
return ans;

}

vector <string>  nokiakedypad(string str)
{
if (str.length() ==0)
{
  vector<string>  base ;
   base = {" "};
   return base;

}


char ch = str.at(0);
vector <string> smallans = nokiakedypad(str.substr(1));

vector<string> myans;


for(string rost: smallans)
{vector<string> codes = {".","abc" , "def" , "ghi" , "jkl" , "mno" ,"pqr" ,"st" ,"uvwx" , "yz"};
  string code = codes.at(ch - '0');
  for (int i = 0; i < code.length(); i++)
  {
    char chcode = code.at(i);
    myans.push_back(chcode + rost);
  }
  
  
}
return myans;
}



void subsequence(string ques , string asof)
{
if (ques.length()==0)
{
  cout<<asof<<endl;
  return;
}

char ch = ques.at(0);
string q = ques.substr(1);

subsequence(q ,asof );
subsequence(q, asof + ch);

}
void nokia(string ques , string asf)
{
if (ques.length() == 0)
{
  cout<<asf<<endl;
  return;
}


vector<string> arraynokiacollection = {".","abc" , "def" , "ghi" , "jkl" , "mno" ,"pqr" ,"st" ,"uvwx" , "yz"};

char ch = ques.at(0);
string roq = ques.substr(1);

string chcode = arraynokiacollection.at(ch - '0');

for (int i = 0; i < chcode.length(); i++)
{
  char code = chcode.at(i);

  nokia(roq , asf + code);

}





}

int main()
{
  nokia("89", "");

//subsequence("abc" , " ");
vector<string> a = subseq("abc");
for (int i = 0; i < a.size(); i++)
{
 //cout<<a[i]<<endl;
}




}