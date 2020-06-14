#include <iostream>
#include <vector>
using namespace std;
////////////////////////////////

void mazesimpleproactive(int sr, int sc, int dr, int dc, string psof)
{

    static int c = 0;
    if (sc == dc && sr == dr)
    {
        c++;
        cout << c << ".  " << psof << endl;
        return;
    }

    if (sr + 1 <= dr)
    {
        mazesimpleproactive(sr + 1, sc, dr, dc, psof + "H");
    }
    if (sc + 1 <= dc)
    {
        mazesimpleproactive(sr, sc + 1, dr, dc, psof + "V");
    }
}
////////////////////////////////////////////////////////

void mazesimplereactive(int sr, int sc, int dc, int dr, string psof)
{
    static int c = 0;
    if (sr == dr && sc == dc)
    {
        c++;
        cout << c << ".  " << psof << endl;
    }

    if (sr > dr || sc > dc)
    {
        return;
    }

    mazesimplereactive(sr + 1, sc, dc, dr, psof + "V");
    mazesimplereactive(sr, sc + 1, dc, dr, psof + "H");
}
///////////////////////////////////////////////////////////

void mazediaognolproactive(int sr, int sc, int dc, int dr, string psof)
{
    static int c = 0;
    if (sc == dc && sr == dr)
    {

        c++;
        cout << c << ". " << psof << endl;
        return;
    }

    if (sr + 1 <= dr)
    {
        mazediaognolproactive(sr + 1, sc, dc, dr, psof + "V");
    }
    if (sc + 1 <= dc)
    {
        mazediaognolproactive(sr, sc + 1, dc, dr, psof + "H");
    }
    if (sc + 1 <= dc && sr + 1 <= dr)
    {
        mazediaognolproactive(sr + 1, sc + 1, dc, dr, psof + "D");
    }
}
//////////////////////////////////////////////

void diaognolreactivrmaze(int sc, int sr, int dc, int dr, string psof)
{
    if (sr == dr && sc == dr)
    {
        cout << psof << endl;
        return;
    }
    if (sc > dc || sr > dr)
    {
        return;
    }

    diaognolreactivrmaze(sc + 1, sr, dr, dc, psof + "H");
    diaognolreactivrmaze(sc, sr + 1, dr, dc, psof + "V");
    diaognolreactivrmaze(sc + 1, sr + 1, dr, dc, psof + "D");
}

//////////////////////////////////////////////////////////////////////////

void mazemultimove(int sr, int sc, int dr, int dc, string path)
{
         static int c =0;
     if (sr==dr && sc==dc)
     {
         c++;
         cout<<c<<". ->"<<path<<endl;
         return;
     }
     
    for (int ma = 1; ma <=dr - sr; ma++)
    {
        mazemultimove(sr + ma, sc, dr, dc, path + "V" + to_string(ma));
    }
    for (int ma = 1; ma <=dc - sc; ma++)
    {
        mazemultimove(sr, sc + ma, dr, dc, path + "H" + to_string(ma));
    }
    for (int ma = 1; ma <= min(dr - sr , dc -sc); ma++)
    {
        mazemultimove(sr + ma, sc +ma, dr, dc, path + "D" + to_string(ma));
    }
}
////////////////////

bool isInvalid(int sc , int sr , vector<vector<int>> maze)
{
     if (sc>maze[0].size()-1 || sr>maze.size()-1)  {
                  return true;
         }
else if (sc <0 ||sr<0)
{
    return true;
}
else if (maze[sr][sc]==0)
{
    return true;
}
else
{
    return false;
}

}

//////////////////////
void floodfill(int sc , int sr , vector<vector<int>> maze ,vector<vector<bool>> IsVisited, string path)
{
    static int c;
if (sr==maze.size() -1 && sc == maze[0].size()-1)
       {
    c++;
    cout<<c<<".->"<<path<<endl;
    return;
        }
        if (isInvalid(sc , sr , maze )== true|| IsVisited[sr][sc]==true)//
        {
            return;
        }
        
IsVisited[sr][sc]=true;
floodfill(sc , sr + 1 , maze , IsVisited, path + "DOWN");//down
floodfill(sc -1, sr  , maze , IsVisited, path + "LEFT");
floodfill(sc , sr - 1 , maze , IsVisited, path + "UP");
floodfill(sc+1 , sr  , maze , IsVisited, path + "RIGHT");

//IsVisited[sr][sc]=false;


}
//////////////////////////////////////////////////////////////
int main()
{
    vector<vector<int>> maze= {{1 , 0 , 1 } , {1 , 1 , 1 } , {1 , 0 , 1 }};//0 block
    vector<vector<bool>> IsVisited ( maze.size(), vector <bool> (maze[0].size()));
  // mazemultimove(0 , 0 , 2 , 2 , " ");
floodfill(0 ,0 ,maze , IsVisited,"");
}