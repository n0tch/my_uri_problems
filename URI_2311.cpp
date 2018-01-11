#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<numeric>
#include<iomanip>
#include<limits>

using namespace std;

int main(){
	
	string nome;
	int n;
	float peso;
	vector<float> notas;
	
	cin >> n;
	
	while(n--){
		//getline(cin, nome);
		cin >> nome;
		cin >> peso;
		
		for(int j=0;j<7;j++){
			float nt;
			cin >> nt;
			notas.push_back(nt);
		}
		
		auto maximo = max_element(begin(notas), end(notas));
		auto minimo = min_element(begin(notas), end(notas));
		float soma;
		for(float s : notas){
			soma += s;
		}
		
		cout << nome;
		printf(" %.2f\n", (soma -(*maximo+*minimo))*peso);
		soma = 0;
		notas.clear();
	}
	
	return 0;
}