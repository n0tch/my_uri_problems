#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int m,t,c=0;
  
  while(cin >> m >> t && (m != 0 || t != 0)){
  	vector<int> marmores(m);
  	vector<int> tentativas(t);
  	for(int i=0;i<m;i++){
  		cin >> marmores[i];
  	}
  	for(int i=0;i<t;i++){
  		cin >> tentativas[i];
  	}
  	
  	sort(marmores.begin(), marmores.end());
  	cout << "CASE# " << c+1 << ":" << endl;
  	for(int i=0;i<t;i++){
  		if(tentativas[i] > marmores[marmores.size()-1]){
  			cout << tentativas[i] << " not found" << endl;
  			continue;
  		}
  		int pos = find(marmores.begin(), marmores.end(), tentativas[i]) - marmores.begin();
  		if(pos >= marmores.size())
  			cout << tentativas[i] << " not found" << endl; 
  		else
  			cout << tentativas[i] << " found at " << pos + 1 << endl;
  		
  	}
  	c++;
  }
}