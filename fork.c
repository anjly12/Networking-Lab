#include<stdio.h>
void main()
{
int pid;
pid = fork();if(pid > 0)
{
printf (“ Iam parent\n”);
}
else
{
printf(“Iam child\n”);
}
}
