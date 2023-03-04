#include <stdio.h>
int main(){
	//looking difference in address of int
	int a[3] = {1,2,3};
	int i;
	for(i=0;i<3;i++){
		printf("\nEneter tyhe num:..");
		scanf("%d",&a[i]);
	}
	int *v;
	int j;
	for(j=0;j<3;j++){
		v = &a[j];
		printf("\n%p",v);
	}
/*	printf("\n%p",&a[0]);
	printf("\n%p",&a[1]);
	printf("\n%p",&a[2]);*/
}
