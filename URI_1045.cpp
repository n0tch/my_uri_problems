#include <iostream>
#include <cmath>

using namespace std;

int main(){
  float A,B,C,a,b,c;
  
  cin >> a >> b >> c;
  
  A = max(max(a,b),c);
  C = min(min(a,b),c);
  B = (a+b+c)-(A+C);

  if(A >= B+C)
    cout << "NAO FORMA TRIANGULO" << endl;
  else{
    if(pow(A,2) == pow(B,2) + pow(C,2))
      cout << "TRIANGULO RETANGULO" << endl;
    if(pow(A,2) > pow(B,2) + pow(C,2))
      cout << "TRIANGULO OBTUSANGULO" << endl;
    if(pow(A,2) < pow(B,2) + pow(C,2))
      cout << "TRIANGULO ACUTANGULO" << endl;
    if(A==B && B==C)
      cout << "TRIANGULO EQUILATERO" << endl;
    if((A==B && A != C) || (B==C && B != A) || (A==C && A != B))
      cout << "TRIANGULO ISOSCELES" << endl;
  }
  return 0;
}