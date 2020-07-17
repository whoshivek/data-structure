import java.util.Scanner;
import java.util.Stack;
import java.util.*;

class stackbasic{
public static Scanner sc = new Scanner(System.in);
public static void main(String []args)
{

    String s = sc.nextLine();

    Stack <Character> stack = new Stack<>();

    for(int i=0 ; i<s.length();i++)
    {
        Character ch = s.charAt(i);
        if(ch == ')')
        {
            if(stack.peek()==')')
            {
                System.out.println(true);
                return;
            }
            while(stack.peek()==')')
            {
                stack.pop();
            }
            stack.pop();

        }
        else
        {
            stack.push(ch);
        }
    }
System.out.println(false);

}


}