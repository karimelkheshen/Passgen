// This is a program I created on October 1st 2019.
// After watching a video on how easy it is to crack passwords, I realised that I have to change most of my passwords.
// I thought of all the passwords I have to smarty and securely create in order to secure myself.
// Then I thought, why don't I automate it?

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ALPH 26

void pass_1_gen(void){
    char CAP_array[MAX_ALPH] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char low_array[MAX_ALPH] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int num_array[10] = { 0,1,2,3,4,5,6,7,8,9};
    char sym_array[8] = {'!','$','%','*','&','?','_','-'};
    int i;
    time_t t;
    srand((unsigned)time(&t));
    printf("\n\n\t\t\t\t\t\t\t\t ");
    printf("%c", CAP_array[rand()%10]);
    for (i = 0; i < 5; i++) {
        printf("%c", low_array[rand()%10]);
    }
    printf("%c", sym_array[rand()%10]);
    printf("%d", num_array[rand()%10]);
    printf("%d", num_array[rand()%10]);
    printf("%c", CAP_array[rand()%10]);
    printf("\n\n\n\n\n");
}

void pass_2_gen(void){
    char CAP_array[MAX_ALPH] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char low_array[MAX_ALPH] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int num_array[10] = { 0,1,2,3,4,5,6,7,8,9};
    char sym_array[8] = {'!','$','%','*','&','?','_','-'};
    int i;
    time_t t;
    srand((unsigned)time(&t));
    printf("\n\n\t\t\t\t\t\t\t\t ");
    printf("%c", CAP_array[rand()%10]);
    printf("%d", num_array[rand()%10]);
    printf("%c", low_array[rand()%10]);
    printf("%c", CAP_array[rand()%10]);
    printf("%d", num_array[rand()%10]);
    printf("-");
    printf("%c", CAP_array[rand()%10]);
    for (i = 0; i < 5; i++) {
        printf("%c", low_array[rand()%10]);
    }
    printf("%c", sym_array[rand()%10]);
    printf("%d", num_array[rand()%10]);
    printf("%d", num_array[rand()%10]);
    printf("%c", CAP_array[rand()%10]);
    printf("-");
    printf("%c", sym_array[rand()%10]);
    printf("%c", low_array[rand()%10]);
    printf("%c", CAP_array[rand()%10]);
    printf("%c", sym_array[rand()%10]);
    printf("%c", low_array[rand()%10]);
    printf("\n\n\n\n\n");
}

void pass_3_gen(void){
    int num_array[10] = { 0,1,2,3,4,5,6,7,8,9};
    char sym_array[8] = {'!','$','%','*','&','?','_','-'};
    char CAP_array[MAX_ALPH] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char low_array[MAX_ALPH] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    time_t t;
    srand((unsigned)time(&t));
    printf("\n\n\t\t\t\t\t\t\t\t ");
    for (int i = 0; i < 4; i++) {
        printf("%c", low_array[rand()%10]);
    }
    printf("-");
    printf("%c", sym_array[rand()%10]);
    printf("%d", num_array[rand()%10]);
    printf("-");
    for (int j = 0; j < 4; j++) {
        printf("%c", CAP_array[rand()%10]);
    }
    printf("\n\n\n\n\n");
    
}

int main(void){
    
    printf("\n\n\t\t\t\t ______   ______   ______         ______   ______   __  ___ ");
      printf("\n\t\t\t\t |     |  |    |   |              |        |        |\\   |");
      printf("\n\t\t\t\t |_____|  |____|   |_____         |   __   |___     | \\  |");
      printf("\n\t\t\t\t |        |    |        |         |    |   |        |  \\ |");
      printf("\n\t\t\t\t |        |    |   _____|         |____|   |_____   |   \\|");

    printf("\n\n\n\t\t\t\t Version 1.1\n\t\t\t\t by Karim El Kheshen");
    
    printf("\n\n\n\n\t\t\t\t Please enter one of the following password options : \n");
    printf("\n\t\t\t\t '1': SIMPLE : Relatively easy to remember. Frequent login applications.");
    printf("\n\t\t\t\t '2': COMPLEX : Highly abstract. Long formatted. Infrequent login applications.");
    printf("\n\t\t\t\t '3': MODERATE : Half way between simple and complex.");
    printf("\n\n\t\t\t\t >>> ");
    char answer;
    scanf(" %c", &answer);
    
    if (answer == '1') {
        pass_1_gen();
    }
    else if (answer == '2') {
        pass_2_gen();
    }
    else if (answer == '3') {
        pass_3_gen();
    }
}
