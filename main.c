#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <time.h>


int main() {
    srand(time(NULL));
    int8_t number_letters;
    printf("Enter the number of characters: ");
    scanf("%d", &number_letters);

    if(number_letters <= 0) {
        printf("The number cannot be less than or equal to zero\n");
        return 1;
    }

    char vowels[] = "qwrtpsdfghjlkzxcvbnm";
    char consonants[] = "aeyuio";

    for(int i = 0;  i < number_letters / 2; i++){
        printf("%c%c", vowels[rand() % 20], consonants[rand() % 6]);
    }

    if(number_letters % 2 != 0){
        printf("%c", vowels[rand() % 20]);
    }
    
    return 0;
}