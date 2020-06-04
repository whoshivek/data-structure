public class allindexex
{

public static void main(String [] args)
{
        
         int [ ] arr  = { 1 , 3 , 5 , 4 , 3  , 99 , 3 ,99};
        // int [] res = all(arr, 3, 0, 0);
        int [] res = allbetter(arr, 0, 0, 99);
         for(int i =0 ; i<res.length ; i++)
         {
                 System.out.println(res[i]);
         }


}

public static int [] all(int [] arr , int d , int i , int cosf)
{
if(i == arr.length)
{
    return new int [cosf];
}
int [] res = null;
if(d == arr[i])
{

   res= all(arr, d, i+1, cosf+1);
    res[cosf] = i;
}
else{
   res= all(arr, d, i+1, cosf);
}
return res;
}

public static int [] allbetter(int [] arr , int i , int c , int data)
{
if(i == arr.length)
{
    int [] base = new int [c];
    return base;
}
    if(data == arr[i])
    {
        c++;
    }

 int [] rec=  allbetter(arr, i+1, c, data);

  if(data == arr[i])
  {
      rec[c-1] = i;

  }
return rec;
}




}