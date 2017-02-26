#include<stdio.h>
#define max 100
void input(int &size, int integer[]){
	
	do{
	printf("inter number of elements in array:  ");
	scanf("%d",&size);
	if(size<=0) printf("invalid number,please re-enter the number : \n");
    }while(size<0);
    
	for(int i=0;i<size;i++){
		printf("]nenter the integer[%d] elements: ",i);
		scanf("%d",&integer[i]);
		}
	
}
void output(int size,int integer[]){
	for(int i=0;i<=size;i++){
		printf("\n integer[%d] is: %2d ",i,integer[i]);
	}
}

main(void){
	int size;
	int integer[size];
    input(size,integer);
    output(size,integer);
    printf("wow");
   
   	 
   	 
}
