#include <iostream>
 
using namespace std;

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    int n,l,i,j,result;
    string p;
    
    cin >> n;
    cin.ignore();
    while(n--){
      cin >> l;
      cin.ignore();
      for(i=0,result=0;i<l;i++){
        getline(cin, p);
        for(j=0;j<p.size();j++){
          result += (p[j] - 65) + j + i;
        }
      }
      cout << result << endl;
    }
    return 0;
}