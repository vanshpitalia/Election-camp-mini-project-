#include<stdio.h>
#define POLITICALPARTY_COUNT
#define POLITICALPARTY1 "BJP"
#define POLITICALPARTY2 "AAP"
#define POLITICALPARTY3 "INC"
#define POLITICALPARTY4 "CPI"
int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;
void castVote()
{
    int choice;
    printf("\n-----------------------------------------------\n");
    printf("\n   *** Please choose your Candidate *** \n");
    printf("\n-----------------------------------------------\n");
    printf("\n 1. %s", POLITICALPARTY1);
    printf("\n 2. %s", POLITICALPARTY2);
    printf("\n 3. %s", POLITICALPARTY3);
    printf("\n 4. %s", POLITICALPARTY4);
    printf("\n 5. %s", "None of These");
    printf("\n\n Input your choice (1 - 4) : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: votesCount1++; break;
        case 2: votesCount2++; break;
        case 3: votesCount3++; break;
        case 4: votesCount4++; break;
        case 5: spoiledtvotes++; break;
        default: printf("\n Error: Wrong Choice !! Please retry");
        getchar();
    }
    printf("\n thanks for vote !!\n\n");
}
void votesCount()
{
    printf("\n-----------------------------------------------\n");
    printf("\n         ***** Voting Statics *****\n");
    printf("\n-----------------------------------------------\n");
    printf("\n %s - %d ", POLITICALPARTY1, votesCount1);
    printf("\n %s - %d ", POLITICALPARTY2, votesCount2);
    printf("\n %s - %d ", POLITICALPARTY3, votesCount3);
    printf("\n %s - %d ", POLITICALPARTY4, votesCount4);
    printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);
    printf("\n\n");
}
void getLeadingPoliticalparty()
{
    printf("\n-------------------------------------------\n");
    printf("\n  **** Leading Political Party **** \n");
    printf("\n-------------------------------------------\n\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]\n\n",POLITICALPARTY1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]\n\n",POLITICALPARTY2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]\n\n",POLITICALPARTY3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]\n\n",POLITICALPARTY4);
    else
    printf("----- Warning !!! No-win situation----\n\n");
}
int main()
{
    int i;
    int choice;
    do{
        printf("\n-------------------------------------------------------\n");
        printf("\n    ***** Welcome to Election/Voting *****\n");
        printf("\n-------------------------------------------------------\n");
        printf("\n\n 1. Cast the Vote");
    printf("\n 2. Find Vote Count");
    printf("\n 3. Find leading Political Party");
    printf("\n 0. Exit");
    printf("\n\n Please enter your choice : ");
    scanf("%d", &choice);
    printf("\n\n");
    switch(choice)
    {
        case 1: castVote();break;
        case 2: votesCount();break;
        case 3: getLeadingPoliticalparty();break;
        default: printf("\n Error: Invalid Choice");
    }
    }
    while(choice!=0);
    getchar();
    return 0;
}
