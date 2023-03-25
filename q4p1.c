#include <stdio.h>

int main(void){
	
	int empNo;
	char name[30];
	int attendance;
	int i,j;
	
	FILE *fp;
	
	fp = fopen("attendance.dat", "w");
	
	if(fp == NULL){
		printf("This file doesn't Exist!\n");
		return -1;
	}
	
	for(i = 0; i < 2; i++){
		
		printf("Enter Employee name: ");
		scanf("%s", &name);
		
		printf("Enter Emp No: ");
		scanf("%d", &empNo);
		
		fprintf(fp, "%d %s", empNo, name);
		
		for(j = 0; j < 7; j++){
			
			printf("Enter the attendance day %d: ", j+1);
			scanf("%d", &attendance);
			fprintf(fp, " %d  ", attendance);
		}
		fprintf(fp, "\n");
	}
	
	fclose(fp);
	
	return 0;
}
