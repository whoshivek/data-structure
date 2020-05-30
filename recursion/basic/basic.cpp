#include<iostream>
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
     if (n==1)
     {
         return 1;
     }
     

 int fiboo = fibo(n-1);

     return fiboo;
 }
int main()
{
        //   int n;
        //   cin>>n;
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
         cout<<fibo(4);
       

}