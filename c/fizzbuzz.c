#include <stdio.h>
#include <string.h>

int main(void) {
    int flag=0;
    int i;
	for(int number=0;number<100;number++){
	    flag=0;
	    i=number+1;
	    if(i%3==0){
	        printf("Fizz ");
	        flag=1;
	    }
	    if(i%5==0){
	        printf("Buzz ");
	        flag=1;
	    }
	    if(flag==0)
	        printf("%d\n",i);
	    else
	        printf("\n");
	}
	return 0;
}


