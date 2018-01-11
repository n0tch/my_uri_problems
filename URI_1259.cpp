#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  vector<int> v_par, v_impar;
  int n, num;
  
  cin >> n;
  
  for(int i =0;i<n;i++){
    cin >> num;
    if(num % 2 == 0)
      v_par.push_back(num);
    else
      v_impar.push_back(num);
  }
  
  sort(v_par.begin(), v_par.end());
  
  for(int i=0;i<v_par.size();i++){
    cout << v_par[i] << endl;
  }
  
  sort(v_impar.begin(), v_impar.end(), greater<int>());
  
  for(int i=0;i<v_impar.size();i++){
    cout << v_impar[i] << endl;
  }
  
  return 0;
}