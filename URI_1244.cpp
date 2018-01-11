#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

bool cmp(string a, string b){
	if(a.size() > b.size()){
		return true;
	}
	
	return false;
}

int main(){
	int m,i;
	string s, s_tmp;
	vector<string> palavras;
	
	cin >> m;
	cin.ignore();
	
	while(m--){
		getline(cin, s);
		stringstream ss(s);
		
		while(getline(ss, s_tmp, ' ')){
			palavras.push_back(s_tmp);
		}
		
		stable_sort(palavras.begin(),palavras.end(), cmp);
		for(i=0;i<palavras.size()-1;i++){
			cout << palavras[i] << " " ;
		}
		cout << palavras[i] << endl;
		
		palavras.clear();
	}
	return 0;
}