#include <iostream>
#include <cmath>

using namespace std;

int main(){
  float num, qnt, dec;
  //int qnt;
  int notas[] = {100,50,20,10,5,2};
  float moedas[] = {50, 25, 10, 5, 1};
  
  cin >> num;
  dec = round((num-(int)num)*100);
  cout << "NOTAS:"<<endl;
  for(int i=0;i<6;i++){
    qnt = (int)(num/notas[i]);
    cout << qnt << " nota(s) de R$ " << (float)notas[i] << ".00" << endl;
    num -= qnt*notas[i];
  }
  
  cout << "MOEDAS:" << endl;
  
  qnt = (int)(num/1);
  printf("%d moeda(s) de R$ 1.00\n", (int)qnt);
    
  for(int i =0;i<5;i++){
    qnt = (int)(dec/moedas[i]);
    printf("%d moeda(s) de R$ %.2f\n", (int)qnt, moedas[i]/100);
    dec -= (qnt*moedas[i]);
    //qnt_f = 0;
  }
  
  return 0;
}