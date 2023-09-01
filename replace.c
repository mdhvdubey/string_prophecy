#include<stdio.h>
#include<string.h>
char wa[40] = "";

void replaceword(char *replace){
    char temp[10] = "";

    for (int i=0; i<20;i++){
        sscanf(wa + i,"%s",temp);
        printf("%s ",temp);
        if(!strcmp(temp,"madhav")){
            printf("<--madhav found");
            strcpy(wa+i,replace);
        }
        i += strlen(temp);
    }
}

int main(){
    gets(wa);
    replaceword("sourabh joushi");
    printf("\nnew string: %s",wa);

}