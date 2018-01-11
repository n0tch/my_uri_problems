#include <iostream>
using namespace std;

int main(){
  string original, time1, time2;
  int casos;
  
  cin >> casos;
  cin.ignore();
  
  for(int i=0;i<casos;i++){
    getline(cin,original);
    getline(cin,time1);
    getline(cin,time2);
    int t1 = 0;
    int t2 = 0;
    bool flg = true, f1 = false, f2 = false, v1=false,v2=false;
    for(int j=0;j<original.size();j++){
      if(original[j] == time1[j]){
        t1++;
        f1 = true;
      }
      
      if(original[j] == time2[j]){
        t2++;
        f2 = true;
      }
      
      if(flg && (f1 ^ f2))
        if(f1){
          flg = false;
          v1 = true;
        }else if(f2){
          flg = false;
          v2 = true;
        }
        f1 = false;
        f2 = false;
    }
    
    cout << "Instancia " << (i+1) << endl;
    if(t1 > t2)
      cout << "time 1" << endl;
    else if(t2 > t1)
      cout << "time 2" << endl;
    else if(!(v1 || v2))
      cout << "empate" << endl;
    else if(v1)
      cout << "time 1" << endl;
    else if(v2)
      cout << "time 2" << endl;
      
    cout << endl;
  }
}