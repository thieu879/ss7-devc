#include <stdio.h>
int main(){
	int a; 
	for(a=1;a<=100;a++){
		if(a%3==0 && a%5==0){
			printf("%d: fuzzbizz\n",a);
		}else if(a%3==0){
			printf("%d: fuzz\n",a);
		}else if(a%5==0){
			printf("%d: bizz\n",a);
		}else{
			printf("%d\n",a); 
		} 
	} 
} 
