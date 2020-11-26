//Strings Linear Search in C. Introduction to Computer science

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main(void){

    bool b;

    char array_of_strings[4][10] = {
        "EMMA",
        "RODRIGO",
        "BRIAN",
        "DAVID"
    };

    char name[] = {"MARCOS"};
    //printf("%s", nombre);

    for(int i = 0; i < 4; i++){
        printf("%s\n",array_of_strings + i);
        if(strcmp(name, array_of_strings[i]) == 0){
            b = true;
            break;
        }else{
            b = false;
        }
    }

    if(b){
        printf("Found");
    }else{
        printf("Not Found");
    }
    
    return 0;
}