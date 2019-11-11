#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void Eerror(char *msg){
    puts(msg);
    exit(1);
}
//black box
char* StrCompress(char myStr[])
{
  char *s, *in;
  for (s = myStr, in = myStr; *s; s++) {
    int count = 1;
    in[0] = s[0]; in++;
    while (s[0] == s[1]) {
      count++;
      s++;
    }   
    if (count > 1) {
      int len = sprintf(in, "%d", count);
      in += len;
    }   
  }
  in[0] = 0;
  return myStr;
}
int
main(int args, char const *argv[]){
    FILE* fp;
    char line[100];
    if (args < 2)Eerror("Number of arguments is not enough.");
    fp = fopen(argv[1],"r");
    while(fgets(line, 100, (FILE*)fp))
    printf("%s\n",StrCompress((char*)line));
}