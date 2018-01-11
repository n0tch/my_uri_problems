#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;
 
int primo(int n);
int primo_dig(int n);

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int num,i;
    
    while(cin >> num){
      i = primo(num);
      
      if(i && primo_dig(num)){
        cout << "Super" << endl;
      }else if(i){
        cout << "Primo" << endl;
      }else{
        cout << "Nada" << endl;
      }
    }
    return 0;
}

int primo_dig(int n){
  string dig = to_string(n);
  int i;
  
  for(i=0;i<dig.size();i++){
    if(!primo(stoi(to_string(dig[i]))-48)){
      return 0;
    }
  }
  
  return 1;
}

int primo(int num){
  //cout << "." << num << endl;
  if(num == 2)
    return 1;
  else if(num <= 1)
    return 0;
    
  int i;
  for(i=2;i<sqrt(num)+1;i++){
    if(num%i==0){
      return 0;
    }
  }
  return 1;
}