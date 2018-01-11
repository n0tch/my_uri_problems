#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct camisa{
	string dono, cor;
  char tamanho;
}camisa;

bool cmp(const struct camisa &A, const struct camisa &B){
	if(A.cor < B.cor)
		return true;
	else if(A.cor == B.cor)
		if(A.tamanho > B.tamanho)
			return true;
		else if(A.tamanho == B.tamanho)
			return (A.dono < B.dono);
		else
			return false;
	else
		return false;
}

int main() {
  int casos,i=0;
  while(cin >> casos && casos != 0){
  	cin.ignore();
  	if(i != 0)
  		cout << endl;
  	
  	i++;
  	vector<camisa> camisas(casos);
  	for(int i=0;i<casos;i++){
  		getline(cin, camisas[i].dono);
  		cin >> camisas[i].cor >> camisas[i].tamanho;
  		cin.ignore();
  	}
  	
  	sort(camisas.begin(), camisas.end(), cmp);
  	
  	for(int i=0;i<casos;i++){
  		cout << camisas[i].cor << " " << camisas[i].tamanho << " " << camisas[i].dono << endl;
  	}
  }
}