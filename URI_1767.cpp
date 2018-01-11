#include <iostream>
#include <vector>

using namespace std;

void mochila(int W, vector<int> b, vector<int> wt){
  int b_size = b.size();
  int V[b_size+1][W+1];
  int Y[b_size+1][W+1];
  int Z[b_size+1][W+1];
  
  for(int i=0;i<=b_size;i++){
    V[i][0] = 0;
    Y[i][0] = 0;
    Z[i][0] = 0;
  }
  
  for(int i=0;i<=W;i++){
    V[0][i] = 0;
    Y[0][i] = 0;
    Z[0][i] = 0;
  }
  
  for(int i=1;i<=b_size;i++){
    for(int w=1;w<=W;w++){
      
      V[i][w] = V[i-1][w];
      Y[i][w] = Y[i-1][w];
      Z[i][w] = Z[i-1][w];
      
      if(wt[i-1] <= w){
        if(b[i-1]+V[i-1][w-wt[i-1]] > V[i-1][w]){
          V[i][w] = b[i-1]+V[i-1][w-wt[i-1]];
          Y[i][w] = wt[i-1] + Y[i-1][w-wt[i-1]];
          Z[i][w] = 1 + Z[i-1][w-wt[i-1]];
        }
      }
    }
  }
  
  cout << V[b_size][W] << " brinquedos" << endl;
  cout << "Peso: " << Y[b_size][W] << " kg" << endl;
  cout << "sobra(m) "<< b_size-Z[b_size][W] << " pacote(s)" << endl;
  //return V[b_size][W];
}

int main(){
  int casos, qnt;
  cin >> casos;
  
  while(casos--){
    cin >> qnt;
    vector<int> b(qnt), wt(qnt);
    for(int i=0;i<qnt;i++){
      cin >> b[i] >> wt[i];
    }
    
    mochila(50, b, wt);
    cout << endl;
  }
  return 0;
}