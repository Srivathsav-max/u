#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
 int SourceFD,TargetFD,RdFlag,WrFlag;
 char Data[100];
 SourceFD=open("f2.txt",O_RDONLY);
 RdFlag=read(SourceFD,Data,sizeof(Data));
 TargetFD=open("f3.txt",O_CREAT|O_WRONLY);
 WrFlag=write(TargetFD,Data,sizeof(Data));
 close(SourceFD);
 close(TargetFD);
}
