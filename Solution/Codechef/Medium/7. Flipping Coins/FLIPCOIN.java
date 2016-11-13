import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.BitSet;

class flipcoin {
    public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        
		String[] s = in.readLine().split(" ");
        int n = Integer.parseInt(s[0]);
        int q = Integer.parseInt(s[1]);
        
		BitSet bs = new BitSet(n);
        for( int i=0; i<q; ++i ) {
            s = in.readLine().split(" ");
            int op = Integer.parseInt(s[0]);
            int a = Integer.parseInt(s[1]);
            int b = Integer.parseInt(s[2]);
            
			switch ( op ) {
                case 0: {
					bs.flip(a,b+1);
                    break;
                } case 1: {
                    int count = bs.get(a,b+1).cardinality();
                    System.out.println(count);
                    break;
                }
            }
        }
    }
}