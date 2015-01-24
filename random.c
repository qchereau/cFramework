#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()

{
srand(time(NULL));
int r = rand()%2;
printf("%d\n",r);

    return 0;

}