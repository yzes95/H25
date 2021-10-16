#include<stdio.h>
void edit(int*x)
{
	(*x)++;
	(*(x+1))++;
	(*(x+2))++;
}
void editx(char*x)
{
	(*x)++;
}
void main(void)
{
	/*int * x;
	int arr[3];
	x = arr ;
	int z = 10;
	z++;
	printf("\nPlease enter a number : ");
	scanf("%d %d %d",x,x+1,x+2);
	printf("\nBefore Calling the value is: %d %d %d",*(x),*(x+1),*(x+2));
	edit(x);
	printf("\nAfter Calling the value is: %d %d %d",*(x),*(x+1),*(x+2));

	*(x+3)=8; 
	//here why cant i acccess this address
	//because of the stack pointer issue which try to acces a posituin that is not pushed in stack yet
	//but it will work with arr[4],arr[3] because it consider that the array reserved this position
	//while the pointer just jump to a certain position 
	*(x+4)=7;
    //if(z)
		printf("\n%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);*/
	
	int x,x1,x2,x3;
	char*ptr=&x;
	printf("\nPlease enter 3 numbers : ");
	scanf("%d %d %d",&x1,&x2,&x3);
	*ptr=(char)x1;
	*(ptr+1)=(char)x2;
	*(ptr+2)=(char)x3;
	editx(ptr);
	printf("\nX have in:\n1st byte :%d \n2nd byte:%d \n3rd byte:%d",*ptr,*(ptr+1),*(ptr+2));
	//for this code above why cant i rewrite in the integer bytes ? is it cause of the scanf? yes
	
	
}