#include<iostream>
#include<vector>
using namespace std;
void nqueen(vector<int> board , int qpsf,int tq , int idx , string path)
{
static int c = 0;
   if (qpsf == tq)
   {
       c++;
       cout<<c<<"->"<<path<<endl;
       return;
   }
   
if (qpsf>tq)
{
    return;
}

  
   for (int i = idx ; i < board.size(); i++)
   {
       nqueen(board ,qpsf+1, tq , i + 1 ,path + "Q" + to_string(qpsf+1) + "Board" +to_string(i/4) + to_string(i%4) + " ");
   }
   


}

int main()
{

//         vector<vector<int>> arr(4 ) ;

    vector<int> board( 16);

    nqueen(board , 0 , 4 , 0 , "");

}