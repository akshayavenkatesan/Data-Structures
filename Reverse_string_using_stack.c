 #include<stdio.h>
 #include<string.h>
 int stack[100];
 int top = -1 ; 
 char pop()
 {
 	char item = stack[top];
	top = top - 1;
	return item;
	 
 }
  void push(char item)
 {

	 if(top >= 100)
	 {
		 printf("stack is already fulll");
	 }
	 else
	 {
		 top = top + 1 ;
		 stack[top]= item;
	 }
 }
 void reverse(char str[])
 {
 	int i;
 	
 	for(i=0;i<=strlen(str);i++)
 	{
 		push(str[i]);
	 }
	 for(i=0;i<=strlen(str);i++)
 	{
 		printf("%c",pop());
 		
	 }
	 
 	
 }
int main()
 {

	char str[100];
	printf( " \nEnter string: ");
	gets(str);
	reverse(str);
	return 0;
 }
