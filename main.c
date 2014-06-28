#include <stdio.h>
#include <math.h>

#define	PASS	0
#define	FAIL	1

int equals( int expected, int actual ){
	if( expected == actual ){
		return PASS;
	}
	printf( "FAIL: expected %d but was %d\n", expected, actual );
	return FAIL;
}

int mySqrt(int x){


	return sqrt(x);


	
}



int main(int argc, char* argv[] ){
	printf("Hello!\n");



	equals( 10, mySqrt(100) );
	equals( 0, mySqrt(0) );






	return 0;
}


