#include <iostream>
#include <map>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct tabela{
  int num;
  int freq;
}tabela;

bool cmp(const struct tabela &A, const struct tabela &B){
  if(A.freq < B.freq)
    return true;
  
  if(A.freq == B.freq)
    return A.num > B.num;
    
  return false;
}
int main(){
  
  map<int, int> lista;
  map<int, int> :: iterator it;
  int c, i;
  bool flg = false;
  string palavra;
  //cin.ignore();
  while(getline(cin,palavra)){
    if(flg)
      cout << endl;
    for(int i=0;i<palavra.size();i++){
      //cout << palavra[i];
      c = (int)palavra[i];
      lista.insert(pair<int,int>(c, lista[c]++));
    }
    //cout << endl;
    vector<tabela> lista_t(lista.size());
    for(i=0,it = lista.begin(); it != lista.end();++it,i++){
      //cout << it->first << " " << it->second << endl;
      lista_t[i].num = it->first;
      lista_t[i].freq = it->second;
    }
    
    sort(lista_t.begin(),lista_t.end(),cmp);
    for(i = 0;i<lista_t.size();i++){
      cout << lista_t[i].num << " " << lista_t[i].freq << endl;
      //" "<< (char)lista_t[i].num<< 
    }
    lista.clear();
    lista_t.clear();
    flg = true;
  }
  return 0;
}