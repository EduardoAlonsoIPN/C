//sandbox Introduction to Computer science

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main(void){

    bool b;

    int i;

    char array_of_strings[4][10] = {
        "EMMA",
        "RODRIGO",
        "BRIAN",
        "DAVID"
    };

    char array_of_numbers[4][20] = {
        "55-3143-0991",
        "55-3143-0992",
        "55-3143-0993",
        "55-3143-0994"
    };

    char name[] = {"DAVID"};
    //printf("%s", nombre);

    for(i = 0; i < 4; i++){
        //printf("%s\n",array_of_strings + i);
        if(strcmp(name, array_of_strings[i]) == 0){
            b = true;
            break;
        }else{
            b = false;
        }
    }

    if(b){
        printf("Found\n");
        printf("Name: %s \n", array_of_strings[i]);
        printf("Number: %s", array_of_numbers[i]);
    }else{
        printf("Not Found");
    }
    
    return 0;
}