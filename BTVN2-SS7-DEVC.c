#include <stdio.h>
int main(){
	int a;
	printf("cac so armstrong la:\n"); 
	for(a=100;a<=999;a++){ 
	int b = a%10, c=(a/10)%10,d=(a/100);
	if(a==(b*b*b)+(c*c*c)+(d*d*d)){
		printf("%d\n",a);
	} 
	}
} 
