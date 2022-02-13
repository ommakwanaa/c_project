#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char hashTable[10][5]
	= { "", "", "abc", "def", "ghi",
		"jkl", "mno", "pqrs", "tuv", "wxyz" };

void printWordsUtil(int number[], int curr_digit,
					char output[], int n)
{
	
	int i;
	FILE *fp; 
	if (curr_digit == n) {
		fp = fopen("sample.txt","w");
		printf("%s ", output);
		fprintf(fp, "%s\n", output);
		// fclose(fp);
		return;
	}

	for (i = 0; i < strlen(hashTable[number[curr_digit]]);
		i++) {
		output[curr_digit]
			= hashTable[number[curr_digit]][i];
		printWordsUtil(number, curr_digit + 1, output, n);
		if (number[curr_digit] == 0
			|| number[curr_digit] == 1)
			return;
	}
}


void printWords(int number[], int n)
{
	char result[n + 1];
	result[n] = '\0';
	printWordsUtil(number, 0, result, n);
}

// Driver program
int main(void){
	printf("enter the phone number: ");
	int k; 
	scanf("%d", &k); 
	int arr[k],j=7;
	while(k>=0){
		int r = 0;
		r = k%10;
		arr[j-1] = r; 
		k = k/10;
		j--;
	}

	int n = sizeof(arr) / sizeof(arr[0]);
	printWords(arr, n);
	// fclose(fp);	
	return 0;
}