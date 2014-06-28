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

int quad(int a, int b, int c){


	return -3;


	
}



int main(int argc, char* argv[] ){



	equals( -3, quad(1, 0, -9) );




	printf("good work\n");

	return 0;
}


