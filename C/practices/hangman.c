// KS, ,7th, Final
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char let_guess[26];// letter holder. IM
int loss = 0;
int turn = 0;
 



void building(char head,char body,char arm1,char arm2,char leg1,char leg2){
    printf("----------\n|        |\n|        %c\n|       %c%c%c\n|       %c%c\n|\n----------", head, arm1, body, arm2, leg1, leg2); // function for the structure of the hanman platform. KS
}

void hint(const char* guess_word){// function for hint. KS and IM
    if (guess_word == "onyx"){
        printf("its a black-ish color.\n");
    }else if (guess_word == "xylaphone"){
        printf("it is a musical instremnt.\n");
    }else if (guess_word == "glyph"){
        printf("A word for a symbole\n");
    }else if (guess_word == "syzygy"){
        printf("planets / celestial objects lined up.\n");
    }else if (guess_word == "zuzwang"){
        printf("A situation in chess\n");
    }else if (guess_word == "house"){
        printf("A place to live\n");
    }else if (guess_word = "dermatoglyphics"){
        printf("study of fingerprints\n");
    }else if (guess_word == "xebec"){
        printf("A mediteranian sailing ship.\n");
    }else if (guess_word == "bdellium"){
        printf("goo gum\n");
    }else if (guess_word == "grawlix"){
        printf("syombols used to replace profanity.\n");
    }
}

int main(){
    const char *random_word[] = {"onyx", "xylaphone", "glyph", "syzygy", "zuzwang", "house", "dermatoglyphics", "xebec", "bdellium", "grawlix"};// list of random words to use. IM
    int num_words = sizeof (random_word)/ sizeof (random_word[0]);// pulls random words from the list. KS
    srand(time(NULL)); 
    int random = rand() % num_words;

    const char *guess_word = random_word[rand() % num_words];// next line also random word puller. KS

    int guess_len = strlen (guess_word);


    printf("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess wrong too many times you lose.\n");// instructions. IM
    
    char word_display[guess_len + 1];
    for(int i = 0; i < guess_len; i++) {// more display printing. KS
        word_display[i] = '_';
    }
    
    

    while(0 == 0){

    
        printf("\n%s\n", word_display);// prints displays. IM
        printf("%s\n", let_guess);
        char guess;
        printf("Guess a letter: \n");//  takes in input, IM
        scanf(" %c", &guess);

        int correct = 0;
        for(int x = 0; x < guess_len; x++){// for loop to check if the guessed letter is in the word. KS
            if (guess_word[x] == guess){
                word_display[x] = guess;
                correct = 1;
            }
        }

        let_guess[turn++] = guess;//   adds guess, KS
        let_guess[turn] = '\0';// to let it know when it ends
        if(!correct){
            loss++;// updates the losses.IM
        }
        

        printf("%s, these are the words you have guessed.\n", let_guess);
        
        if (strcmp(word_display, guess_word)==0){// compars to see if word is built. KS
            printf("You won!\n");
            break;
        }
        



        if (loss == 0){
            printf("----------\n");
            printf("|\n|\n|\n|\n|\n|\n----------");
        }else if (loss == 1){
            building('o',' ',' ',' ',' ',' ');//all function calls for structure. IM
        }else if (loss == 2){
            building('o','|',' ',' ',' ',' ');
        }else if (loss == 3){
            building('o','|','/',' ',' ',' ');
            printf("here is a hint: ");
            hint(guess_word);
        }else if (loss == 4){
            building('o','|','/','\\',' ',' ');
        }else if (loss == 5){
            building('o','|','/','\\','/', ' ');
            printf("here is the hint again: ");
            hint(guess_word);
        }else if (loss == 6){
            building('o','|','/','\\','/', '\\');
            printf("You lose.\n");
            break;// IM
        }
       
    }

    return 0;
}