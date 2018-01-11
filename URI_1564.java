import java.io.IOException;
import java.io.*;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        /**
         * Escreva a sua solução aqui
         * Code your solution here
         * Escriba su solución aquí
         */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String linha;
        
        while((linha = br.readLine()) != null){
            int n = Integer.parseInt(linha);
            if(n>0){
                System.out.println("vai ter duas!");
            }else if(n==0){
                System.out.println("vai ter copa!");
            }
        }
    }
 
}