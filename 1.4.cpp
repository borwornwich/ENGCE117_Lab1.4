#include <stdio.h>

int GetSet(int *arr) ;

int main() {
 	int data[ 100 ] ; 
    int num = GetSet( data ) ;
 
 	printf( "All MEMBERS %d :\n", num ) ;
    for ( int i = 0; i < num; i++ ) {
        printf( "data member %d: %d\n", i + 1, data[i] ) ;
    }

 	return 0 ;
}//end function

int GetSet(int *arr) {
	int num ;
	printf( "Enter the number of member : " ) ;
    scanf( "%d", &num ) ;
    
    for( int i = 0 ; i < num ; i++ ) {
    	printf( "No[%d] : ", i+1 ) ;
    	scanf( "%d", &arr[i] ) ;
	}
	return num ;
}
