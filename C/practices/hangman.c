// KS, ,7th, Final
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char let_guess[] = {};
int loss = 0;
int max = 8;

int main(){
    const char *random_word[] = {"onyx", "xylaphone", "glyph", "syzygy", "zuzwang", "house", "dermatoglyphics", "xebec", "bdellium", "grawlix"};
    int num_words = sizeof (random_word)/ sizeof (random_word[0]);
    srand(time(NULL));
    int random = rand() % num_words;

    const char *guess_word = random_word[random];


printf("Instructions: To play hangman, you will be given a word you need to guess(by letter).Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win.However, if you guess too many wrong times and the person is built, you lose.");

    

    return 0;
}