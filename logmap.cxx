#include <iostream>
#include <fstream>

using namespace std;

int main(){
  double x;
  double r;
  int Nskip=100; //number of iterations to skip
  int Nend=200; //number of total  iterations
  int M=4;
  
  int ArraySize=Nend-Nskip;
  double p[ArraySize]; 
  
  ofstream out("output.dat");
  
  for(r=1.0;r<=M;r+=0.01){
    x=0.5;
      for(int i=1;i<=Nskip;i++){
	x=r*x*(1-x);	
      }
	for(int k=Nskip+1;k<=Nend;k++){ 
	  x=r*x*(1-x);
	  p[k-(Nskip+1)]=x; //store values in the array
	  //cout << r <<"\t" << x << endl;
	}  
	 for(int i=0;i<ArraySize;i++){
	   //cout << r << '\t' << "p[" << i << "]=" << p[i] << endl;
	   out << r << '\t' << p[i] << endl; //write all values in file
	 }
  }
  out.close();
  
  return 0; 
}