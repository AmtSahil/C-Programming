#include <stdio.h>
struct student{
	char name[25];
	int rollno;
	int mark;
};

int main(){
	// Array: Collection of same element.
    struct student s[5];
    int i;
    
    for(i=0; i<5; i++){
    	printf("Enter name, roll and mark of student %d:\n",i+1);
    	scanf("%s %d %d", &s[i].name, &s[i].rollno, &s[i].mark);
    	
	}
	// printing
    	for(i=0; i<5; i++){
		printf("\nstudent %d \nName: %s, roll: %d, mark: %d ",i+1,s[i].name,s[i].rollno,s[i].mark);
	}
	
	
return 0;
}

