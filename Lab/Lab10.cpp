#include <stdio.h>
#include <string.h>
int main(){
	char word[ 100 ] ;
	char back[ 100 ] ;
	printf( "Enter Word : " ) ;
	scanf( "%s", word ) ;
	int count = strlen( word ) ;
	printf( "Word Length : %d\n", count ) ;
	strcpy( back, word ) ;
 	printf( "Back Word : " ) ;
		for( int i = 0 ; i < count ; i++ ) {
		    back[ i ] = word[ count - i - 1 ] ;
		}//endfor
	printf( "%s\n", back ) ;
	printf( "Status : " ) ;
	if( strcmp( word, back ) == 0 ){
	    printf( "Pass." ) ;
	}//endif
	else printf( "Not Pass." ) ;
    return 0 ;
}//endfunction