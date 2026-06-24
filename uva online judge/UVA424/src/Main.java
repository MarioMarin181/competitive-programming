import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
		BigInteger result = BigInteger.ZERO;
		while(true) {
			String numero="";
			numero=br.readLine();
			if(numero.compareTo("0")==0) break;
			result= result.add(new BigInteger(numero));
		}
		pw.printf("%s\n", result.toString());
		pw.close();
	}

}
