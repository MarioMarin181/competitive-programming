import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.math.BigInteger;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		Scanner lectura = new Scanner(System.in);
		int n, a;
		String cadena;
		while((cadena= br.readLine())!=null) {
			StringTokenizer st = new StringTokenizer(cadena);
			n = Integer.parseInt(st.nextToken());
			//System.out.println(""+n);
			a = Integer.parseInt(st.nextToken());
			//System.out.println(""+a);
			BigInteger suma = BigInteger.ZERO;
			for(int i=1; i<=n; i++) {
				BigInteger aux = BigInteger.valueOf(a);
				aux = aux.pow(i);
				aux = aux.multiply(BigInteger.valueOf(i));
				suma = suma.add(aux);
			}
			pw.printf(suma.toString());
			pw.printf("\n");
		}
		pw.close();

	}

}
