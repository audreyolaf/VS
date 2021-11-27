#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int teststrtok() {

    return(0);
}

int main() {
    // rpn string
    char strr[] = "3 5 * 4 + 2 -";
    char s[] = " ";
    int stateSize = strlen(strr);
    char* token;
    token = strtok(strr, s);
    int r;
    
    // check if string is valid
    while (token != NULL) {
        // token -> int
        int token_num = atoi(token);
        // iterate through char array
        for (int i = 0; i < strlen(strr); i++)
            // switch case for operand and operator
            switch (*token) {
                // if int
                case '+':
                    printf(" %s\n", token);
                    token = strtok(NULL, s);
                    break;
                // if operator +
                case '-':
                    r = strr[i] + strr[i - 1];
                    i -= 2;
                    strr[i] = r;
                    break;
                case '*': /* handle here */; break;
                case '/': /* handle here */; break;
                default: {
                    if ((*token >= '0' && *token <= '9') || *token == '-') {
                        int num = atoi(token);
                        /* use num here */;
                        break;
                    }
                    printf("unkown char: \"%s\"", token);
                }
             }


    }
    return(0);
}
