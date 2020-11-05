#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
 int SrcFD,TgtFD,Flag,RdFlag,WrFlag;
 char Data[100];
 //open the file f2.txt
 SrcFD=open("f2.txt",O_RDONLY);
 //copies the file Desceiptor
 Flag=dup2(SrcFD,TgtFD);
 //Reading the data from f2.txt
 RdFlag=read(TgtFD,Data,sizeof(Data));
 //writing the data on to console
 WrFlag=write(1,Data,sizeof(Data));
 close(SrcFD);
}
