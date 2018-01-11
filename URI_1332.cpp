#include <iostream>
#include <string>

using namespace std;

int main(){
  int n;
  string palavra;
  cin >> n;
  
  while(n--){
    cin >> palavra;
    
    if(palavra.size() == 5){
      cout << 3 << endl;
      continue;
    }
    int qnt = 0;
    if(palavra[0] == 'o')
      qnt ++;
    if(palavra[1] == 'n')
      qnt ++;
    if(palavra[2] == 'e')
      qnt ++;
      
    if(qnt >= 2){
      cout << 1 << endl;
      continue;
    }
    qnt=0;
    if(palavra[0] == 't')
      qnt ++;
    if(palavra[1] == 'w')
      qnt ++;
    if(palavra[2] == 'o')
      qnt ++;
    
    if(qnt >= 2){
      cout << 2 << endl;
      continue;
    }
  }
  return 0;
}