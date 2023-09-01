#include<stdio.h>
#include<string.h>
char inputS[50];
char outputS[50];
int lengthof(char str[]){
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}
int main(){
    printf("enter a string:");
    fgets(inputS,50,stdin);
    int sz = lengthof(inputS);
    printf("size:%d",sz);
    for(int i = sz; i>=0; i--){
        outputS[sz-i] = inputS[i-1];
    }
    outputS[sz] = '\0';
    printf("output:%s",outputS);

}