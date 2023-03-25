#include <stdio.h>

int main(void){
	
	char bulb[4][4];
	int i, j;
	
	for(i = 0; i < 4 ;i++){
		
		for(j = 0; j < 4; j++){
			
			printf("Input bulb for [%d, %d]: ", i,j);
			scanf("%s", &bulb[i][j]);
		}
	}
	
	printf("Red LED bulb positions\n");
	
	for(i = 0; i < 4; i++){
		
		for(j = 0; j < 4; j++){
			
			if(bulb[i][j] == 'R' || bulb[i][j] == 'r'){
				
				printf("[%d,%d] ", i, j);
			}
		}
	}
	
	
	return 0;
}
