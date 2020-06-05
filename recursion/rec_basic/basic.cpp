#include<iostream>
#include<vector>
using namespace std;

void decrease(int n)
{
    if (n <= 0 )
    {
        return;
    }
    {
        /* code */
    }
    

    cout<<n;
    decrease(n-1);
}

void increase(int n)
{
    if(n <= 0)
    {
        return ;
    }

    increase(n-1);
    cout<<n;
}
  void increasedecreasing(int n)
  {
      if(n <= 0 )
      {
          return;
      }

      cout<<n; // while going upwards
      increasedecreasing(n-1);
      cout<<n; //backtrace

  }
 
 int factorial(int n)
 {

        if (n <=0)
        {
            return 1;
        }
        

     int fnm = factorial(n-1);
     int ans = n*fnm;
     return ans;
 }

        void towerofhanoi(string src , string dest , string help , int n)
        {
           if (n ==0)
           {
               return ;
           }
           
           towerofhanoi(src, help,dest,n-1);
           cout<<"move   "<<n<<"  disc from  "<<src<<"  to  "<<dest<<endl;
           towerofhanoi(help,dest,src,n-1);


        }
 int poweri(int n , int m) ///uses two variable
 {
     if (m == 0)
     {
        return 1;
     }
     
     
     int powernm = poweri(n,m-1);
     int ans = n * powernm;
     return ans;

 }

 int powerii(int n ,int m )
 {
           if (m == 1)
           {
               return n;
           }
           
           int power = powerii(n , m/2);
           power = power*power;

     return (m%2!=0?power*n:power);
 }

 int fibo(int n)
 {
     if (n <= 2)
     {
         if (n==0)
         {
             return 0;
         }
         
         return 1;
     }
     

 int fiboo = fibo(n-1) + fibo(n-2);

     return fiboo;
 }

 int euler(int n , int level)
 {
   if(n<=1){
         cout<<"base"<<" "<<n<<" "<<"@ "<<level<<endl;
          return n;
      }
      
     cout<<"PRE"<<" "<<n<<" "<<"@ "<<level<<endl;

      int a=euler(n-1,level+1);
       cout<<"IN"<<" "<<n<<" "<<"@ "<<level<<endl;
      int b=euler(n-2,level+1);
      
       cout<<"POST"<<" "<<n<<" "<<"@ "<<level<<endl;

      return a+b+3;
}

 int euler2(int n,int level){
        if(n<=2){
            cout<<"Base: "<<n*level<<endl;
            return n;
        } 
        cout<<"Pre: "<<n*level<<endl;
        int a=euler2(n-1,level+1);
        
        cout<<"In1: "<<n*level<<endl;
        int b=euler2(n-2,level+1);
        
        cout<<"In2: "<<n*level<<endl;
        int c=euler2(n-3,level-1);

       cout<<"Post: "<<n*level<<endl;
        return a+b+c+3;
      }


      void oddeven(int n)
      {
          if (n==0)
          {
              return ;
          }
          

        if (n%2 == 0)
           {
          cout<<n;
             }

          oddeven(n-1);

          if (n%2!=0)
          {
              cout<<n;
          }
          
      }

    
            

      
int main()
{
          int n;
           cin>>n;
        //   decrease(n);
        //   cout<<endl;
        //   increase(n);
        //   cout<<endl;
        //   increasedecreasing(n);
        //   cout<<endl;
        //   factorial(n);
        //   cout<<endl;
        // cout<<poweri(2, 5);
        //   cout<<endl;
         // cout<<powerii(3,3);
       //  cout<<fibo(n);
       //towerofhanoi("A","B","C",3);

    // cout<< euler2(5 ,0);

    //oddeven(13);

}