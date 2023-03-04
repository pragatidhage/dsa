#include <stdio.h>
int main()
{    
     //looking for working of pointers
    //printf("Hello World");
    int x ;
    int *x1;
    x = 5;
    
    x1 = &x;
    printf("value of x= %d",x);
    printf("\naddress of x=%p",&x);
    printf("\nvalue stored in add pointed by pointer value=%d",*x1);
    printf("\nvalue stored in pointer i.e add of x=%p",x1);
    printf("\naddress of pointer x1=%p",&x1);
    return 0;
}
