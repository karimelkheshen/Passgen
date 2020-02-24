#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// DIMENSIONS OF THE CHARACTER ARRAYS
#define MAX_ALPH 26
#define MAX_NUM 10
#define MAX_SYM 8


#define MAX_PASS_GEN 250
#define NUM_OF_OPTIONS 6

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

#define MAX_SIMP 8
#define MAX_AVG 14
#define MAX_COM 19

void error(void);
void print_menu(void);
void print_CAP(void);
void print_low(void);
void print_num(void);
void print_sym(void);
void get_args(int *m, int *n, int *p);

// Arrays holding the characters to be manipulated throughout the different options

char CAP_array[MAX_ALPH] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char low_array[MAX_ALPH] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int num_array[MAX_NUM] = { 0,1,2,3,4,5,6,7,8,9};
char sym_array[MAX_SYM] = {'!','$','%','*','&','?','_','-'};

// Gets the necessary arguments for the program
void get_args(int *n, int *m, int *p){
    int a,b,c;
    printf("\n\n");
    printf("\n\t\t\t\t\t\t Enter option number : ");
    scanf("%d", &a);
    printf("\t\t\t\t\t\t Enter iteration number : ");
    scanf("%d", &b);
    printf("\t\t\t\t\t\t Store in file? [1/0] (1:yes / 0:no) : ");
    scanf("%d", &c);
    *n = a;
    *m = b;
    *p = c;
}

// Universal Error Message
void error(void){
    printf(ANSI_COLOR_RED);
    printf("\n\n\t\t\t\t\t\t There was something wrong with your input, please read the instructions again carefully.");
    printf(ANSI_COLOR_RESET);
    
}
// Prints the logo
void print_logo(void){
system("clear");
printf("\n\n");
// Ascii Art
printf(ANSI_COLOR_MAGENTA);
printf("\n\t\t\t\t\t\t 888~-_        e      ,d88~~\\ ,d88~~\\       e88~~\\  888~~  888b    | ");
printf("\n\t\t\t\t\t\t 888   \\      d8b     8888    8888         d888     888___ |Y88b   | ");
printf("\n\t\t\t\t\t\t 888    |    /Y88b    `Y88b   `Y88b   ____ 8888 __  888    | Y88b  | ");
printf("\n\t\t\t\t\t\t 888   /    /  Y88b    `Y88b,  `Y88b,      8888   | 888    |  Y88b | ");
printf("\n\t\t\t\t\t\t 888_-~    /____Y88b     8888    8888      Y888   | 888    |   Y88b| ");
printf("\n\t\t\t\t\t\t 888      /      Y88b \\__88P' \\__88P'       \"88__/  888___ |    Y888 ");
printf(ANSI_COLOR_RESET);
}

