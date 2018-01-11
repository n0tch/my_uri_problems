#include <iostream>
#include <vector>
#include <map>

using namespace std;

float mochila(int W, vector<float> b, vector<int> wt){
  int b_size = b.size();
  float V[b_size+1][W+1];
  
  for(int i=0;i<=b_size;i++)
    V[i][0] = 0;
  
  for(int i=0;i<=W;i++)
    V[0][i] = 0;
  
  for(int i=1;i<=b_size;i++){
    for(int w=1;w<=W;w++){
      V[i][w] = V[i-1][w];
      if(wt[i-1] <= w)
        V[i][w] = max(b[i-1]+V[i-1][w-wt[i-1]], V[i-1][w]);
    }
  }
  
  return V[b_size][W];
}

int main(){
  
  map<string, float> armas;
  armas.insert(pair<string, float>("HANDGUN", 2.0));
  armas.insert(pair<string, float>("RED9", 3.5));
  armas.insert(pair<string, float>("BLACKTAIL", 3.5));
  armas.insert(pair<string, float>("MATILDA", 2.0));
  armas.insert(pair<string, float>("HANDCANNON", 60.0));
  armas.insert(pair<string, float>("STRIKER", 12.0));
  armas.insert(pair<string, float>("TMP", 1.2));
  armas.insert(pair<string, float>("RIFLE", 12.0));
  
  map<string, int> monstros;
  monstros.insert(pair<string, float>("GANADOS", 50));
  monstros.insert(pair<string, float>("COBRAS", 40));
  monstros.insert(pair<string, float>("ZEALOT", 75));
  monstros.insert(pair<string, float>("COLMILLOS", 60));
  monstros.insert(pair<string, float>("GARRADOR", 125));
  monstros.insert(pair<string, float>("LASPLAGAS", 100));
  monstros.insert(pair<string, float>("GATLINGMAN", 150));
  monstros.insert(pair<string, float>("REGENERATOR", 250));
  monstros.insert(pair<string, float>("ELGIGANTE", 500));
  monstros.insert(pair<string, float>("DR.SALVADOR", 350));
  
  int qnt_armas, qnt_monstros, monstro_vida_t=0, W, balas, q_monstro;
  string arma, monstro;
  
  while(cin >> qnt_armas){
    vector<float> b(qnt_armas);
    vector<int> wt(qnt_armas);
    
    for(int i=0; i<qnt_armas;i++){
      cin >> arma >> balas;
      b[i] = armas[arma]*balas;
      wt[i] = balas;
    }
    
    cin >> qnt_monstros;
    while(qnt_monstros--){
      cin >> monstro >> q_monstro;
      monstro_vida_t += (monstros[monstro]*q_monstro);
    }
    
    cin >> W;
    /*
    cout << mochila(W, b, wt) << endl;
    cout << monstro_vida_t << endl;
    */
    
    if(mochila(W,b,wt) >= monstro_vida_t)
      cout << "Missao completada com sucesso" << endl;
    else
      cout << "You Are Dead" << endl;
    
    cout << endl;
    monstro_vida_t = 0;
  }
  return 0;
}






