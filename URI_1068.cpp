#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	string expressao;
	
	while(cin >> expressao){
		stack<int> p;
		bool flg = true;
		
		for(int i=0;i<expressao.size();i++){
			if(expressao[i] == '(')
				p.push(1);
			else if(expressao[i] == ')' && !p.empty())
				p.pop();
			else if(expressao[i] == ')' && p.empty()){
				flg = false;
				break;
			}
		}
		
		
		if(p.size() == 0 && flg)
			cout << "correct" << endl;
		else
			cout << "incorrect" << endl;
	}
	
	return 0;
}