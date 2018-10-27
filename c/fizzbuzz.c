#include <stdio.h>
#include <string.h>

int main(void) {
    char output[5];
    int flag=0;
    int i;
	for(int number=0;number<100;number++){
	    flag=0;
	    i=number+1;
	    strcpy(output,"");
	    if(i%3==0)
	        strcpy(output,"Fizz");
	    if(i%5==0)
	        strcpy(output,"Buzz");
	    if(strcmp(output,"")==0)
	        flag=1;
	    if(flag==1)
	        printf("%d\n",i);
	    else
	        printf("%s\n",output);
	}
	return 0;
}


