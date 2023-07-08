#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPalindrome(int x){
    if(x < 0){
        x = -x;
    }
 int copyOfInteger = x, result = 0, lastDigit;

    while(copyOfInteger != 0){
        lastDigit = copyOfInteger % 10;
        result = result * 10 + lastDigit;
        copyOfInteger /= 10;
    }
    
    if(result == x){
        return true;
    }
    return false;
}

int main (void){
    bool result = isPalindrome(1234567899);
    if(result){
        printf("True\n");
    }else{
        printf("False\n");
    }
    return EXIT_SUCCESS;
}

