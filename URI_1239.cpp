#include <iostream>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    string texto;
    int i;
    bool abrir_i = true;
    bool abrir_b = true;
    
    while (getline(cin,texto)) {
      
      for(i=0;i<texto.size();i++){
        if(texto[i] == '_'){
          if(abrir_i){
            cout << "<i>";
            abrir_i = false;
          }else if(!abrir_i){
            cout << "</i>";
            abrir_i = true;
          }
        }else if(texto[i] == '*'){
          if(abrir_b){
            cout << "<b>";
            abrir_b = false;
          }else{
            cout << "</b>";
            abrir_b = true;
          }
        }else{
          cout << texto[i];
        }
      }
      cout << endl;
      
    }
    return 0;
}