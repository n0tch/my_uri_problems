#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int n,m,i;
    string result;
 
    do{
      cin >> n >> m;
      
      if(n == 0 && m == 0)
        break;
      
      result = to_string(n+m);
      
      for(i=0;i<result.size();i++){
        if(result[i] != '0'){
          cout << result[i];
        }
      }
      cout << endl;
      
    }while(n != 0 && m != 0);
    return 0;
}