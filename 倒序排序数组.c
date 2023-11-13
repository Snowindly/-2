#include <stdio.h>

void add(int ar1[],int ar2[],int ar3[],int size);

int main(void)
{  
int test1[]={2,4,5,8};
int size = sizeof(test1) / sizeof(test1[0]);
int test2[]={1,0,4,6};
int test3[size];
int i;
add(test1,test2,test3,size);
for(i=0;i<size;i++){
	printf("%d ",test3[i]);
}

return 0; 
}

void add(int ar1[],int ar2[],int ar3[],int size)
{
	int i;
	for(i=0;i<size;i++){
	ar3[i]=ar1[i]+ar2[i];
}
	
}
