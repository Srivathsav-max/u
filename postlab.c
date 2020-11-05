#include<stdio.h>
#include<stdlib.h>
int main(int arg,char *argv[])
{
int n_char=0;
char buffer[10];
int errno;
printf("n_char =%d\t errno = %d\n",n_char,errno);
n_char=write(1,"enter a word",14);
n_char=read(0,buffer,10);
printf("\nn_char =%d\t errno =%d\n",n_char,errno);
if (n_char==-1)
{
perror(argv[0]);
exit(1);
}
n_char=write(1,buffer,n_char);
return 0;
}
