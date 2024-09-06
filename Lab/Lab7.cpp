#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int pn ;
    printf( "Do you want to play [Play = 1] [Exit = 0] : " ) ;
    scanf( "%d", &pn ) ;
    if ( pn == 1 ){
        do {
            srand( time ( NULL ) ) ;
            int mysnum = rand() % 100 + 1 ;
            int fool, hp = 100 ;
            int n1 = 1 ;
            int n2 = 100 ;
            printf( "Score: %d\n", hp ) ;
                 do {
                    printf( "Guess the winning number (%d - %d): ", n1, n2 ) ;
                    scanf( "%d", &fool ) ;
                    if ( fool < mysnum ) {
                        if( fool > n1 ){
                            n1 = fool + 1 ;
                        }//endiflock1
                        n1 = fool + 1 ;
                        printf( "Sorry, the winning number is HIGHER than %d (%d - %d)\n", fool, n1, n2 ) ;
                        hp -= 10 ;
                    }//endifhigher
                    else if ( fool > mysnum ) {
                        if( fool < n2 ){
                            n2 = fool -1 ;
                        }//endiflock2
                        n2 = fool - 1 ;
                        printf( "Sorry, the winning number is LOWER than %d (%d - %d)\n", fool, n1, n2 ) ;
                        hp -= 10 ;
                    }//endiflower
                    else if ( fool == mysnum ) {
                        printf( "That is correct! The winning number is %d\n", fool ) ;
                        printf( "Score this game: %d\n", hp ) ;
                    }//endifcurrent
                    printf( "Score: %d\n", hp ) ;
                    if( hp == 0 ){
                        printf( "Sorry you lose\n" );
                        break ;
                    }//endifscore0
                }//enddoinwhileindo
                while ( fool != mysnum ) ;
                printf( "Do you want to play the game again [Play = 1] [Exit = 0] : " ) ;
                scanf( "%d", &pn ) ;
        } //enddo1
        while ( pn == 1 ) ;
        printf( "Bye Bye" );
    } //endif
    else if( pn == 0){
        printf( "Bye Bye" );
    } //endelseifbyebye
    return 0;
}//endintmain
