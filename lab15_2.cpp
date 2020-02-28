#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()
void randData(double*dPtr,int N ,int M){
	for(int j = 0;j<(N*M);j++){
	int i = rand()%100;
	float ran = i*0.01;
	*(dPtr+j)=ran;
	}
}

	
void showData(double *dPtr,int N,int M){
	int p =0;
	for(int x =0;x<N;x++){
		for(int y=0;y<M;y++){
        cout<<*(dPtr+p)<<"   ";
		p++;
		}
		cout<<"\n";
	}
}

void findColSum(const double *dPtr,double *result,int N,int M){
      
	double rowplus;
	int p =0,o=0,i=0;

	for(int x =0;x<M;x++){
		float ei = 0;
		
		
		for(int y=0;y<N;y++){
		float eiei = *(dPtr+p+i);
        ei = eiei + ei;
		p = p +7;
		
	}

	p= 0;
	*(result+o) = ei;
	o++;
	i++;
}

}