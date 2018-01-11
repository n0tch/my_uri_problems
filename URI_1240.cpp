#include <iostream>

using namespace std;

int main() {
  int n;
  string n1,n2;
  cin >> n;
  while(n--){
    bool flg = true;
    cin >> n1 >> n2;
    
    for(int i=n2.size()-1;i>=0;i--){
      if(n2[i] != n1[i+(n1.size()-n2.size())]){
        flg = false;
        break;
      }
      
    }
    
    if(flg)
      cout << "encaixa" << endl;
    else
      cout << "nao encaixa" << endl;
  }
}