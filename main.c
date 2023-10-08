#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define NUMPOS 20
#define NUMQUESTS 8
#define MAXLEN 10
#define NUMWORDS 16

void success() ;
int knightHacks() ;
int dragon() ;
int rps() ;
int riddle() ;
int wait() ;
int pause() ;
int potion() ;
int magic() ;

int main(void) {
  srand(clock()) ;
  int ran;
  int ran2 ;
  char input[101] ;
  char garbage ;
  int escape = 0 ;
    printf("                    _         ___          ___       _ _     ____                 _   \n") ;
    printf("  /\\/\\   __ _  __ _(_) ___   ( _ )        / __\\ __ _| | |   /___ \\_   _  ___  ___| |_ \n") ;
    printf(" /    \\ / _` |/ _` | |/ __|  / _ \\ _____ /__\\/// _` | | |  //  / / | | |/ _ \\/ __| __|\n") ;
    printf("/ /\\/\\ \\ (_| | (_| | | (__  | (_) |_____/ \\/  \\ (_| | | | / \\_/ /| |_| |  __/\\__ \\ |_ \n") ;
    printf("\\/    \\/\\__,_|\\__, |_|\\___|  \\___/      \\_____/\\__,_|_|_| \\___,_\\ \\__,_|\\___||___/\\__|\n") ;
    printf("               |___/                                                                   \n") ;
  printf("\nAsk the 8-Ball any question you so desire.\n") ;

  //array of different keywords expected in a yes/no question
  char poss[NUMWORDS][MAXLEN] = {"Can","can","Will","will","Is","is","Does","does","Are","are","Do","do","Did","did","Should","should"};

  while(escape == 0) {
    scanf("%[^\n]s", input) ;
    scanf("%c", &garbage) ;

    if(strstr(input, "?") == NULL) {
        printf("You gotta have a Question Mark(?) to ask a question.\n") ;
        printf("Ask a question: ") ;
        continue ;
    }

    //checks input to see if the question is phrased for a yes/no answer
	for(int i = 0; i < NUMWORDS; i++)
	{
		if(strstr(input, poss[i]) != NULL)
		{
			escape = 1;
			i = NUMWORDS;
			continue;
		}
	}

    if(escape) {
        break ;
    }

    printf("It has to be a yes or no question.\n") ;
    printf("Ask a question: ") ;
  }


  //To let the user have some control over their fate,
  //we're choosing to calculate the random quest based off a randomly selected character in their question
  int output = 0;
  srand(clock()) ;
  ran2 = rand() % strlen(input) ;
  ran = abs((input[ran2] - 'a') % NUMQUESTS) ;

  // printf("ran = %d\n", ran);

  //decides what quest the user will go on
  if(ran == 0) {
    printf("The 8-Ball answers you without any challenge\n") ;
    output = 1 ;
  }
  else if(ran == 1) {
    output = dragon() ;
  }
  else if(ran == 2) {
    output = knightHacks() ;
  }
  else if(ran == 3) {
    output = rps() ;
  }
  else if(ran == 4) {
    output = riddle() ;
  }
  else if(ran == 5) {
    output = wait() ;
  }
  else if(ran == 6) {
    output = potion() ;
  }
  else if (ran == 7) {
    output = magic() ;
  }

  if(output) {
    // pause() ;
    printf("\nThe 8-Ball says:\n") ;
    success() ;
  }


  return 0;
}

