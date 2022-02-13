#include <stdio.h>
#include <string.h>

int main()
{   FILE * fdata;
    char c[1000];
    char son[100][100],father[100][100],grandfather[100];
    if ((fdata = fopen("file.txt", "r")) == NULL) {
            printf("Error! File cannot be opened.");
        }
    for (int j = 1; j <=5; j++)
        {
            while(fscanf(fdata,"%s %s",son[j],father[j])!=EOF){
                break;
            }
           printf("\n%s %s",son[j],father[j]);
        }
    
    int number=5,grandchildren_count=0,father_position,i;
    printf("\nEnter the grandfather name:");
    scanf("%s",grandfather);
    for(i=0;i<number;i++)
    {
        if(strcmp(grandfather,father[i])==0)
        {printf("\nfather[iii%d]: = %s",i,father[i]);
            father_position=i;
            break;
        }
    }
    for(i=0;i<number;i++)
    {
        if(strcmp(son[father_position],father[i])==0){
        printf("\nfather[jjj%d]: = %s",i,son[father_position]);
            grandchildren_count++;
        }

    }
    printf("\n%s has %d grandchildren",grandfather,grandchildren_count);
    return 0;
} 

