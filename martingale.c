#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float budget,*c_val,sum;
	int c_count,i;
	while(1){
	printf("Enter Coefficient Count:\n");
	scanf("%d",&c_count);
	printf("Enter Your Budget:\n");
	scanf("%f",&budget);
	sum = (float)pow((double)2,(double)c_count);
	sum = sum-1;//equals to sum = (1-2^n)/(1-2)
	c_val = (float *)malloc(c_count*sizeof(float));
	c_val[0] = 1/sum;
	for(i=1; i < c_count; i++){
		c_val[i] = c_val[i-1]*2;
	}
	for(i = 0; i < c_count; i++){
		printf("%d:%f\n",i,c_val[i]*budget);
	}
	free(c_val);}
	return 0;
}