void success() {
  int ran = rand() % NUMPOS ;
  if(ran == 0) {
    printf("It is certain\n") ;
  }
  if(ran == 1) {
    printf("It is decidedly so\n") ;
  }
  if(ran == 2) {
    printf("Without a doubt\n") ;
  }
  if(ran == 3) {
    printf("Yes - definitely\n") ;
  }
  if(ran == 4) {
    printf("You may rely on it\n") ;
  }
  if(ran == 5) {
    printf("As I see it, yes\n") ;
  }
  if(ran == 6) {
    printf("Most likely\n") ;
  }
  if(ran == 7) {
    printf("Outlook good\n") ;
  }
  if(ran == 8) {
    printf("Yes\n") ;
  }
  if(ran == 9) {
    printf("Signs point to yes\n") ;
  }
  if(ran == 10) {
    printf("Reply hazy, try again\n") ;
  }
  if(ran == 11) {
    printf("Ask again later\n") ;
  }
  if(ran == 12) {
    printf("Better not tell you now\n") ;
  }
  if(ran == 13) {
    printf("Cannot predict now\n") ;
  }
  if(ran == 14) {
    printf("Concentrate and ask again\n") ;
  }
  if(ran == 15) {
    printf("Don't count on it\n") ;
  }
  if(ran == 16) {
    printf("My reply is no\n") ;
  }
  if(ran == 17) {
    printf("My sources say no\n") ;
  }
  if(ran == 18) {
    printf("Outlook not so good\n") ;
  }
  if(ran == 19) {
    printf("Very doubtful\n") ;
  }
}

// Half of the
int dragon() {
    srand(clock()) ;
    printf("Uh Oh! Seems like a dragon swooped in and stole the 8-Ball!\n") ;
    printf("You decide to cast Fireball and roll for initiative\n") ;
    printf("You have 3 dice in front of you, do you want to roll the Red, Blue, or Green Dice?\n") ;
    printf("(Please Enter: Red, Blue, or Green)\n") ;
    char dice[101] ;
    scanf("%s", dice) ;
    if(strcmp(dice, "Red") == 0 || strcmp(dice, "red") == 0) {
        printf("You rolled the Red dice\n") ;
    }
    else if(strcmp(dice, "Green") == 0 || strcmp(dice, "green") == 0) {
        printf("You rolled the Green dice\n") ;
    }
    else if(strcmp(dice, "Blue") == 0 || strcmp(dice, "blue") == 0) {
        printf("You rolled the Blue dice\n") ;
    }
    else {
        printf("Yeah it doesn't matter anyway\n") ;
    }
    int ran = rand() % 5 ;
    if(ran == 0) {
        printf("A 1.. You are barely able to make a spark... \nThe dragon flies away with the 8-Ball never to be seen again\n") ;
        return 0 ;
    }
    if(ran == 1) {
        printf("A 3.. You successfully launch a Fireball.. \nHowever your aim was a little off and you burned up the 8-Ball\n") ;
        return 0 ;
    }
    if(ran == 2) {
        printf("A 4.. You successfully launch a Fireball.. \nUnfortunately the dragon sees it coming and sends back a Fireball 10 times the size and burns up the 8-Ball in the process\n") ;
        return 0 ;
    }
    if(ran == 3) {
        printf("An 18! You successfully launch a Fireball.. \nThe Fireball catches the Dragon off guard ad it drops the 8-Ball before it flies away with it's tail between it's legs\n") ;
        printf("You successfully retrieved the 8-Ball\n") ;
        return 1 ;
    }
    if(ran == 4) {
        printf("A 20! Before you even cast Fireball the 8-Ball magically returns to your hand.\nIt is magic after all\n") ;
        printf("You successfully retrieved the 8-Ball\n") ;
        return 1 ;
    }
}

// I Love KnightHacks!
int knightHacks() {
    int attempts = 0 ;
    char garbage ;
    printf("It seems the 8-Ball wants to hear you say how much you love KnightHacks\n") ;
    char input[101] ;
    while(attempts < 5) {
        if(attempts > 0) {
            printf("Try Again\n") ;
        }
        printf("Please Enter: \"I Love KnightHacks!\"\n") ;
        scanf("%[^\n]s", input) ;
        scanf("%c", &garbage) ;
        if(strcmp(input, "I Love KnightHacks!") == 0 ) {
            printf("Yeah You Do!\n") ;
            return 1 ;
        }
        attempts++ ;
    }
    printf("That's alright, I guess you don't want the answer to the 8-Ball :(\n") ;
    return 0 ;
}

