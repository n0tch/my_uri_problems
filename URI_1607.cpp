#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
		string n1,n2;
		int n,i,vzs;
		
		cin >> n;
		while(n--){
			cin >> n1;
			cin.ignore();
			cin >> n2;
			
			for(i=0,vzs=0;i<n1.size();i++){
				while(n1[i] != n2[i]){
					vzs++;
					if(n1[i] == 'z')
						n1[i] = 'a';
					else{
						n1[i] = n1[i] + 1;
					}
				}
			}
			
			printf("%d\n", vzs);
			vzs=0;
		}
    return 0;
}