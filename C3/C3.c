// // set C -> Q-3
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<ctype.h>


int main(){

    char *article[] = {"the", "a", "one", "some", "any"};
    char *verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
    char *preposition[] = {"to", "from", "over", "under", "on"};
    char *noun[] = {"boy", "girl", "dog", "town", "car"};

    // printf("%d\n", randomnumber);
    int n = sizeof(article)/sizeof(article[0]);
    
    srand(time(NULL));
    for(int i=0; i<20; i++){
        int randomnumber_1 = rand() % 5;
        int randomnumber_2 = rand() % 5;
        
        
        
        printf("%s %s %s %s %s %s.", article[randomnumber_1], noun[randomnumber_1], verb[randomnumber_1], preposition[randomnumber_1], article[randomnumber_2], noun[randomnumber_2]);
        printf("\n");
    }
    
    return 0;
}