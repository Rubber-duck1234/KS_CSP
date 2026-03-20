// KS, ,7th, Final
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char let_guess[] = {"_" "_" "_" "_" "_" "_" "_" "_" "_" "_" "_" "_" "_" "_" "_"};
int loss = 0;
int max = 6;
int turn = 0;


char building(char head,char body,char arm1,char arm2,char leg1,char leg2){
    printf("----------\n|        |\n|        %c\n|       %c%c%c\n|       %c%c\n|\n----------", head, arm1, body, arm2, leg1, leg2); // function for the structure of the hanman platform. KS
}

int main(){
    const char *random_word[] = {"onyx", "xylaphone", "glyph", "syzygy", "zuzwang", "house", "dermatoglyphics", "xebec", "bdellium", "grawlix"};// list of random words to use. IM
    int num_words = sizeof (random_word)/ sizeof (random_word[0]);
    srand(time(NULL)); 
    int random = rand() % num_words;

    const char *guess_word = random_word[random];

    char guess_len = sizeof (guess_word)/ sizeof (guess_word[0]);// pulls random words from the list. KS

    printf("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess wrong too many times you lose.\n");// instructions. IM

    
    while(1 == 1){
        char word_display[guess_len];
        char guess;
        strcpy(word_display, guess_word);

        printf("Guess a letter: \n");
        scanf("%c", &guess);
        let_guess[turn] = guess;

        int correct = 0;
        for(int x = 0; x < guess_len; x++){// for loop to check if the guessed letter is in the word. KS
            if (guess_word[x] == guess){
                word_display[x] = guess;
                correct++;
            }
        }
        if(correct == 0){
            loss++;// updates the losses.IM
        }
        if (word_display == guess_word){
            printf("You won!\n");
            break;
        }

        printf("%s, these are the words you have guessed.\n", let_guess);
        turn++;
        if (loss == 0){
            printf("----------\n");
            printf("|\n|\n|\n|\n|\n|\n----------");
        }else if (loss == 1){
            building('o',' ',' ',' ',' ',' ');// IM
        }else if (loss == 2){
            building('o','|',' ',' ',' ',' ');
        }else if (loss == 3){
            building('o','|','/',' ',' ',' ');
        }else if (loss == 4){
            building('o','|','/','\\',' ',' ');
        }else if (loss == 5){
            building('o','|','/','\\','/', ' ');
        }else if (loss == 6){
            building('o','|','/','\\','/', '\\');
            printf("You lose.\n");
            break;// IM
        }
        
    }

    return 0;
}