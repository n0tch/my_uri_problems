#include <iostream>
#include <map>

using namespace std;

int main() {
  int casos;
  cin >> casos;
  while(casos--){
  	
  	int total, t, qnt;
  	string prod;
  	float preco,preco_total=0;
  	
  	cin >> total;
  	map<string, float> produtos;
  	
  	while(total--){
  		cin >> prod >> preco;
  		produtos.insert(pair<string, float>(prod,preco));
  	}
  	
  	cin >> t;
  	for(int i=0;i<t;i++){
  		cin >> prod >> qnt;
  		preco_total += (produtos[prod]*qnt);
  	}
  	
  	//cout << "R$ " << preco_total << endl;
  	printf("R$ %.2f\n", preco_total);
  }
}