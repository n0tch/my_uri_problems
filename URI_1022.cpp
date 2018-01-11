#include<iostream>

using namespace std;
int mdc(int a, int b){
	return (b == 0) ? a : mdc(b, a%b);
}

int main(){
	
	int n,n1,n2,d1,d2;
	int numerador, denominador, divisor;
	char op, d;
	cin >> n;
	
	while(n--){
		cin >> n1 >> d >> d1 >> op >> n2 >> d >> d2;
		
		if(op == '+'){
			numerador = (n1*d2 + n2*d1);
			denominador = (d1*d2);
		}else if(op == '-'){
			numerador = (n1*d2 - n2*d1);
			denominador = (d1*d2);
		}else if(op == '*'){
			numerador = (n1*n2);
			denominador = (d1*d2);
		}else{
			numerador = (n1*d2);
			denominador = (n2*d1);
		}
		
		divisor = mdc(numerador, denominador);
		cout << numerador << "/" << denominador << " = ";
		
		if(divisor < 0)
			cout << "-" << (numerador/divisor) << "/" << (-1)*(denominador/divisor) << endl;
		else
			cout  << (numerador/divisor) << "/" << (denominador/divisor) << endl;
	}
	
	return 0;
}