#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,row,col,s,count,choice;
	while(1)
	{
  		system("cls");
  		printf("\n\t------** PATTERN PRINTING **------ \n\n");
  		printf("The Following Can Be Performed:- \n\n");
  		printf(" Option 1. for a Triangle\n Option 2. for a Inverted Triangle\n Option 0. Exit\n\n");

		printf("Enter Your Choice From Above Options: ");
		scanf("%d",&choice);
  		fflush(stdin);

  		switch(choice)
  		{
     		case 1:
					printf("\nEnter The Number Of Rows: ");
					scanf("%d",&n);
					fflush(stdin);

					printf("\nThe Pattern Is: \n");
					for(row=1,count=1;row<=n;row++)
					{
						for(s=1;s<=(n+25)-row;s++)
						{
							printf(" ");
						}
						for(col=1;col<=row;col++)
						{
							printf("%d ",count++);
						}
	    				printf("\n");
					}
					getchar();
					break;

     		case 2:
					printf("\nEnter The Number Of Rows: ");
					scanf("%d",&n);
					fflush(stdin);

					printf("\nThe Pattern Is: \n");
					for(row=n,count=1;row>=1;row--)
					{
						for(s=1;s<=(n+25)-row;s++)
						{
							printf(" ");
						}
						for(col=1;col<=row;col++)
						{
							printf("%d ",count++);
						}
	    				printf("\n");
					}
					getchar();
					break;

			case 0:
					exit(0);

			default:
					printf("\n\t!!! YOUR CHOICE IS INVALID !!!");
					getchar();
					break;
  		}
	}
}
