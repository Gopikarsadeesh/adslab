#include<stdio.h>
int stack[100],i,choice=0,n,top=-1;
void push();
void pop();
void show();
void main()
{
clrscr();
printf("enter the number of elements in a stack: \n");
scanf("%d",&n);
printf("stack operation using array \n");
while(choice!=4)
{
printf("choose one from the given options: \n");
printf("1.push \n 2.pop \n 3.show \n 4.exit \n");
printf("enter your choice: \n");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:show();
break;
case 4:printf("exit");
break;
default:printf("please enter a valid choice \n");
}
}
}
void push()
{
int value;
if(top==n-1)
printf("overflow \n");
else
{
printf("enter the value:");
scanf("%d",&value);
top=top+1;
stack[top]=value;
}
}
void pop()
{
if(top==-1)
printf("underflow");
else
{
printf("poppped element: %d\n",stack[top]);
top=top-1;
}
}
void show()
{
if(top==-1)
{
printf("stack is empty \n");
}
else
{
printf("stack elements are: \n");
for(i=top;i>0;i--)
{
printf("%d \n",stack[i]);
}
printf("top element is:%d \n",stack[top]);
}
}