// a classic game of rps... how an 8-Ball can play rps is a good question
// luckily magic answers all
int rps() {
    srand(clock()) ;
    int attempts = 0 ;
    char input ;
    char garbage ;
    printf("The 8-Ball challenges you to a game of Rock-Paper-Scissors!\n") ;
    printf("Will you choose Rock(r), Paper(p), or Scissors(s)\n") ;
    int ran = rand();
    //printf("ran = %d\n", ran) ;
    ran %= 3 ;
    // printf("ran = %d\n", ran);
    while(attempts < 5) {
        scanf("%c", &input) ;
        scanf("%c", &garbage) ;
        if(!(input == 'r' || input == 'p' || input == 's')) {
            printf("Enter r, p, or s: ") ;
            continue ;
        }
        if(ran == 0) {
            printf("You have beaten the 8-Ball!\n") ;
            return 1 ;
        }
        if(ran == 1) {
            printf("You and the 8-Ball tied, try again\n") ;
            ran = rand() % 3 ;
            continue ;
        }
        if(ran == 2) {
            printf("You lost to the 8-Ball..\n") ;
            return 0 ;
        }
        attempts++ ;
    }
    printf("That's alright... The 8-Ball didn't want to play anyway... :(\n") ;
    return 0 ;
}

//All these riddles are from Lord of the Rings... if you don't like them take it up Tolkien himself
int riddle() {
    srand(clock()) ;
    printf("The 8-Ball has decided you must answer a riddle to get your answer.\n") ;
    printf("The riddle is: \n") ;
    int ran = rand() % 4 ;
    char ans[101] ;
    char garbage ;
    if(ran == 0) {
        printf("What has roots as nobody sees,\n") ;
        printf("Is taller than trees,\n") ;
        printf("Up, up it goes,\n") ;
        printf("And yet never grows.\n") ;
        printf("What is it?\n") ;
        scanf("%[^\n]s", ans) ;
        scanf("%c", &garbage) ;
        if(strstr(ans, "Mountain") != NULL || strstr(ans, "mountain") != NULL) {
            printf("That is correct, well done\n") ;
            return 1 ;
        }
        printf("Unfortunately that is incorrect.. :(\n") ;
        return 0 ;
    }
    if(ran == 1) {
        printf("Voiceless it cries,\n") ;
        printf("Wingless it flutters,\n") ;
        printf("Toothless bites,\n") ;
        printf("Mouthless mutters.\n") ;
        printf("What is it?\n") ;
        scanf("%[^\n]s", ans) ;
        scanf("%c", &garbage) ;
        if(strstr(ans, "Wind") != NULL || strstr(ans, "wind") != NULL) {
            printf("That is correct, well done\n") ;
            return 1 ;
        }
        printf("Unfortunately that is incorrect.. :(\n") ;
        return 0 ;
    }
    if(ran == 2) {
        printf("It cannot be seen, cannot be felt,\n") ;
        printf("Cannot be heard, cannot be smelt.\n") ;
        printf("It lies behind stars and under hills,\n") ;
        printf("And empty holes it fills.\n") ;
        printf("It comes first and follows after,\n") ;
        printf("Ends life, kills laughter.\n") ;
        printf("What is it?\n") ;
        scanf("%[^\n]s", ans) ;
        scanf("%c", &garbage) ;
        if(strstr(ans, "Dark") != NULL || strstr(ans, "dark") != NULL) {
            printf("That is correct, well done\n") ;
            return 1 ;
        }
        printf("Unfortunately that is incorrect.. :(\n") ;
        return 0 ;
    }
    if(ran == 3) {
        printf("This thing all things devours:\n") ;
        printf("Birds, beasts, trees, flowers;\n") ;
        printf("Gnaws iron, bites steel;\n") ;
        printf("Grinds hard stones to meal;\n") ;
        printf("Slays king, ruins town,\n") ;
        printf("And beats high mountains down.\n") ;
        printf("What is it?\n") ;
        scanf("%[^\n]s", ans) ;
        scanf("%c", &garbage) ;
        if(strstr(ans, "Time") != NULL || strstr(ans, "time") != NULL) {
            printf("That is correct, well done\n") ;
            return 1 ;
        }
        printf("Unfortunately that is incorrect.. :(\n") ;
        return 0 ;
    }
}

