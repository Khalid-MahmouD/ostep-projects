#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void error(char *msg){
    puts(msg);
    exit(1);
}
int
main(int argc, char*argv[]){
    
    // if we can open, in Unix does not exist it creat it automatically.
    FILE *fp;//File's Name and Mode. read main.c file :D 
    char buffer[500];
for(int f = 1; f < argc; ++f){
    fp = fopen(argv[1], "r");
    if (fp == NULL) error("cannot open the file");\
    while(fgets(buffer,1000, (FILE*) fp)) printf("%s", buffer);    
    fclose(fp);
}

}