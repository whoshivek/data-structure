#include<iostream>
#include<vector>
using namespace std;
static int c =0;
void permutation(vector<bool> boxes , int qpsf , int tq ,string path){

if (qpsf==tq)
{
    c++;
    cout<<c<<"->"<<path<<endl;
    return;
}
if (qpsf>tq)
{
    return;
}



        for (int b = 0; b < boxes.size();b++)
        {
            if (boxes[b]==false)
            {
                boxes[b]=true;
                permutation(boxes, qpsf + 1 , tq , path + "b" + to_string(b) + "q" + to_string(qpsf+1));
                boxes[b] = false;
            }
            
        }
        
    
}
/////////////////////////////////////////////////////////////////
void combination(vector<bool> boxes ,int idx, int qpsf , int tq ,string path){

if (qpsf==tq)
{
    c++;
    cout<<c<<"->"<<path<<endl;
    return;
}
if (qpsf>tq)
{
    return;
}



        for (int b = idx; b < boxes.size();b++)
        {
            //if (boxes[b]==false)
            //{
              //  boxes[b] = true;
                 combination(boxes,b+1,  qpsf + 1 , tq , path + "b" + to_string(b) + "q" + to_string(qpsf+1));
                // boxes[b] = false;
            //}
            
            
               
                
           
            
        }
        
    
}
///////////////////////////////////////////////////////////////////////////////

int main()
{
   vector<bool> box (4 , false);
   //permutation(box,0,2,"");
    combination(box, 0 , 0 , 2 , "");
}