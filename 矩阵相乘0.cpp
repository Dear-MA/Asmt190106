#include <iostream>
using namespace std;
# define N 9
# define M 3
int main() {
	
	int juZhenA[N] , juZhenB[N] ,juZhenC[N] = { 0 } ;
	int aX (0) ,aY (0), i (0) ; 
	for ( ; i < 2*N ; i ++ ) 
		i < N ? cin >> juZhenA[i] : cin >> juZhenB[i-N] ;
	for ( i = 0 ; i < M ; i ++ ){ 			//前横乘后竖相加 
		for( aY = 0 ; aY < M ; aY ++ ){		//c11=a11*b11+a12*b21+a13*b31 
			for( aX = 0 ; aX < M ; aX ++ ){	//c12=a11*b12+a12*b22+a13*b32//变量变化速度：cy cx ay ax bx by
				juZhenC[M*i+aY]  += ( juZhenA[i*M+aX] * juZhenB[aX*M+aY] );
												//其中，cy=bx,ax=by,ay=cx单独列出cx 
			}									//还有，n=y*3+x 
		}
	}
	for ( i = 0 ; i < N ; i ++ ){
		cout <<juZhenC[i]<<' ';
		if ( i % M == 2 ) cout <<endl;
	}
	return 0 ; 
}
