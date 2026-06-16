import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.math.BigDecimal;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(new OutputStreamWriter(System.out));
		double r;
		int n;
		String numero;
		String auxiliar;
		while((numero=br.readLine())!=null) {
			StringTokenizer st = new StringTokenizer(numero);
			r= Double.parseDouble(st.nextToken());
			n= Integer.parseInt(st.nextToken());
			BigDecimal potencia= BigDecimal.ZERO;
			BigDecimal aux= BigDecimal.valueOf(r);
			potencia = aux.pow(n);
			auxiliar= potencia.toPlainString();
			if(auxiliar.startsWith("0")) {
				auxiliar = auxiliar.substring(1);
			}
			
			//pw.printf(potencia.toString());
			//System.out.println(potencia.toString());
			System.out.println(auxiliar);
			
		}
	}

}
