#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    string msg;
    int i,count;
    
    getline(cin,msg);
    for(i=0,count=0;i<msg.size();i++){
      if(msg[i] == '1')
        count+=1;
    }
    
    if(count %2==0)
      cout << msg << "0" << endl;
    else
      cout << msg << "1" << endl;
      
    return 0;
}