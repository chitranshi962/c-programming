#include<stdio.h>
//conditional operators  
//short method                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       #include<stdio.h>  
int main () {
	int age;
	printf("enter age:");
	scanf("%d",&age);
	age>=18?printf("adult \n"):printf("not adult\n");
	
	if(age >18){
		printf("adult \n");
		printf("they can vote \n");
		printf("they can drive");
	}
	else if(age>13 && age<18){
		printf("adult \n");
		
	}
		
		else{
			printf(" not adult");
		}
		printf(" \n thankyou");
	 return 0;
	
}                                                                     
