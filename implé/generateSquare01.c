#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
	
	int lines =100;
	int columns= 300;
	
	printf("%d %d \n",lines,columns);
	for(int cLine = 0; cLine<lines; cLine++){
		for(int cColumn =0; cColumn<columns; cColumn++){
			printf("%d ",rand()%2);
		}
		printf("\n");
	}
}