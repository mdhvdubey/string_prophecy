#include<stdio.h>
#include<string.h>
char b[30] = "this is";
char a[30] = "your lover";
int concat_S(char *a,char *b){
    int i = strlen(a);
    int j = 0;
    while(b[j]){
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
    printf("concat:%s",a);
    return i
}
int main(){
    concat_S(a,b);
    printf("\nthe original array:%s\n",a);
}