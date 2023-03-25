#include <stdio.h>
#include <string.h>

// function main begins program execution
int main(void)
{
	// declare variables and arrays
	char employeeNo[10];
	int i;
	char pEmployeeNo[10];
	char pName[10];
	int pAttendance[7] = {0};
	
	printf("%s", "Input an employee number: ");  // prompt
	scanf("%s", employeeNo);  // read employee no
	
	FILE *cfPtr = NULL;
	
	cfPtr = fopen("attendance.dat", "r");
	
	if(cfPtr == NULL){
		printf("%s\n", "Cannot read file!");  // error message
	}  // end if
	
	fscanf(cfPtr, "%s %s ", pEmployeeNo, pName);
	for(i = 0; i < 7; ++i){
		fscanf(cfPtr, "%d ", &pAttendance[i]);
	}  // end for
	
	if(strcmp(pEmployeeNo, employeeNo) == 0){
		for(i = 0; i < 7; ++i){
			printf("%d ", pAttendance[i]);
		}  // end for
	}  // end if
	
	while(!feof(cfPtr)){
		
		fscanf(cfPtr, "%s %s ", pEmployeeNo, pName);
		for(i = 0; i < 7; ++i){
			fscanf(cfPtr, "%d ", &pAttendance[i]);
		}  // end for
		
		if(strcmp(pEmployeeNo, employeeNo) == 0){
			for(i = 0; i < 7; ++i){
				printf("%d ", pAttendance[i]);
			}  // end for
		}  // end if
		
	}  // end while
	
	fclose(cfPtr);
	
	return 0;
}  // enf unction main
