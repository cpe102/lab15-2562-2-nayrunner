#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}

//Write definition of randData(), showData() and findRowSum()
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

void findRowSum(const double *dPtr,double *result,int N,int M){
	double rowplus;
	int p =0,o=0;

	for(int x =0;x<N;x++){
		float ei = 0;
		
		for(int y=0;y<M;y++){
		float eiei = *(dPtr+p);
        ei = eiei + ei;
		p++;
	}
	
	*(result+o) = ei;
	o++;

}

}