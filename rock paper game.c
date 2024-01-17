#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int generaterandom(int n){
    srand(time(NULL));
    return rand()%n;
}

int great(char c1,char c2){

    if (c1 == c2){
        return -1;
    }
    else if ((c1=='r') && (c2=='s')){
        return 1;
    }
    else if((c2=='r') && (c1=='s')){
        return 0;
    }
    else if ((c1=='p') && (c2=='r')){
        return 1;
    }
    else if ((c2=='p') && (c1=='r')){
        return 0;
    }
    else if ((c1=='s') && (c2=='p')){
        return 1;
    }
    else if ((c2=='s') && (c1=='p'))
    {
        return 0;
    }
}


int main()
{
        //int cab;

    t:
    printf("\t\t\tWelcome to Rock,Paper and Scissor game made by Baishakh\n");
    int p1score=0, compscore=0, temp;
    char p1char, compchar;
    char dict[]={'r','p','s'};

    for(int i=0;i<3;i++)
    {

        printf("Choose: 1 for Rock, 2 for Paper, 3 for Scissor\n");
        printf("Your turn:\n");
        scanf("%d",&temp);
       // getchar();
        p1char= dict[temp-1];
        printf("You chose %c:\n",p1char);

        printf("Computer's turn\n");
        Sleep(2000);
        temp=generaterandom(3)+1;
        compchar= dict[temp-1];
        printf("Computer chose %c:\n",compchar);
        Sleep(1000);


        if(great(compchar,p1char) == 1){
            compscore+=1;
            printf("COMPUTER got it!\n");
        }
        else if(great(compchar,p1char) == -1){
            compscore+=1;
            p1score+=1;
            printf("YOU BOTH got it!\n");
        }
        else{
            p1score+=1;
            printf("YOU got it!\n");
        }
        printf("\nYOU:%d CPU:%d\n\n\n",p1score,compscore);
    }
    if (p1score>compscore){
        printf("YOU WIN THE GAME\n");
    }
    else if(p1score<compscore){
        printf("COMPUTER WIN THE GAME\n");
    }
    else{
        printf("IT'S A DRAW\n");
    }

    int f;
    m:

    printf("do you play the game again?\n");
    printf("Enter 1 for play again    and Enter 2 for not play\n");
    scanf("%d",&f);
    if(f==1)
        goto t;
        else if(f==2)
            exit(0);
        else{
            printf("you Enter an Unvalid number\n");
            goto m;
        }

    return 0;
}
