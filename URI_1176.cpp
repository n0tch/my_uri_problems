#include <iostream>
 
using namespace std;
long long int fib(int n);

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i,n;
    long long int num;
    cin >> n;
    
    for(i=0;i<n;i++){
        cin >> num;
        cout << "Fib(" << num << ") = " << fib(num) << endl;
    }
    
    return 0;
}

long long int fib(int n){
  long long int a,b,c;
  int count;
  a = 0;
  b = 1;
  c = a+b;
  
  if(n == 0)
    return 0;
    
  for(count=2;count<n;count++){
      
    if(n == 1 || n == 2)
      return 1;
    
    a = b;
    b = c;
    c = a + b;
  }
  
  return c;
}