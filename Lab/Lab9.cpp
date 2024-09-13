#include <stdio.h>
int main(){
	int i, n, j, r, m ;
	printf( "enter n : " ) ;
	scanf( "%d", &n ) ;
	int Num [ n ] ;
	Num[0] = Num[n] ;
	for(i = 0 ; i < n ; i++){
		printf( "enter for Num[%d] : ", i );
		scanf( "%d", &Num[i] );
	}
	printf( "index : ") ;
	
	for(j = 0 ; j < n ; j++){
		printf( "%d ", j ) ;
	}
	printf( "\n") ;
	printf( "array : ") ;
	
	for(r = 0 ; r < n ; r++){
	    int prime = Num[ r ] ;
	    int check = 1 ;
		for (m = 2 ; m * m <= prime ; m++){
		    if( prime % 2 == 0 ){
		        check = 0 ;
		        break ;
		    }
		    
		}
		if(check == 0){
		        printf( "# " ) ;
        }
		else printf( "%d ", prime ) ;
    }
    return 0;

}
