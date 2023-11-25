package co.edu.uniquindio.programacionIII.arboles;

public class TecnicaDosPunteros {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String s="abbaaba";
		int n=7;
		int k=1;
		System.out.println(calcular(s, k, n, 'a'));
		

	}
	
	
	public static int calcular(String s, int k, int n,char ref) {
		
		int mayor=0;
		for(int i=0;i<n;i++) {
			int kaux=k;
			int cont=0;
			for(int l=i;l<n;l++) {
				if(s.charAt(l)!=ref && kaux!=0) {
					kaux--;
					cont++;
				}
				else {
					cont++;
				}
				if(s.charAt(l+1)!=ref) {
					
					break;
				}
				
			}
			mayor=(mayor<cont)? cont:mayor;
		}
		return mayor;
	}

}
