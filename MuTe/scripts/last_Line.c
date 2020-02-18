#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

	FILE *fp;
	char *c;

   	fp = fopen("file_Test.dat","a");
	//fputs("This is tutorialspoint.com", fp);

	//fseek( fp, -7, SEEK_END );


	do{
	c = fgetc(fp);

	printf("Char = %c\n", c);

	fputs("\b", fp);
	sleep(1);
	}while(c!='\n');

	fclose(fp);


	return 0;
}
