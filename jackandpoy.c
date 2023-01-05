/*
* PL-2 ACTIVITY 3
* JACK AND POY (C LANGUAGE)
*/

#include <stdio.h>
#include <ctype.h> 
#include <stdlib.h>

int main()
{
    int playerStart, randomizer;
    char playerOption, items[3] = {'p', 'x', 's'};
    
    do {
        printf("====JACK & POY====\n");
        printf("Do you want to play?\n");
        printf("[1] - YES\n");
        printf("[2] - NO\n");
        scanf("%d", &playerStart);
        printf("\n");
        
        if (playerStart == 1) {
            printf("Choose to play\n");
            printf("[P] - PAPER\n");
            printf("[X] - SCISSORS\n");
            printf("[S] - STONE/ROCK\n");
            scanf("%s", &playerOption);
            playerOption = tolower(playerOption);
            
            randomizer = rand() % 3;
            
            printf("PLAYER: %c",playerOption);
            printf(" vs COMPUTER: %c",items[randomizer]);
            printf("\n");
            
            if (playerOption == items[randomizer]) {
                printf("***THE GAME IS DRAW***\n\n");
			}
			else if (playerOption == 'x' && items[randomizer] == 'p') {
			    printf("***PLAYER WINS***\n\n");
			}
			else if (playerOption == 'p' && items[randomizer] == 's') {
			    printf("***PLAYER WINS***\n\n");
			}
			else if (playerOption == 's' && items[randomizer] == 'x') {
			    printf("***PLAYER WINS***\n\n");
			}
			else if (items[randomizer] == 'x' && playerOption == 'p') {
			    printf("***COMPUTER WINS***\n\n");
			}
			else if (items[randomizer] == 'p' && playerOption == 's') {
			    printf("***COMPUTER WINS***\n\n");
			}
			else if (items[randomizer] == 's' && playerOption == 'x') {
			    printf("***COMPUTER WINS***\n\n");
			}
			else {
			    printf("***INVALID INPUT***\n\n");
			}
        }
        else {
            printf("***INVALID INPUT***");
        }
        
    } while (playerStart != 2);
    
    return 0;
}
