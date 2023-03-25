#include<stdio.h>

int main(void)
{
	FILE *ptr;
	
	ptr = fopen("attendance.dat","r");
	
	char name[20];
	int empNo;
	int attendance,i=0,j=0,count=0;
	
	if(ptr == NULL)
	{
		printf("This file doesn't Exist!\n");
		return -1;
	}
	
	for (i=0 ; i<2 ; i++)
	{
		fscanf(ptr,"%d %s", &empNo, name);
		
		for (j=0 ; j<7 ; j++)
		{
			fscanf(ptr,"%d",&attendance);
			if (attendance == 1)
			{
				count++;
			}
		}
		
		printf("%s came %d days\n", name, count);
		count = 0;
 	}
 	fclose(ptr);
	return 0;
}
