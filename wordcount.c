
#include "types.h"
#include "stat.h"
#include "fcntl.h"
#include "user.h"

int main(int argc, char *argv[])
{
  int FD,i,CharCount=0,WordCount=0,LineCount=0,RdFlag;
  char Data[500];
  FD=open(argv[1],O_RDONLY);
  if(FD<0)
  {
    printf(1,"Error opening the file");
    exit();
  }
  RdFlag=read(FD,Data,sizeof(Data));
  if(RdFlag<0)
  {
    printf(1,"Error reading the file");
    exit();
  }
  for(i=0;i<RdFlag;i++)
  {
    CharCount++;
    if(Data[i]==' '||Data[i]=='\n')
    WordCount++;
    if(Data[i]=='\n')
    LineCount++;
  }
  close(FD);
  printf(1,"%d\t%d\t%d\n",CharCount,WordCount,LineCount);
  return 0;
}





