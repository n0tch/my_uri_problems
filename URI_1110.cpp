#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
	
	int n;
	vector<int> baralho, excluidas;
	stack<int> pilha;
	
	do{
		cin >> n;
		if(n == 0)
			break;
			
		for(int i=1;i<=n;i++){
			baralho.push_back(i);
		}
		
		for(int i=n-1;i>=0;i--){
			pilha.push(baralho[i]);
		}
		
		while(baralho.size()>1){
			baralho.erase(baralho.begin());
			excluidas.push_back(pilha.top());
			pilha.pop();
			baralho.erase(baralho.begin());
			baralho.push_back(pilha.top());
			pilha.pop();
			for(int i=baralho.size()-1;i>=0;i--){
				pilha.push(baralho[i]);
			}
		}
		
		cout << "Discarded cards: ";
		if(excluidas.size() == 0)
			cout << endl;
		for(int i=0;i<excluidas.size();i++){
			if(i == excluidas.size()-1)
				cout << excluidas[i] << endl;
			else
				cout << excluidas[i] << ", ";
		}
		
		cout << "Remaining card: ";
		cout << baralho[0] << endl;
		
		excluidas.clear();
		baralho.clear();
		//pilha.clear();
		
	}while(n);
	
	return 0;
}