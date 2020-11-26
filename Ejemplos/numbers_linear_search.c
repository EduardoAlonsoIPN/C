//Numbers Linear Search. Introduction to Computer science

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void){

    int numbers[6] = {4, 8, 15, 50, 42};
    bool v_is;
    
    for(int i = 0; i < 5; i++){
        if(numbers[i] == 50){
            v_is = true;
            break;
        }else{
            v_is = false;
        }
    }

    if(v_is){
        printf("True");
    }else{
        printf("False");
    }

    return 0;
}