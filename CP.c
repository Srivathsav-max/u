#include "types.h"
#include "fcntl.h"
#include "stat.h"
#include "user.h"

int main(int argc,char *argv[])
{
  int SourceFD,TargetFD,RdFlag,WrFlag;
  char Data[100];
  SourceFD=open(argv[1],O_RDONLY);
  if(SourceFD<0)
  {
    printf(1,"Error opening the Source File");
    exit();
  }
  RdFlag= read(SourceFD,Data,sizeof(Data));
  if(RdFlag<0)
  {
    printf(1,"Error reading the Source File");
    //close(SourceFD);
    exit();
  }
  TargetFD=open(argv[2],O_CREATE | O_WRONLY);
  if(TargetFD<0)
  {
    printf(1,"Error opening the Target File");
    //close(SourceFD);
    exit();
  }
  WrFlag=write(TargetFD,Data,sizeof(Data));
  if(WrFlag<0)
  {
    printf(1,"Error writing the Target File");
    //close(SourceFD);
    //close(TargetFD);
    exit();
  }
  close(SourceFD);
  close(TargetFD);
  return 0;
}

