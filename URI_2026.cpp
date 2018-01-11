#include <iostream>
#include <vector>

using namespace std;
int mochila(int W, vector<int>b, vector<int> wt){
    int b_size = b.size();
    int V[b_size+1][W+1];
    
    for(int i=0;i<=b_size;i++)
        V[i][0] = 0;
    
    for(int i=0;i<=W;i++)
        V[0][i] = 0;
    
    for(int i=1;i<=b_size;i++){
        for(int w=1;w<=W;w++){
            V[i][w] = V[i-1][w];
            if(wt[i-1] <= w){
                V[i][w] = max(b[i-1]+V[i-1][w-wt[i-1]], V[i-1][w]);
            }
        }
    }
    
    return V[b_size][W];
}
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int casos, qnt, W;
    cin >> casos;
    
    for(int k=0;k<casos;k++){
        cin >> qnt;
        cin >> W;
        vector<int> b(qnt), wt(qnt);
        for(int i=0;i<qnt;i++){
            cin >> b[i] >> wt[i];
        }
        
        cout << "Galho " << k+1 << ":" << endl;
        cout << "Numero total de enfeites: " << mochila(W, b, wt) << endl;
        cout << endl;
    }
    return 0;
}