#include <iostream>

using namespace std;

int main(){
  double x;
  double r;
  int N=100;
  int M=4;
  
  for(r=1.0;r<=M;r+=0.01){
    x=0.5;
    for(int i=1;i<=N;i++){
      x=r*x*(1-x);	
    }
    for(int k=1;k<=N;k++){
      x=r*x*(1-x);
	  cout << r <<"\t" << x << endl;
	}  
  }
  return 0;
}