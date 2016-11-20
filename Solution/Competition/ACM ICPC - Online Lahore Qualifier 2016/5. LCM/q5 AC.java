import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class q5 {
    public static void main(String[] args) throws FileNotFoundException, IOException {
        FileReader f = new FileReader("q5.txt");
        BufferedReader r = new BufferedReader(f);
        
        while ( r != null ) {
            String str = r.readLine();
			if ( str == null ) break;
			
            String[] arr = str.split(",");
            
            BigInteger a = new BigInteger(arr[0]);
            BigInteger b = new BigInteger(arr[1]);
        
            BigInteger gcd = a.gcd(b);
            BigInteger mul = a.multiply(b);
            System.out.println(mul.divide(gcd));
        }
		
		sc.close();
    }    
}
