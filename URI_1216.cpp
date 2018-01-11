#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
		string nome;
		int num,total=0,vzs=0;
		
		while(getline(cin, nome)){
			cin >> num;
			total+=num;
			cin.ignore();
 			vzs++;
 			
		}
		
		cout << setprecision(1) << fixed << ((float)total/vzs)<< endl;
		
    return 0;
}