#include<iostream>
#include<vector>
using namespace std;

bool IsSafeToPlaces(vector<vector<bool>> board , int x , int y)
{

   vector <vector<int>> dir = { {0 , -1} , {-1 , -1} ,{ -1 ,0} , {-1 , 1}  };

  for (int i = 0; i < dir.size(); i++)
  {
    for (int rad = 1; i < board.size(); rad++)
    {
      int  nx = x + rad * dir[i][0];
        int ny = y + rad * dir[i][1];

        if(nx < 0 || ny < 0 || nx>=board.size() || ny >= board[0].size())
        {
            break;
        }
        if(board[nx][ny])
        {
               return false;
        }
    
    }
    
        
  }

        return true;
}

void nqueen(vector<vector<bool>> board , int idx , int qpsf , int tq , string path)
{
if (tq==qpsf)
{
    cout<<path<<endl;
    return;
}

if(qpsf>tq)
{
    return;
}

for (int i = idx; i < board.size()*board[0].size(); i++)
{  
    int x = i/board.size();
    int y = i%board.size();
    if(IsSafeToPlaces(board , x , y) )
    {
           board [i/board.size()][i%board.size()]=true;
     nqueen(board , i +1 , qpsf + 1, tq, path + "("+ to_string(i/board.size()) +"," + to_string(i%board.size()) + ")");
           board [i/board.size()][i%board.size()]=false;
    
    }
}



}


int main()
{

vector<vector<bool>> board( 4 , vector<bool>( 4 , false));

nqueen(board , 0 ,0 ,4 ,"");


}
