#include<iostream>
#include<vector>
using namespace std;

////////////////////////////boardgamewithreact//////////////////////////

void boardgamepathreact(int src , int destination , string path)
{
static int c = 0;
if (src==destination)
{
    c++;
    cout<<c<<".  "<<path<<endl;
    return;
}
if (src>destination)
{
    return;
}
for ( int dice = 1; dice <= 6; dice++)
{
    

    boardgamepathreact(src + dice , destination , path + to_string(dice));
}
}

///////////////////////////////////////////boardgamesecondapproach/////////////////////////////////////

void boardgamepath(int src , int destination , string path)
{
static int c = 0;
if (src==destination)
{
    c++;
    cout<<c<<".  "<<path<<endl;
    return;
}


for ( int dice = 1; dice <= 6; dice++)
{
    
if (src<=destination)
{
        boardgamepath(src + dice , destination , path + to_string(dice));
}


}
}
////////////////////boardgame_openingwith1or6////////////////////////


void boardgamepathopening1or6(int src , int destination , string path)
{
static int c = 0;
if (src==destination)
{
    c++;
    cout<<c<<".  "<<path<<endl;
    return;
}
if (src==0)
{
    boardgamepathopening1or6(1 , destination , path + to_string(1));
    boardgamepathopening1or6(1 , destination , path + to_string(6));

    }

  
    

else
{
    


for ( int dice = 1; dice <= 6; dice++)
{
    
if (src<=destination)
{
        boardgamepathopening1or6(src + dice , destination , path + to_string(dice));
}


   }
  }
}

/////////////////////////////////////////////////////////////////////
void boardwithladder(int src , int dest , vector <int> ladder , string path)
{
    static int c = 0;
      if (src==dest)
{
    c++;
    cout<<c<<". -->"<<path<<endl;
    return;
}
if (src>dest)
{
    return;
}



if (src==0){
    boardwithladder(1 , dest , ladder , path + to_string(1));
    boardwithladder(1 , dest , ladder , path + to_string(6));
    }
else
{
    if (ladder[src]!=0)
    {
           boardwithladder(ladder[src],dest ,ladder , path + to_string(src) + "-->" + to_string(ladder[src]));
    }
    else
    {
        for (int dice = 1; dice <= 6; dice++)
        {
           
                boardwithladder(src + dice , dest ,ladder, path + to_string(dice));
            
            
        }
        
    }
    
    
}
}

//////////////////////////////////////////////////////////////////////////////////////////

void boardwithsnakeanl(int src , int dest , vector<int> move , vector<int> ladder , int mvidx)
{
if (src==dest)
{
    cout<<"win";
    return;
}
if (move.size()==mvidx)
{
    cout<<src;
    return;
}




if (src==0)
{
    if (move[mvidx]==1 || move[mvidx] ==6)
    {
        boardwithsnakeanl(1 ,dest, move, ladder , mvidx + 1);
    }
    else
    {
        boardwithsnakeanl(0 , dest , move , ladder , mvidx +1);
    }
}
else if (ladder[src]!=0)
{
    boardwithsnakeanl(ladder[src] , dest , move , ladder , mvidx);
}
else
{
   if (src + move[mvidx] > dest)
   {
       boardwithsnakeanl(src , dest , move , ladder , mvidx + 1);
   }
   else
   {
       boardwithsnakeanl(src+move[mvidx],dest , move , ladder, mvidx + 1);
   }
}




}

/////////////////////////////////////int_main///////////////////////////////////////
int main()
{
vector<int> ladder(21 ,0) ;
ladder[3] = 17;
ladder[7] = 11;
ladder[13]=5;
ladder[19]=2;
vector<int> move2;
move2= {2 , 5 , 3 , 4 , 6, 2, 3, 5 , 4 , 5};
//move2= {2 , 5 , 3 , 4 , 6, 3 , 4 , 5 , 1 , 1 , 6 , 5 , 2 , 3 ,5};
//boardwithladder( 0 , 15  ,ladder , " ");
//boardgamepathopening1or6(0,4, "");
boardwithsnakeanl(0 , 20 , move2 , ladder , 0);
}