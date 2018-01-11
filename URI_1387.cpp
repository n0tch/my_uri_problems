#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,m;
    
    do{
        cin >> n >> m;
        if(n == 0 && m == 0)
            break;
        cout << to_string(m+n) << endl;
    }while(n!= 0 && m!=0);
    
    return 0;
}