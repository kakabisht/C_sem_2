#include<stdio.h>
#include<string.h>
struct icc_world_cup
{
	char trophies,highestscore[10],lowestscore[10],best_batsman_economy[100],best_bowler_economy[100];
};
void output(struct icc_world_cup cup);
void choices();
int main()
{
	int i;
	printf("\n The index value for India is 0  \n australia is 1 \n england is 2 \n West indies is 3 \n Paskitan is 4 \n for NewZealand it is 5");
	char country[5]={'i','a','e','w','p','n'};
	printf("\n Enter the index value of the country you want to know about ");
	scanf("%d",&i);
	struct icc_world_cup india={'2',"413 for 5","123 for 10","Sachin Tendulkar -> 2278 runs","Kapil Dev -> 5 wickets for 43 runs"};
 		if(country[i]=='i')
		{
			printf("India \n");
			output(india);
		}
	struct icc_world_cup australia={'5',"417 for 6","129 for 10","Ricky Pointing -> 1743 runs","Gllen Mcgrath -> 7 wickets for 15runs"};
		if(country[i]=='a')
		{
			printf("Australia \n");
			output(australia);
		}
	struct icc_world_cup england={'0',"338 for 8","103 for 10","Ga Gooch -> 897 runs","James Anderson -> 4 wickets for 25 runs"};
		if(country[i]=='e')
		{
			printf("England \n");		
			output(england);
		}
	struct icc_world_cup westindies={'2',"372 for 2","93 for 10","Brian Lara -> 1225 runs","Ca Walsh ->4 wickets for 25 runs"};
		if(country[i]=='w')
		{
			printf("WestIndies \n");
			output(westindies);
		}
	struct icc_world_cup pakistan={'1',"349 for 10","74 for 10","Javed Miandad -> 1083 runs","Shahid Afridi ->5 wickets for 16 runs"};
		if(country[i]=='p')
		{
			printf("Pakistan \n");
			output(pakistan);
		}
	struct icc_world_cup new_zealand={'0',"363 for 5","112 for 10","Spell Fleming -> 1075 runs","Tim southee ->7 wickets for 33 runs"};
		if(country[i]=='n')
		{
			printf("New Zealand \n");		
			output(new_zealand);
		}
}
void output(struct icc_world_cup cup)
{
		printf(" \t no. of trophies : %c \n",cup.trophies);
		printf(" \t highest score : %s \n",cup.highestscore);
		printf(" \t lowest score : %s\n",cup.lowestscore);
		printf(" \t best batsman economy: %s\n",cup.best_batsman_economy);
		printf(" \t best bowler economy: %s\n",cup.best_bowler_economy);	
	
}

