#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    char* str = (char *)argv[1];
    char character='\0';
    int repetations=0;

    if(argc < 2){
        puts("Number of arguments is not enough.");
        return 2;
    }
    while(*str){
        if(!(str[0] > '0' && str[0] < '9')){
            character = str[0];
        }else{
            repetations = atoi(str);
        }
        for(int i = 0; i < repetations && str[0]!=character; ++i){
            printf("%c",character);
        }
        str++;
    }

    return 0;
}
