//   *
//  ***
// *****
//*******
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,no;
	clrscr();
	printf("\nEnter  no of row:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
	  for(j=0;j<no-i;j++)
		 printf(" ");
	  for(j=0;j<2*i+1;j++)
		 printf("*");
	  printf("\n");
	}
	getch();
}