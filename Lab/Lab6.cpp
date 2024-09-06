#include <stdio.h>
int main() {
    int number ;
    printf( "Enter your number : " )  ;
    scanf( "%d", &number ) ;
    if( number % 2 == 0 ){                
        for ( int i = 1 ; i <= number ; i++ ){
            for ( int j = 1 ; j <= number ; j++ ){
                if ( j == i ){
                    printf( " 1 " ) ;
                }else{
                    printf( " 0 " ) ;
                } //end if
            }printf( " \n " ) ; // end for
        } //end for
    }else if( number % 2 == 1 ){
        for ( int i = 1 ; i <= number ; i++ ){
            for ( int j = 1 ; j <= number ; j++ ){
                if(  j == number - i + 1 ){
                    printf( " 1 " ) ;
                }else{
                    printf( " 0 " ) ;
                } // end if
            } printf( " \n " ) ;  // end for
        }// end for
} // end if
return 0;
} // end main function