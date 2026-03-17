// KS, ,7th, Final
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char let_guess[] = {};
int loss = 5;
int max = 8;
char guess[2];

char building(char head,char body,char arm1,char arm2,char leg1,char leg2){
    printf("----------\n|        |\n|        %c\n|        %c%c%c\n|        %c%c\n|\n----------", head, arm1, body, arm2, leg1, leg2);
}

int main(){
    const char *random_word[] = {"onyx", "xylaphone", "glyph", "syzygy", "zuzwang", "house", "dermatoglyphics", "xebec", "bdellium", "grawlix"};
    int num_words = sizeof (random_word)/ sizeof (random_word[0]);
    srand(time(NULL));
    int random = rand() % num_words;

    const char *guess_word = random_word[random];


    printf("Instructions: To play hangman, you will be given a word you need to guess(by letter).Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose.\n");



    
    while(loss < max){
    char display[20];

    //printf("Guess a letter: ");
    //scanf('%c', &guess);



        if (loss == 0){
            printf("----------\n");
            printf("|\n|\n|\n|\n|\n|\n----------");
        }else if (loss == 1){
            building('o',' ',' ',' ',' ',' ');
        }else if (loss == 2){
            building('o','|',' ',' ',' ',' ');
        }else if (loss == 3){
            building('o','|','/',' ',' ',' ');
        }else if (loss == 4){
            building('o','|','/','\\',' ',' ');
        }else if (loss == 5){
            building('o','|','/','\\','/', ' ');
        }break;
        
    }

    return 0;
}