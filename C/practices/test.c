#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char let_guess[100];
int loss = 0;
int turn = 0;
void building(char head, char body, char arm1, char arm2, char leg1, char leg2) {
    printf("----------\n|        |\n|        %c\n|       %c%c%c\n|       %c%c\n|\n----------\n",
           head, arm1, body, arm2, leg1, leg2);
}
int main() {
    const char *random_word[] = {"onyx", "xylophone", "glyph", "syzygy", "zugzwang", "house", "dermatoglyphics", "xebec", "bdellium", "grawlix"};
    int num_words = sizeof(random_word) / sizeof(random_word[0]);
    srand(time(NULL));
    const char *guess_word = random_word[rand() % num_words];
    int guess_len = strlen(guess_word);
    printf("Instructions: Guess letters to find the hidden word. Each wrong guess adds a body part. 6 wrong guesses = loss.\n");
    char word_display[guess_len + 1];
    for (int i = 0; i < guess_len; i++) word_display[i] = '_';
    word_display[guess_len] = '\0';
    while (1) {
        printf("\nWord: %s\n", word_display);
        printf("Guessed letters: %s\n", let_guess);
        char guess;
        printf("Guess a letter: ");
        scanf(" %c", &guess);
        int correct = 0;
        for (int x = 0; x < guess_len; x++) {
            if (guess_word[x] == guess) {
                word_display[x] = guess;
                correct = 1;
            }
        }
        let_guess[turn++] = guess;
        let_guess[turn] = '\0';
        if (!correct) {
            loss++;
        }
        if (strcmp(word_display, guess_word) == 0) {
            printf("\nYou won! The word was '%s'\n", guess_word);
            break;
        }
        switch (loss) {
            case 0: printf("----------\n|\n|\n|\n|\n|\n----------\n"); break;
            case 1: building('o',' ',' ',' ',' ',' '); break;
            case 2: building('o','|',' ',' ',' ',' '); break;
            case 3: building('o','|','/',' ',' ',' '); break;
            case 4: building('o','|','/','\\',' ',' '); break;
            case 5: building('o','|','/','\\','/',' '); break;
            case 6: building('o','|','/','\\','/','\\'); printf("\nYou lose! The word was '%s'\n", guess_word); return 0;
        }
    }
    return 0;
}