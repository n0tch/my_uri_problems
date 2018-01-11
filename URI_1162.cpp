#include <iostream>

using namespace std;

int bubble(int trem[], int tam){
  int aux, vzs=0;
  
  for(int i=0;i<tam;i++){
    for(int j=i;j<tam;j++){
      if(trem[i] > trem[j]){
        aux = trem[i];
        trem[i] = trem[j];
        trem[j] = aux;
        vzs++;
      }
    }
  }
  
  return vzs;
}

int main(){
  
  int n, tam,i;
  cin >> n;
  
  while(n--){
    cin >> tam;
    int trem[tam];
    
    for(i=0;i<tam;i++){
      cin >> trem[i];
    }
    
    cout << "Optimal train swapping takes " << bubble(trem,tam) << " swaps." << endl;
  }
  return 0;
}