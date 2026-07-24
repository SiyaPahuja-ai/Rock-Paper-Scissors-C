#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int user , computer;
    srand(time(0));
    printf("--------Rock Paper Scissors Game--------");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("\nEnter your choice(1-3): ");
    scanf("%d",&user);

    if(user<1 || user>3){
        printf("Invalid Choice!\n");
        return 0;
    }
    computer = rand() % 3 + 1;
    printf("\nYour Choice: ");
    if(user == 1)
        printf("Rock");
    else if(user == 2)
        printf("Paper");
    else 
        printf("Scissors");

    printf("\nComputer Choice: ");
    if(computer==1)
        printf("Rock");
    else if (computer == 2)
        printf("Paper");
    else 
        printf("Scissors");

    printf("\n\nResult: ");
    
    if(user==computer){
        printf("It's a Draw!\n");
    }
    else if((user == 1 && computer == 3)||
        (user == 2 && computer==1)||
        (user== 3 && computer == 2)){
            printf("Congratulations! You Win.\n");
        }
        else {
            printf("Computer Wins!\n");
        }
        return 0;
}