int wait() {
    printf("The 8-Ball is buffering... Please hold\n") ;
    int start = clock() ;
    int flag = 0 ;
    int flagTwo = 0 ;
    int flagThree = 0 ;
    while(clock() - start < 30000) {
        if(clock() - start < 15500 && !flag && clock() - start > 14500) {
            printf("Halfway there!\n") ;
            flag = 1;
        }
        if(clock() - start < 8000  && !flagTwo && clock() - start > 7000) {
            printf("Still working away!\n") ;
            flagTwo  = 1 ;
        }
        if(clock() - start < 25500  && !flagThree && clock() - start > 24500) {
            printf("So close!\n") ;
            flagThree = 1 ;
        }
    }
    printf("Thanks for waiting!\n") ;
    return 1 ;
}

//pause for dramatic effect
int pause() {
    //printf("The 8-Ball is buffering... Please wait a second\n") ;
    int start = clock() ;
    while(clock() - start < 750) {

    }
    //printf("Thanks for waiting!\n") ;
    return 1 ;
}

int potion() {
    srand(clock()) ;
    int flag = 0 ;
    char input[101] ;
    printf("The 8-Ball transforms into a potion with a questionable look.\n") ;
    printf("Would you like to drink it? Yes or No\n") ;
    int ran = rand() % 2 ;
    while(flag < 1) {
        scanf("%s", input) ;
        if(strstr(input, "Yes") != NULL || strstr(input, "yes") != NULL ) {
            if(ran == 0) {
                printf("You drank the potion and your third-eye was opened. \nYou see a vision of the 8-Ball in front of you.\n") ;
                return 1 ;
            }
            if(ran == 1) {
                printf("You drank the potion and are transformed into a toad. \nAs a toad you cannot understand the complexity of a magic 8-Ball. \nThus you live the rest of your existence without knowing what the 8-Ball said.\n") ;
                return 0 ;
            }
        }
        if(strstr(input, "No") != NULL || strstr(input, "no") != NULL) {
            if(ran == 0) {
                printf("You choose not to drink the potion. \nAfter a while the potion transforms back to the 8-Ball and your answer is revealed.\n") ;
                return 1 ;
            }
            if(ran == 1) {
                printf("You choose not to drink the potion. \nYou patiently wait for something to happen but it never does.\n") ;
                return 0 ;
            }
        }
        printf("Enter Yes or No: ") ;
    }
}

int magic() {
    srand(clock()) ;
    printf("A curse has befallen the 8-Ball and it transforms int a 20 sided die.\n") ;
    printf("With nothing else to do, you decide to roll the dice.\n") ;
    //the pause makes it feel like something is actually happening and the user isn't bombarded with a bunch of text instantaniously
    pause() ;
    int ran = rand() % 20 + 1;
    printf("You rolled a %d\n", ran) ;
    pause() ;
    if(ran < 6) {
        printf("A Wild Bard Appears!\n") ;
        printf("Unfortunately, Bards know nothing about curses and they talked your ear off for about an hour before leaving. \nYou couldn't figure out how to turn the dice back into the 8-Ball.\n") ;
        return 0 ;
    }
    else if(ran < 11) {
        printf("A Barbarian approaches!\n") ;
        printf("The Barbarian is dumbfounded by the dice. \nAfter about 1 minute of trying they are sent into a rage and destroy the dice. \nWith no hope of turning it back into a the 8-Ball you give up and realize your answer is lost forever.\n") ;
        return 0 ;
    }
    else if(ran < 16) {
        printf("A Warlock appears from a puff of smoke!\n") ;
        printf("The Warlock consults a extraplanar entity and after much deliberation they figure out how to undo the curse. \nThe dice turns back into the 8-Ball and your answer reveals itself.\n") ;
        return 1 ;
    }
    else if(ran < 21) {
        printf("A Druid comes from a nearby forest!\n") ;
        printf("The Druid knows exactly what to do and the curse on the dice is lifted. \nYou are now able to get your answer.\n") ;
        return 1 ;
    }

}




