#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n, i;
    string p,nova;
    
    cin >> n;
    cin.ignore();
    
    while(n--){
      getline(cin, p);

      for(i=0;i<p.size();i++){
        if((p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z'))
          p[i] += 3;
      }

      for(i=p.size()-1;i>=0;i--){
        nova += p[i];
      }

      for(i=p.size()/2;i<p.size();i++){
        nova[i] -= 1;
      }

      cout << nova << endl;
      nova = "";
    }
    return 0;
}