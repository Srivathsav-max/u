#include "types.h"
#include "stat.h"
#include "user.h"
int main(void)
{
 char buf[512];
 int n;
 for(;;)
 {
  n=read(0,buf,sizeof(buf));
  if(n==0)
   break;
  if(n<0){
   printf(2,"read error\n");
   exit();
  }
  if(write(1,buf,n)!=n){
   printf(2,"write error\n");
   exit();
  }
 }
 exit();
}
