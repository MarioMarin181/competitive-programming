import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args){
		Scanner lectura = new Scanner(System.in);
		while (lectura.hasNext()) {
			      String v1 = lectura.next();
			      String operador = lectura.next();
			      String v2 = lectura.next();
			      BigInteger base= new BigInteger("2147483647");
			      BigInteger n1= new BigInteger(v1);
			      BigInteger n2= new BigInteger(v2);
			      BigInteger result = BigInteger.ZERO; 
			      System.out.print(v1+" "+operador+" "+v2+"\n");
			      if(operador.compareTo("+")==0) {
						result = result.add(n1);
						result = result.add(n2);
			      }else {
						result = result.add(n1);
						result = result.multiply(n2);
			      }
			      if(n1.compareTo(base)==1) {
			    	  System.out.print("first number too big\n");
			      }
			      if(n2.compareTo(base)==1) {
			    	  System.out.print("second number too big\n");
			      }
			      if(result.compareTo(base)==1) {
			    	  System.out.print("result too big\n");
			      }
			                              
		}
	}

}
