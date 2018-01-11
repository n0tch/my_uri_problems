#include <iostream>
#include <vector>

using namespace std;

int main() {
  int casos, mod, qnt, i;
  cin >> casos;
  for(int i=0;i<casos;i++){
  	cin >> mod >> qnt;
  	vector<int> nums(qnt);
  	
  	for(int j=0;j<qnt;j++){
  		cin >> nums[j];
  	}
  	
  	for(int j=0;j<mod;j++){
  		cout << j << " -> ";
  		for(int k=0;k<nums.size();k++)
  			if(nums[k] % mod == j)
  				cout << nums[k] << " -> ";
  			
  		cout << "\\" << endl;
  	}
  	if(i!=casos-1)
  		cout << endl;
  }
}