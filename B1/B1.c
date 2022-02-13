#include <stdio.h>
#include <string.h>
#include <math.h>

char str[101];
void removeCharacter(int i){
    while(str[i]!='\0'){
        str[i]=str[i+2];
        str[i+1]=str[i+3];
        i+=2;

    }
}

int main(){
    int i,len=0;
    printf("Enter String Length:");
    scanf("%d",&len);
    scanf("%s",str);
    for(i=0;i<len;){
        if((str[i] == str[i+1] ) && (i >= 0) && str[i]!='\0'){
            removeCharacter(i);
            i--;
        }
        else{
            i++;
        }
    }
    if(str[0]=='\0')
       printf("Empty String");
    else
       printf("%s\n",str);
    return 0;
}