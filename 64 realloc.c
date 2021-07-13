// realloc() - you can change the size of previously allocated memory 
// Syntax: ptr = realloc(ptr, x);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *p;
	p = (char *) malloc(4*sizeof(char));
	strcpy(p, "Sahil Amatya");
	printf("%s is value and address is %u",p,p);
	
	if(p == NULL){
		printf("Memory Allocation Failed");
	}else{
		p = realloc(p, 300*sizeof(char));
		strcpy(p, "Sahil Amatya");
		printf("%s is value and address is %u",p,p);
		free(p);
	}
	
return 0;
}
