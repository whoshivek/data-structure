// increasing , decreasing , oddeven , factorial , power , fibonacci //

public class recursion

{
    public static void main(String [] args)
    {
                inc(6);
                dec(10);
               System.out.println(factorial(4));
               System.out.println(power(2, 5));
               System.out.println(powerbetter(2, 6));
    }

    public static  void inc(int n)
    {
        if(n==0)
        {
            return;
        }
        inc(n-1);
        System.out.println(n);
    }

    public static void dec(int n)
    {
               if(n==0)
               return;
        System.out.println(n);
        dec(n-1);
    }

    public static int factorial(int n)
    {
         if(n==0)
         return 1;
          int p= factorial(n-1) ;
          return p*n;   

    }

    public static int power(int n , int m)
    {
        if(m==0)
        return 1;
        int p = power(n, m-1);
        return n*p;

    }

    public static int powerbetter(int n , int m)
    {
       if(m==1)
       return n;
        int p= powerbetter(n, m/2);
        return (m%2==0?p*p:p*p*n);
    }
}