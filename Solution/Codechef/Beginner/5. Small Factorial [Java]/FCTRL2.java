package fctrl2;

import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class FCTRL2 {
    public static void main(String[] args) throws FileNotFoundException {
        File file = new File("input.txt");
        Scanner sc = new Scanner(file);
        
        int t = sc.nextInt();
        for ( int i=1; i<=t; ++i ) {
            int n = sc.nextInt();
            
            BigInteger bi = new BigInteger("1");
            for ( int j=2; j<=n; ++j ) bi = bi.multiply(BigInteger.valueOf(j));
            
            System.out.println(bi);
        }
    }
    
}
