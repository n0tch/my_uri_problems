#include <iostream>
#include <vector>

using namespace std;

int mochila(int W, vector<int> b, vector<int> wt){
	int V[b.size()+1][W+1];
	
	for(int i=0;i<=b.size();i++){
		V[i][0] = 0;
	}
	for(int i=0;i<=W;i++){
		V[0][i] = 0;
	}
	
	for(int i=1;i<=b.size();i++){
		for(int w=1;w<=W;w++){
			if(wt[i-1] <= w){
				if(b[i-1]+V[i-1][w-wt[i-1]] > V[i-1][w])
					V[i][w] = b[i-1]+V[i-1][w-wt[i-1]];
				else
					V[i][w] = V[i-1][w];
			}else{
				V[i][w] = V[i-1][w];
			}
		}
	}
	return V[b.size()][W];
}

int main(){
	
	int n, W, t, q;
	vector<int> b, wt;
	do{
		cin >> n;
		if(n==0)
			break;
		cin >> W;
		
		while(n--){
			cin >> t >> q;
			b.push_back(t);
			wt.push_back(q);
		}
		cout << mochila(W,b,wt) << " min." << endl;
		b.clear();
		wt.clear();
		
	}while(true);
	
	return 0;
}