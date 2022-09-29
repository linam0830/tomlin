#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=199,j=4;

	for(i=1;i<=9;i=i+1) {
		for(j=2;j<=5;j++)
	 		printf  ("%2dx%2d=%2d  ",j,i,i*j);
	 	printf  ("\n");
	}
	printf  ("\n\n");
	for(i=1;i<=9;i=i+1) {
		for(j=6;j<=9;j++)
	 		printf  ("%2dx%2d=%2d  ",j,i,i*j);
	 	printf  ("\n");
	}


	return 0;
}
