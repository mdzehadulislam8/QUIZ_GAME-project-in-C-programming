#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    struct score {
        int results;
        char name[30];
    };
    struct score s;
    int ans, wrong, right, n, count;
    char key;

    printf("\t\t\t\t    Welcome to the  QUIZ GAME\n\t\t\t\t--------------------------------\n\t\tThe quiz has 17 basic questions on General knowledge.\n\t\tYou will get 01 point for each correct answer.\n");
    printf("\nCHOOSE YOUR FAVOURITE AMONG THE THREE OPTIONS:\n");
start:
    printf("(1) Quiz Game\n(2) Scoreboard\n(3) Quit\n");
    scanf("%d", &n);

    switch (n) {
    case 1:
        file = fopen("text.txt", "a");

        do {
            wrong = 0;
            right = 0;
            count = 0;

            // Question 1
        q1:
            printf("\nWhat is the capital city of Bangladesh?\n(1) Dhaka\n(2) Barisal\n(3) Sylhet\n(4) Dinajpur\n");
            scanf("%d", &ans);

            if (ans == 1) {
                printf("Answer is correct!\n");
                right++;
            } else if (ans == 2 || ans == 3 || ans == 4) {
                printf("Wrong answer!\n");
                wrong++;
            } else {
                printf("Invalid number. Please try again.\n");
                goto q1;
            }
            count++;

            // Question 2
        q2:
            printf("\nWhich country hosted the FIFA World Cup?\n(1) Brazil\n(2) Argentina\n(3) Germany\n(4) Italy\n");
            scanf("%d", &ans);

            if (ans == 1) {
                printf("Answer is correct!\n");
                right++;
            } else if (ans == 2 || ans == 3 || ans == 4) {
                printf("Wrong answer!\n");
                wrong++;
            } else {
                printf("Invalid number. Please try again.\n");
                goto q2;
            }
            count++;

            // Question 3
        q3:
            printf("\nWhich planet is known as the Red Planet?\n(1) Venus\n(2) Mars\n(3) Jupiter\n(4) Saturn\n");
            scanf("%d", &ans);

            if (ans == 2) {
                printf("Answer is correct!\n");
                right++;
            } else if (ans == 1 || ans == 3 || ans == 4) {
                printf("Wrong answer!\n");
                wrong++;
            } else {
                printf("Invalid number. Please try again.\n");
                goto q3;
            }
            count++;

            // Question 4
        q4:
            printf("\nWho painted the Mona Lisa?\n(1) Leonardo da Vinci\n(2) Michelangelo\n(3) Pablo Picasso\n(4) Vincent van Gogh\n");
            scanf("%d", &ans);

            if (ans == 1) {
                printf("Answer is correct!\n");
                right++;
            } else if (ans == 2 || ans == 3 || ans == 4) {
                printf("Wrong answer!\n");
                wrong++;
            } else {
                printf("Invalid number. Please try again.\n");
                goto q4;
            }
            count++;

            // Question 5
        q5:
            printf("\nWhat is the chemical symbol for water?\n(1) H2O\n(2) CO2\n(3) O2\n(4) NaCl\n");
            scanf("%d", &ans);

            if (ans == 1) {
                printf("Answer is correct!\n");
                right++;
            } else if (ans == 2 || ans == 3 || ans == 4) {
                printf("Wrong answer!\n");
                wrong++;
            } else {
                printf("Invalid number. Please try again.\n");
                goto q5;
            }
            count++;

            // Question 6
        q6:
            printf("\nWho wrote 'To Kill a Mockingbird'?\n(1) Harper Lee\n(2) J.K. Rowling\n(3) Stephen King\n(4) Ernest Hemingway\n");
            scanf("%d", &ans);

            if (ans == 1) {
                printf("Answer is correct!\n");
                right++;
            } else if (ans == 2 || ans == 3 || ans == 4) {
                printf("Wrong answer!\n");
                wrong++;
            } else {
                printf("Invalid number. Please try again.\n");
                goto q6;
            }
            count++;

            // Question 7
        q7:
            printf("\nWhat is the largest mammal in the world?\n(1) Elephant\n(2) Blue whale\n(3) Giraffe\n(4) Gorilla\n");
            scanf("%d", &ans);

            if (ans == 2) {
                printf("Answer is correct!\n");
                right++;
            } else if (ans == 1 || ans == 3 || ans == 4) {
                printf("Wrong answer!\n");
                wrong++;
            } else {
                printf("Invalid number. Please try again.\n");
                goto q7;
            }
            count++;

            // Question 8
        q8:
            printf("\nWho invented the telephone?\n(1) Thomas Edison\n(2) Alexander Graham Bell\n(3) Nikola Tesla\n(4) Albert Einstein\n");
            scanf("%d", &ans);

            if (ans == 2) {
                printf("Answer is correct!\n");
                right++;
            } else if (ans == 1 || ans == 3 || ans == 4) {
                printf("Wrong answer!\n");
                wrong++;
            } else {
                printf("Invalid number. Please try again.\n");
                goto q8;
            }
            count++;

            // Question 9
        q9:
            printf("\nWhich gas is most abundant in Earth's atmosphere?\n(1) Oxygen\n(2) Carbon dioxide\n(3) Nitrogen\n(4) Hydrogen\n");
            scanf("%d", &ans);

            if (ans == 3) {
                printf("Answer is correct!\n");
                right++;
            } else if (ans == 1 || ans == 2 || ans == 4) {
                printf("Wrong answer!\n");
                wrong++;
            } else {
                printf("Invalid number. Please try again.\n");
                goto q9;
            }
            count++;

            // Question 10
        q10:
            printf("\nWhat is the chemical symbol for gold?\n(1) Au\n(2) Ag\n(3) Fe\n(4) Cu\n");
            scanf("%d", &ans);

            if (ans == 1) {
                printf("Answer is correct!\n");
                right++;
            } else if (ans == 2 || ans == 3 || ans == 4)


            printf("\nYour result: %d\nWrong answers: %d\nTotal questions: %d\n", right, wrong, count);

            // Input player's name
            printf("Enter your name: ");
            scanf("%s", s.name);

            s.results = right;

            fprintf(file, "%s %d\n", s.name, s.results);

            printf("----------------\n\n");

            printf("Reply to the Game? Press 'y' for yes and 'n' for no: ");
            scanf(" %c", &key);

        } while (key == 'y');
        fclose(file);
        goto start;

    case 2:
        file = fopen("text.txt", "r");

        printf("\n# Scoreboard #\n");

        while (fscanf(file, "%s %d", s.name, &s.results) != EOF) {
            printf("%s's score: %d\n", s.name, s.results);
        }

        fclose(file);
        goto start;

    case 3:
        printf(".............<< End >>..............\n");
        return 0;

    default:
        printf("Invalid option.\n");
        goto start;
    }
}
