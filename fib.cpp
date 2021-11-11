import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        while(T-- > 0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = Integer.MIN_VALUE;
            int count = 0;
            
            while(c != 0){
                c = Math.abs(a-b);
                a=b;
                b=c;
                count++;
            }
            System.out.println(count);
        }
    }
}
