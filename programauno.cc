//Rosas galicia jose gabriel
//examen
//error solo es en los signos como " o << o ;
//fecha de nacimiento 19-marzo-1995
//al colocar 19 al inicion nos da al final 19
//en algunos numeros se hace un bucle infinito (1,3,5,7,9,11) solo funciona con numeros desde [1,30]
#include <iostream>
using namespace std;

int isprime(int x){
  int flag=0;
  for(int i=2;i<=(x/2); i++){
    if(x%i==0){flag=1;}
    break;}}

int main (){
  int s=12;
  int p=0;
  int flag=0;
  cout<<"dame un numero entero"<<endl;
  cin>>p;
  while(s!=0){
    cout<<"ciclo s!=0, s"<<s<<",p"<<p<<endl;
    while(p<s){
      cout<<"ciclo p<s, s"<<s<<",p"<<p<<endl;
      
      while(isprime(p)==1){
	cout<<"ciclo isprime, s "<<s<<",p"<<endl;
	cout<<p<<"no es primo"<<endl;
	if((p%2)==0)
	  p=p+1;
	p=p+2;
	cout<<"final ciclo isprime, s"<<s<<",p"<<p<<endl;
      }
      s=s-p;
      p=p+2;
      cout<<"final ciclo p<s, s"<<s<<",p"<<p<<endl;
    }
    s=s-1;
    cout<<"final ciclo s!=0, s"<<s<<",p"<<p<<endl;
  }
  cout<<"el valor de p es "<<p<<endl;
  return 0;
}
