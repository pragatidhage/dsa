#include <stdio.h>
int main(){
	int x =5;
	int *ptrx=&x,*ptrxx;
	printf("value stored in x =%d",x);
	printf("\naddress of x=%d",&x);
	//assigning pointer of the same type
	//int to int
	ptrxx = ptrx;
	printf("\nvalue pointed by pointr=%d",*ptrxx) ;
	printf("\nvalue stored in pointer=%p",ptrxx);
	//char to int
	char *ptrc;
	(int*)ptrc;
	ptrc= ptrx;
	printf("\nvalue pointed by pointr=%d",*ptrc) ;
	printf("\nvalue stored in pointer=%p",ptrc);
	//float to int
	float *ptrf;
	(int*)ptrf ;
	ptrf= ptrx ;
	printf("\nvalue pointed by pointr=%f",*ptrf) ;
	printf("\nvalue stored in pointer=%p",ptrf);
	//int to char
	char c = 'a';
	ptrc = &c;
    (char*)ptrx ;
    ptrx = ptrc ;
    printf("\nvalue pointed by pointr=%c",*ptrx);
	printf("\nvalue stored in pointer=%p",ptrx);
	//int to float
	float y = 0.1;
	ptrf = &y;
    (float*)ptrx;
    ptrx = ptrf ;
    printf("\nvalue pointed by pointr=%f",*ptrx);
	printf("\nvalue stored in pointer=%p",ptrx);
	return 0;
}
