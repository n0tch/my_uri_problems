#include <iostream>
#include <vector>

using namespace std;

int mochila_max(int W, vector<int> b, vector<int> wt){
	int n = b.size();
	int V[n+1][W+1];
	
	for(int i=0;i<=W;i++)
		V[0][i] = 0;
	
	for(int i=0;i<=n;i++)
		V[i][0] = 0;

	for(int i=1;i<=n;i++){
		for(int w=1;w<=W;w++){
			if(wt[i-1] <= w){
				if(b[i-1]+V[i-1][w-wt[i-1]] > V[i-1][w]){
					V[i][w] = b[i-1]+V[i-1][w-wt[i-1]];
				}else{
					V[i][w] = V[i-1][w];
				}
			}else{
				V[i][w] = V[i-1][w];
			}
		}
	}
	
	return V[n][W];
}

int main(){
	
	int n, num_proj, p, d, W, r;
	vector<int> b, w;
	cin >> n;
	while(n--){
		cin >> num_proj;
		while(num_proj--){
			cin >> d >> p;
			b.push_back(d);
			w.push_back(p);
		}
		cin >> W;
		cin >> r;
		if(mochila_max(W,b,w) >= r)
			cout << "Missao completada com sucesso" << endl;
		else
			cout << "Falha na missao" << endl;
			
		b.clear();
		w.clear();
	}
	
	
	return 0;
}