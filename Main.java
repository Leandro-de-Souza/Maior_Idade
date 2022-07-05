import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, maioridade, posicaomaior;
		
		System.out.print("Quantas pessoas voce vai digitar? ");
		N = sc.nextInt();
		
		String[] nomes = new String[N];
	    int[] idades = new int[N];
	    
	    for (int i = 0; i < N; i++) {
	    	System.out.println("Dados da " + (i + 1) + "a pessoa:");
	    	System.out.print("Nome: ");
	    	sc.nextLine();
	    	nomes[i] = sc.nextLine();
	    	System.out.print("Idade: ");
	    	idades[i] = sc.nextInt();
	    }
		
	    maioridade = idades[0];
	    posicaomaior = 0;
	    
	    for (int i = 1; i < N; i++) {
	           if (idades[i] >  maioridade) {
	               maioridade = idades[i];
	               posicaomaior = i;
	           }
	       }
	    
	    System.out.println("PESSOA MAIS VELHA: " + nomes[posicaomaior]);
	    
	    sc.close(); 
	    
	}

}
