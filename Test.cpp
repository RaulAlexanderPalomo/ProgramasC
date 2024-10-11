#include <stdio.h>

main(){
	int a, n, b, c;
	scanf(" %d",&a);
	scanf(" %d",&b);
	scanf(" %d",&c);
		if(a<b){
		if(a<c){
			n=a;
		}else{
			n=c;
		}
	}else{
		if(b<c){
			n=b;
		}else{
			n=c;
		}
	}
	printf("%d",n);
	
	
}