// Prints the full menu with all the options
void print_menu(void){
    system("clear");
    printf("\n\n");
    // Ascii Art
    printf(ANSI_COLOR_MAGENTA);
    printf("\n\t\t\t\t\t\t 888~-_        e      ,d88~~\\ ,d88~~\\       e88~~\\  888~~  888b    | ");
    printf("\n\t\t\t\t\t\t 888   \\      d8b     8888    8888         d888     888___ |Y88b   | ");
    printf("\n\t\t\t\t\t\t 888    |    /Y88b    `Y88b   `Y88b   ____ 8888 __  888    | Y88b  | ");
    printf("\n\t\t\t\t\t\t 888   /    /  Y88b    `Y88b,  `Y88b,      8888   | 888    |  Y88b | ");
    printf("\n\t\t\t\t\t\t 888_-~    /____Y88b     8888    8888      Y888   | 888    |   Y88b| ");
    printf("\n\t\t\t\t\t\t 888      /      Y88b \\__88P' \\__88P'       \"88__/  888___ |    Y888 ");
    printf(ANSI_COLOR_RESET);
    printf(ANSI_COLOR_CYAN);
    printf("\n\n\n\t\t\t\t\t\t Version 3.0");
    printf(ANSI_COLOR_RESET);
    printf("\n\t\t\t\t\t\t by Karim El Kheshen");
    printf("\n\n\n\n\t\t\t\t\t\t Please enter one of the following password options : \n");
    printf(ANSI_COLOR_YELLOW);
    printf("\n\t\t\t\t\t\t [1] : SIMPLE SIMPLE ");
    printf(ANSI_COLOR_RESET);
    printf("8 Elements | Mix of lower and upper case characters.");
    printf(ANSI_COLOR_YELLOW);
    printf("\n\t\t\t\t\t\t [2] : SIMPLE ");
    printf(ANSI_COLOR_RESET);
    printf("8 Elements | Mix of lower case characters and numbers.");
    printf(ANSI_COLOR_YELLOW);
    printf("\n\t\t\t\t\t\t [3] : AVERAGE(1) [RECOMMENDED] ");
    printf(ANSI_COLOR_RESET);
    printf("14 Elements | Mix of lower case characters and numbers.");
    printf(ANSI_COLOR_YELLOW);
    printf("\n\t\t\t\t\t\t [4] : AVERAGE(2) ");
    printf(ANSI_COLOR_RESET);
    printf("14 Elements | Mix of lower and upper case characters.");
    printf(ANSI_COLOR_YELLOW);
    printf("\n\t\t\t\t\t\t [5] : AVERAGE(3) ");
    printf(ANSI_COLOR_RESET);
    printf("14 Elements | Mix of lower and upper case characters and numbers.");
    printf(ANSI_COLOR_YELLOW);
    printf("\n\t\t\t\t\t\t [6] : COMPLEX ");
    printf(ANSI_COLOR_RESET);
    printf("19 Elements | Mix of lower and upper case characters, numbers and symbols.");
    printf("\n\n\t\t\t\t\t\t Beware Maximum Iteration Number : %d", MAX_PASS_GEN);
    printf(ANSI_COLOR_YELLOW);
    printf("\n\n\t\t\t\t\t\t !! INPUTTING AN ALPHAPETIC CHARACTER WILL RESULT IN A DEADLY ITERATION ERROR !!");
    printf(ANSI_COLOR_RESET);
}

