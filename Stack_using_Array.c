#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
int a[10],i,j,n,data,top=-1;

void create()
{

	if(top==-1)
	{
		printf("Enter the no. of elements\n");
		scanf("%d",&n);
		printf("Enter the data:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			
		}
		top=n-1;
		
	}
	else
	printf("stack is already created");
	
	
	
	
}

void display()
{
	if(top==-1)
	{
		printf("The stack is empty");
	}
	else
	{
		printf("The elements in the array are:\n");
		for(i=n-1;i>=0;i--)
		{
			printf("%d\t",a[i]);
			
		}
	}
		
}

void push()
{
	if(n>=10)
	{
		printf("the stack is already full!!!");
	}
	else
	{
		printf("Enter a data to be inserted:\n");
		scanf("%d",&a[top+1]);
			
		top=top+1;
		n++;
		
	}

}

void pop()
{
	if(top==-1)
	{
		printf("The stack is empty");
	}
	else
	{
		printf("The data popped is: %d",a[top]);
	
		top=top-1;
		n--;
	}
}

void peek()
{
	if(top==-1)
	{
		printf("The stack is empty");
	}
	else
	printf("The data at the peek is:%d",a[top]);	
}

void isempty()
{
	if(top==-1){
		printf("The stack is empty\n");
	}	
	else{
		printf("The stack is not empty\n");
	}
	
}

void isfull()
{
	if(n==10)
	printf("The stack is full\n");
	else
	printf("Not full");
}

void dstack()
{
	if(top==-1)
	printf("stack is already empty..!!");
	else
	{
		n=0;
		top=-1;
		printf("The stack is deleted\n");
	}
	
}

void main()
{
	int ch;
	while(1)
	{
		printf("\n1.Push\n2.display\n3.Pop\n4.isempty\n5.display top\n6.delete stack\n7.create\n8.isfull\n9.exit");
		printf ("\nEnter choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
				push();
				break;
			case 2:
				display();
				break;
			case 3:
				pop();
				break;
			case 4:
				isempty();
				break;
			case 5:
				peek();
				break;
			case 6:
				dstack();
				break;
			case 7:
				create();
				break;
			case 8:
				isfull();
				break;
			case 9:
				exit(0);
				
		}
	}
	
}
