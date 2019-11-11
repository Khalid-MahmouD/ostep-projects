#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void Eerror(char *msg){
    puts(msg);
    exit(1);
}
int
main(int args, char*argv[]){
    FILE* fp;
    char line[1000];
    
    if(args<3) Eerror("rebign");
    
    for(int f=2; f < args; f++)
    {
        fp = fopen(argv[2],"r");
        if (fp == NULL)Eerror("can not open the file");
        while(fgets(line, 1000,(FILE*)fp)){
            if(strstr(line, argv[1]) != NULL )
            printf("%s\n",line);    
            continue;
        }
        fclose(fp);
    }
    return 0;
}