void PASS_CREATE(int n , int m, int p){
    /* ********** WITHOUT FILE CASES ************** */
    if (p == 0){
        int count = 1, dash_time = 0;
        print_logo();
        printf("\n\n\n\n");
        time_t t;
        srand((unsigned) time(&t));

        switch (n) {
                
                
            // SIMPLE SIMPLE PARADIGM [NO FILE]
            case 1:
                for (int i = 1; i <= m; i++) {
                    if (count == 11) {
                        printf("\n  ");
                        count = 1;
                    }
                    printf("\t");
                    for (int j = 1; j <= MAX_SIMP; j++) {
                        if ((rand()%2)==1) {
                            printf(ANSI_COLOR_GREEN);
                            printf("%c",CAP_array[rand()%MAX_ALPH]);
                            printf(ANSI_COLOR_RESET);
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%c",low_array[rand()%MAX_ALPH]);
                            printf(ANSI_COLOR_RESET);
                        }
                    }
                    printf("  ");
                    count++;
                }
                break;
                
                
            // SIMPLE PARADIGM [NO FILE]
            case 2:
                for (int i = 1; i <= m; i++) {
                    if (count == 11) {
                        printf("\n  ");
                        count = 1;
                    }
                    printf("\t");
                    for (int j = 1; j <= MAX_SIMP; j++) {
                        if ((rand()%2)==1) {
                            printf(ANSI_COLOR_GREEN);
                            printf("%d",num_array[rand()%MAX_NUM]);
                            printf(ANSI_COLOR_RESET);
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%c",low_array[rand()%MAX_ALPH]);
                            printf(ANSI_COLOR_RESET);
                        }
                    }
                    printf("  ");
                    count++;
                }
                break;
            
            // AVERAGE(1) PARADIGM [NO FILE]
            case 3:
            for (int i = 1; i <= m; i++) {
                if (count == 8) {
                    printf("\n  ");
                    count = 1;
                }
                printf("\t");
                int j = 1;
                while (j <= MAX_AVG ) {
                    if (rand()%2==1) {
                        if (dash_time==4) {
                            printf(ANSI_COLOR_GREEN);
                            printf("-");
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time=0;
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%d", num_array[rand()%MAX_NUM]);
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time++;
                        }
                    }
                    else if (rand()%2==0) {
                        if (dash_time==4) {
                            printf(ANSI_COLOR_GREEN);
                            printf("-");
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time=0;
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%c", low_array[rand()%MAX_ALPH]);
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time++;
                        }
                    }
                }
                printf("  ");
                count++;
                dash_time=0;
            }
                break;
               
            // AVERAGE(2) PARADIGM [NO FILE]
            case 4:
            for (int i = 1; i <= m; i++) {
                if (count == 8) {
                    printf("\n  ");
                    count = 1;
                }
                printf("\t");
                int j = 1;
                while (j <= MAX_AVG ) {
                    if (rand()%2==1) {
                        if (dash_time==4) {
                            printf(ANSI_COLOR_GREEN);
                            printf("-");
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time=0;
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%c", CAP_array[rand()%MAX_ALPH]);
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time++;
                        }
                    }
                    else if (rand()%2==0) {
                        if (dash_time==4) {
                            printf(ANSI_COLOR_GREEN);
                            printf("-");
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time=0;
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%c", low_array[rand()%MAX_ALPH]);
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time++;
                        }
                    }
                }
                printf("  ");
                count++;
                dash_time=0;
            }
                break;
                
            // AVERAGE(3) PARADIGM [NO FILE]
            case 5:
            for (int i = 1; i <= m; i++) {
                if (count == 8) {
                    printf("\n  ");
                    count = 1;
                }
                printf("\t");
                int j = 1;
                while (j <= MAX_AVG ) {
                    if (rand()%3==1) {
                        if (dash_time==4) {
                            printf(ANSI_COLOR_GREEN);
                            printf("-");
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time=0;
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%c", CAP_array[rand()%MAX_ALPH]);
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time++;
                        }
                    }
                    else if (rand()%3==0) {
                        if (dash_time==4) {
                            printf(ANSI_COLOR_GREEN);
                            printf("-");
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time=0;
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%c", low_array[rand()%MAX_ALPH]);
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time++;
                        }
                    }
                    else if (rand()%3==2) {
                        if (dash_time==4) {
                            printf(ANSI_COLOR_GREEN);
                            printf("-");
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time=0;
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%d", num_array[rand()%MAX_NUM]);
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time++;
                        }
                    }
                }
                printf("  ");
                count++;
                dash_time=0;
            }
                break;
                
            // COMPLEX PARADIGM [NO FILE]
            case 6:
            for (int i = 1; i <= m; i++) {
                if (count == 7) {
                    printf("\n  ");
                    count = 1;
                }
                printf("\t");
                int j = 1;
                while (j <= MAX_COM ) {
                    if (rand()%4==1) {
                        if (dash_time==4) {
                            printf(ANSI_COLOR_GREEN);
                            printf("-");
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time=0;
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%c", CAP_array[rand()%MAX_ALPH]);
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time++;
                        }
                    }
                    else if (rand()%4==0) {
                        if (dash_time==4) {
                            printf(ANSI_COLOR_GREEN);
                            printf("-");
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time=0;
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%c", low_array[rand()%MAX_ALPH]);
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time++;
                        }
                    }
                    else if (rand()%4==2) {
                        if (dash_time==4) {
                            printf(ANSI_COLOR_GREEN);
                            printf("-");
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time=0;
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%d", num_array[rand()%MAX_NUM]);
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time++;
                        }
                    }
                    else if (rand()%4==3) {
                        if (dash_time==4) {
                            printf(ANSI_COLOR_GREEN);
                            printf("-");
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time=0;
                        }
                        else{
                            printf(ANSI_COLOR_GREEN);
                            printf("%c", sym_array[rand()%MAX_SYM]);
                            printf(ANSI_COLOR_RESET);
                            j++;
                            dash_time++;
                        }
                    }
                }
                printf("  ");
                count++;
                dash_time=0;
            }
                break;
                
            default:
                break;
        }
    }
        
        
    else{
         /* ********** WITH FILE CASES ************** */
        int dash_time = 0;
        FILE *fPtr = NULL;
        fPtr = fopen("/Users/karimkhechen/Desktop/pass-gen.txt", "w");
        if (fPtr == NULL) {
            printf(ANSI_COLOR_RED);
            printf("\n\t\t\t\t\t\t Unable to create file.\n");
            printf(ANSI_COLOR_RESET);
            exit(EXIT_FAILURE);
        }
        time_t t;
        srand((unsigned) time(&t));
        switch (n) {
                
                
            // SIMPLE SIMPLE PARADIGM [WITH FILE]
            case 1:
                for (int i = 1; i <= m; i++) {
                    for (int j = 1; j <= MAX_SIMP; j++) {
                        if ((rand()%2)==1) {
                            fputc(CAP_array[rand()%26], fPtr);
                        }
                        else
                            fputc(low_array[rand()%26], fPtr);
                    }
                    fputs("\n", fPtr);
                }
                break;
                
                
            // SIMPLE SIMPLE PARADIGM [WITH FILE]
            case 2:
                for (int i = 1; i <= m; i++) {
                    for (int j = 1; j <= MAX_SIMP; j++) {
                        if ((rand()%2)==1) {
                            fprintf(fPtr, "%d", num_array[rand()%MAX_NUM]);
                        }
                        else
                            fputc(low_array[rand()%MAX_ALPH], fPtr);
                    }
                    fputs("\n", fPtr);
                }
                break;
                
            // AVERAGE(1) PARADIGM [WITH FILE]
            case 3:
            for (int i = 1; i <= m; i++) {
                int j = 1;
                while (j <= MAX_AVG) {
                    if ((rand()%2)==1) {
                            if (dash_time==4) {
                                fputc('-',fPtr);
                                j++;
                                dash_time=0;
                            }
                            else{
                                fprintf(fPtr, "%d", num_array[rand()%MAX_NUM]);
                                j++;
                                dash_time++;
                            }
                        }
                    else{
                        if (dash_time==4) {
                            fputc('-',fPtr);
                            j++;
                            dash_time=0;
                        }
                        else{
                            fputc(low_array[rand()%MAX_ALPH], fPtr);
                            j++;
                            dash_time++;
                        }
                    }
                }
                fputs("\n", fPtr);
                dash_time=0;
            }
                break;
            
            // AVERAGE(2) PARADIGM [WITH FILE]
            case 4:
            for (int i = 1; i <= m; i++) {
                int j = 1;
                while (j <= MAX_AVG) {
                    if ((rand()%2)==1) {
                            if (dash_time==4) {
                                fputc('-',fPtr);
                                j++;
                                dash_time=0;
                            }
                            else{
                                fputc(CAP_array[rand()%MAX_ALPH], fPtr);
                                j++;
                                dash_time++;
                            }
                        }
                    else{
                        if (dash_time==4) {
                            fputc('-',fPtr);
                            j++;
                            dash_time=0;
                        }
                        else{
                            fputc(low_array[rand()%MAX_ALPH], fPtr);
                            j++;
                            dash_time++;
                        }
                    }
                }
                fputs("\n", fPtr);
                dash_time=0;
            }
                break;
                
            // AVERAGE(3) PARADIGM [WITH FILE]
            case 5:
            for (int i = 1; i <= m; i++) {
                int j = 1;
                while (j <= MAX_AVG) {
                    if ((rand()%3)==1) {
                            if (dash_time==4) {
                                fputc('-',fPtr);
                                j++;
                                dash_time=0;
                            }
                            else{
                                fputc(CAP_array[rand()%MAX_ALPH], fPtr);
                                j++;
                                dash_time++;
                            }
                        }
                    else if (rand()%3==0) {
                        if (dash_time==4) {
                            fputc('-',fPtr);
                            j++;
                            dash_time=0;
                        }
                        else{
                            fputc(low_array[rand()%MAX_ALPH], fPtr);
                            j++;
                            dash_time++;
                        }
                    }
                    else if (rand()%3==2) {
                        if (dash_time==4) {
                            fputc('-',fPtr);
                            j++;
                            dash_time=0;
                        }
                        else{
                            fprintf(fPtr, "%d", num_array[rand()%MAX_NUM]);
                            j++;
                            dash_time++;
                        }
                    }
                }
                fputs("\n", fPtr);
                dash_time=0;
            }
                break;
                
            // COMPLEX PARADIGM [WITH FILE]
            case 6:
            for (int i = 1; i <= m; i++) {
                int j = 1;
                while (j <= MAX_COM) {
                    if ((rand()%4)==1) {
                            if (dash_time==4) {
                                fputc('-',fPtr);
                                j++;
                                dash_time=0;
                            }
                            else{
                                fputc(CAP_array[rand()%MAX_ALPH], fPtr);
                                j++;
                                dash_time++;
                            }
                        }
                    else if (rand()%4==0) {
                        if (dash_time==4) {
                            fputc('-',fPtr);
                            j++;
                            dash_time=0;
                        }
                        else{
                            fputc(low_array[rand()%MAX_ALPH], fPtr);
                            j++;
                            dash_time++;
                        }
                    }
                    else if (rand()%4==2) {
                        if (dash_time==4) {
                            fputc('-',fPtr);
                            j++;
                            dash_time=0;
                        }
                        else{
                            fprintf(fPtr, "%d", num_array[rand()%MAX_NUM]);
                            j++;
                            dash_time++;
                        }
                    }
                    else if (rand()%4==3) {
                        if (dash_time==4) {
                            fputc('-',fPtr);
                            j++;
                            dash_time=0;
                        }
                        else{
                            fputc(sym_array[rand()%MAX_SYM] , fPtr);
                            j++;
                            dash_time++;
                        }
                    }
                }
                fputs("\n", fPtr);
                dash_time=0;
            }
                break;
                
            default:
                break;
        }
        fclose(fPtr);
        print_logo();
        printf(ANSI_COLOR_GREEN);
        printf("\n\n\n\n\t\t\t\t\t\t\t File created and saved successfully to your desktop!");
        printf(ANSI_COLOR_RESET);
    }
}

void retry(int *R){
    int input;
    do {
        printf("\n\n\t\t\t\t\t\t Run the program again? [ 1:YES || 0:NO ] >>> ");
        scanf("%d", &input);
        if (input == 0) {
            *R = 0;
        }
        else
            *R = 1;
    } while (input > 1 || input < 0);
}
 
int main(void){
    int R = 1;
    do {
        
        // ACQURING PARAMETERS
        int n,m,p;
        print_menu();
        get_args(&n,&m,&p);

        // ERROR IN PARAMETERS LOOP
        while ( (n<=0) || (m<=0) || (n>NUM_OF_OPTIONS) || (m>MAX_PASS_GEN) || (p<0) || (p>1) ) {
            m=0;
            n=0;
            p=0;
            print_menu();
            error();
            get_args(&n,&m,&p);
        }
        
        // START THE PASSWORD GENERATION LOOP
        PASS_CREATE(n,m,p);
        retry(&R);
        
    } while (R==1);
    
    // IN CASE THE USER DOESN'T WANTS TO EXIT.
    system("clear");
    exit(EXIT_SUCCESS);
}
