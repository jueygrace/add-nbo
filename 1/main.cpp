#include <stdio.h>
#include <netinet/in.h>
int main(int argc,char *argv[]){
  FILE *fp1,*fp2;
  uint32_t buf1[4];
  uint32_t buf2[4];
  fp1=fopen(argv[1],"rb");
  fp2=fopen(argv[2],"rb");
  fread(buf1,4,1,fp1);
  fread(buf2,4,1,fp2);
  uint32_t a=ntohl(*buf1);
  uint32_t b=ntohl(*buf2);
  uint32_t c=a+b;
  printf("%d(0x%x)+%d(0x%x)=%d(0x%x)\n",a,a,b,b,c,c);}