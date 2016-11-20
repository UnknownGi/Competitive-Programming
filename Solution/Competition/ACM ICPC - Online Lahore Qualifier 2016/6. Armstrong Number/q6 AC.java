// package icpc_problem6;

import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class q6 {
    public static void main(String[] args) throws FileNotFoundException {
        File file = new File("q6.txt");
        Scanner sc = new Scanner(file);
        
        while ( sc.hasNext() ) {
            BigInteger num = sc.nextBigInteger();
            
            BigInteger tmp = num;
            BigInteger ans = BigInteger.ZERO;
            while ( tmp.compareTo(BigInteger.ZERO) != 0 ) {
                BigInteger rem = tmp.mod(BigInteger.valueOf(10));
                tmp = tmp.subtract(rem).divide(BigInteger.valueOf(10));
                ans = ans.add(rem.pow(3));
            }
            
            if ( num.compareTo(ans) == 0 ) System.out.println("Y");
            else System.out.println("N");
        }
        
        sc.close();
    }
}
