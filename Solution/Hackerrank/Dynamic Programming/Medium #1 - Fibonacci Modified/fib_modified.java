import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        BigInteger t1 = sc.nextBigInteger();
        BigInteger t2 = sc.nextBigInteger();
        
        int n = sc.nextInt();
        
        for ( int i=3; i<=n; ++i ) {
            BigInteger ans = t1.add(t2.multiply(t2));
            
            t1 = t2;
            t2 = ans;
        }
        
        System.out.println(t2);
    }
}