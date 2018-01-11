#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<int> pilha;
	int n, vzs=0;
	string areia;
	
	cin >> n;
	cin.ignore();
	while(n--){
		getline(cin, areia);
		for(int i=0;i<areia.size();i++){
			if(areia[i] == '<')
				pilha.push(1);
			else if(areia[i] == '>' && !pilha.empty()){
				vzs++;
				pilha.pop();
			}
		}
		
		cout << vzs << endl;
		
		while(pilha.size()){
			pilha.pop();
		}
		vzs = 0;
	}
	
	return 0;
}