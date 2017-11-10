#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void encryptVijener (char input[], char encryptLetter[]);   //function code encrypt Letter
void decryptVijener (char input[], char encryptLetter[]);   //fuction decode encrypt Letter

int main()
{
const int NUMBER_LETTTER = 100;
char letterInput[NUMBER_LETTTER];
char encryptInput[NUMBER_LETTTER];

    for (;;){

        printf("Enter some string: ");
        gets(letterInput);
        printf("Enter encrypt words: ");
        gets(encryptInput);
        encryptVijener (letterInput, encryptInput);
        decryptVijener (letterInput, encryptInput);
    }
}


void encryptVijener (char input[], char encryptLetter[]){
int i;
int j;
int countNumberLetter;  //Counter for letter
int countCodeEncrypt;   //Counter for the word encryption
int lenCodeEncrypt;     //Variable length of the keyword, which we encrypt
int lenLetterInput;     //Variable length words

            lenCodeEncrypt = strlen(encryptLetter);
            lenLetterInput = strlen(input);
            printf("The code words is a - ");
            for (i = 0, j = 0; i < lenLetterInput ; i++, j++){
                /*  if lens code crypt words under lens input word
                    the counter must have 0.
                */
                if (lenCodeEncrypt <= j) {
                    j = 0;
                }
                /*  search low letter and calculate their values
                    calculate values encode letter and input
                    in array new Symbol encrypt
                */
                if (islower(input[i])){
                    countNumberLetter = input[i] - 'a';
                    countCodeEncrypt = encryptLetter[j] - ('a');
                    input[i] = (countCodeEncrypt +  countNumberLetter ) %26 +'a';
                }
                /*
                    search with Upper Case Latter, calculate
                    and input in aaray
                */
                if (isupper(input[i])){
                    countNumberLetter = input[i] - 'A';
                    countCodeEncrypt = encryptLetter[j] - ('A');
                    input[i] = (countCodeEncrypt +  countNumberLetter ) %26 +'A';
                }

            printf("%c", input[i]);
            }
            printf("\n");
}


void decryptVijener (char input[], char encryptLetter[]){
int i;
int j;
int countNumberLetter;  //Counter for letter
int countCodeEncrypt;   //Counter for the word encryption
int lenCodeEncrypt;     //Variable length of the keyword, which we encrypt
int lenLetterInput;     //Variable length words

            lenCodeEncrypt = strlen(encryptLetter);
            lenLetterInput = strlen(input);
            printf("The decode words is a - ");
            for (i = 0, j = 0; i < lenLetterInput; i++, j++){
                /*  if lens code crypt words under lens input word
                    the counter must have 0.
                */
                if (lenCodeEncrypt <= j) {
                    j = 0;
                }
                 /* search low letter and calculate their values
                    calculate values decode letter and input
                    in array new Symbol encrypt
                */
                if (islower(input[i])){
                    numberLetter = input[i] - 'a';
                    countCodeEncrypt = encryptLetter[j] - ('a');
                    input[i] = (countCodeEncrypt -  numberLetter ) %26 +'a';
                }
                /*  search with Upper Case Latter, calculate decode Letter
                    and input in array
                */
                if (isupper(input[i])){
                    numberLetter = input[i] - 'A';
                    countCodeEncrypt = encryptLetter[j] - ('A');
                    input[i] = (countCodeEncrypt -  numberLetter ) %26 +'A';
                }

            printf("%c", input[i]);
            }
            printf("\n");
}
