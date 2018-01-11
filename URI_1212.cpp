#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int string_to_int(char num){
  string n;
  n += num;
  
  return atoi(n.c_str());
}
int main(){
  string n1,n2,aux;
  int n1_i, n2_i, sobra, qnt, num;
  
  while(cin >> n1 >> n2 && (n1 != "0" || n2 != "0")){
    reverse(n1.begin(),n1.end());
    reverse(n2.begin(),n2.end());
    if(n1.size()<n2.size()){
      aux = n1;
      n1 = n2;
      n2 = aux;
    }
    qnt = 0;
    sobra = 0;
    for(int i=0;i<n1.size();i++){
      n1_i = string_to_int(n1[i]);
      if(i > n2.size())
        n2_i = 0;
      else
        n2_i = string_to_int(n2[i]);
    
      num = ((n1_i+n2_i+sobra) % 10);
      sobra = ((n1_i+n2_i+sobra) / 10);
      
      //cout << n1_i << " + " << n2_i << " = " << num << endl;
      
      if(sobra)
        qnt++;
      
    }
    if(qnt && qnt == 1)
      cout << "1 carry operation." << endl;
    else if(qnt)
      cout << qnt << " carry operations." << endl;
    else
      cout << "No carry operation." << endl;
  }
  return 0;
}