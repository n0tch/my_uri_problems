#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    string cpf, cpf_v, v;
    string vlr, vlr_v;
    bool flg = true, flg_decimal = true;
    float valor;
    int count=0;
    
    cin >> cpf;
    cin >> vlr;
    
    for(int i=0, count=0;i<cpf.size();i++){
      if( cpf[i] >= '0' && cpf[i] <= '9' && flg){
        cpf_v+= cpf[i];
        if(cpf_v.size() > 10){
          flg = false;
          continue;
        }
      }
      
      if(!flg && cpf[i] >= '0' && cpf[i] <= '9' || cpf[i] == '.'){
        if(count <3)
          v+= cpf[i];
          
        if(cpf[i] == '.')
          flg_decimal = false;
          
        if(!flg_decimal)
          count++;
          
      }
    }

    count = 0;
    flg_decimal = true;
    
    for(int i=0;i<vlr.size();i++){
      if( vlr[i] >= '0' && vlr[i] <= '9' || vlr[i] == '.'){
        if(count < 3)
          vlr_v += vlr[i];
          
        if(vlr[i] == '.')
          flg_decimal = false;
          
        if(!flg_decimal)
          count++;
      }
    }
    
    cout << "cpf " << cpf_v << endl;
    cout << setprecision(2) << fixed << atof(v.c_str())+atof(vlr_v.c_str()) << endl;
    
    return 0;
}