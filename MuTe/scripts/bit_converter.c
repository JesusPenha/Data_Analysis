#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char c = 'a';
	char buffer [33];

	//snprintf(buffer, sizeof(buffer), "%d", c);
  	//printf ("decimal: %s\n",buffer);
  	//printf ("binary: %s\n",buffer);

	int i;

	for (i=7; i>=0; i--) {

	    printf("%d", c & (1 << i ) );

	}

	printf("Unsigned char: %d\n", c);

	return 0;
}
