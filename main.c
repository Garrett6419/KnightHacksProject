#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define NUMPOS 20
#define NUMQUESTS 7

void success() ;
int boat() ;
int plane() ;
int knightHacks() ;
int dragon() ;
int rps() ;
int riddle() ;

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
  printf("\nAsk the 8 ball any question you so desire.\n") ;
  while(escape == 0) {
    scanf("%[^\n]s", input) ;
    scanf("%c", &garbage) ;
    if(strstr(input, "?") == NULL) {
        printf("You gotta have a Question Mark(?) to ask a question.\n") ;
        printf("Ask a question: ") ;
        continue ;
    }
    if(strstr(input, "How") != NULL || strstr(input, "how") != NULL) {

    }
    else if(strstr(input, "Can") != NULL) {
        escape = 1 ;
        continue ;
    }
    else if(strstr(input, "Will") != NULL) {
        escape = 1 ;
        continue ;
    }
    else if(strstr(input, "Is") != NULL) {
        escape = 1 ;
        continue ;
    }
    else if(strstr(input, "can") != NULL) {
        escape = 1 ;
        continue ;
    }
    else if(strstr(input, "will") != NULL) {
        escape = 1 ;
        continue ;
    }
    else if(strstr(input, "is") != NULL) {
        escape = 1 ;
        continue ;
    }
    else if(strstr(input, "Does") != NULL) {
        escape = 1 ;
        continue ;
    }
    else if(strstr(input, "does") != NULL) {
        escape = 1 ;
        continue ;
    }
    else if(strstr(input, "Are") != NULL) {
        escape = 1 ;
        continue ;
    }
    else if(strstr(input, "are") != NULL) {
        escape = 1 ;
        continue ;
    }
    else if(strstr(input, "Do") != NULL) {
        escape = 1 ;
        continue ;
    }
    else if(strstr(input, "do") != NULL) {
        escape = 1 ;
        continue ;
    }
    printf("It has to be a yes or no question.\n") ;
    printf("Ask a question: ") ;
  }


  int output = 0;
  for(int i = 0 ; i < 10 ; i++) {
    srand(clock()) ;
    ran2 = rand() % strlen(input) ;
    ran = abs((input[ran2] - 'a') % NUMQUESTS) ;
    printf("ran = %d\n", ran) ;
  }


  if(ran == 0) {
    printf("The 8-Ball answers you without any challenge\n") ;
    output = 1 ;
  }
  else if(ran == 1) {
    output = boat() ;
  }
  else if(ran == 2) {
    output = plane() ;
  }
  else if(ran == 3) {
    output = dragon() ;
  }
  else if(ran == 4) {
    output = knightHacks() ;
  }
  else if(ran == 5) {
    output = rps() ;
  }
  else if(ran == 6) {
    output = riddle() ;
  }

  if(output) {
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

int boat() {
    srand(clock()) ;
    printf("Uh Oh! It seems the 8-Ball is floating on a piece of wood in the middle of a river! \nLuckily you brought your boat with you so you can catch up to it\n") ;
    int riverVelocity = rand() % 5 ;
    int timeRemaining = rand() % 60 ;
    int distance = rand() % 100 ;
    int userAnswer = 0 ;
    printf("The 8-Ball only has the answer up for %d seconds. \nIf the river is moving with velocity of %d m/s and you are %d m away, what is the minimum velocity you must go to get to the 8-Ball before the answer disappears\n", timeRemaining, riverVelocity, distance) ;
    printf("(Truncate answer to the nearest answer Integer)\n") ;
    scanf("%d", &userAnswer) ;
    if(userAnswer == -100) {
        printf("Wow, somehow that works\n") ;
        return 1 ;
    }
    int answer = (distance + riverVelocity*timeRemaining)/timeRemaining ;
    if(userAnswer == answer) {
        printf("Yes, that's correct\n") ;
        return 1 ;
    }
    else {
        printf("Unfortunately that is incorrect and the answer to your question is lost forever :(\n") ;
        return 0 ;
    }
}
int plane() {
    srand(clock()) ;
    printf("Uh Oh! The 8-Ball somehow ended up being up dropped straight down from a plane! \nShockingly, it was dropped directly above you.\n") ;
    int planeHeight = rand() % 9750 ;
    int windVelocity = rand() % 10 ;
    printf("The wind seems to be blowing at a constant speed of %d m/s all the way up to the plane which is %d m above you\n", windVelocity, planeHeight) ;
    printf("How fast do you need to go to get to where the 8-Ball will land if you ran at a constant speed from the time it was dropped?\n") ;
    printf("(Don't worry, you're very fast so you can definitely make it to the landing site)\n") ;
    printf("(There's no air resistance either because the 8-Ball is magic)\n") ;
    printf("(Truncate answer to the nearest answer Integer)\n") ;
    int userAnswer = 0 ;
    scanf("%d", &userAnswer) ;
    if(userAnswer == windVelocity) {
        printf("Yes, that's correct\n") ;
        printf("You caught the 8-Ball!\n") ;
        return 1 ;
    }
    else if(userAnswer > windVelocity) {
        printf("Oh No! You ran right past the 8-Ball and it hit the ground and shattered into a thousand pieces :(\n") ;
    }
    else {
        printf("Oh No! You didn't make it in time, the 8-Ball bounced right back up and was lost forever in the vast void of space :(\n") ;
    }
}

int dragon() {
    srand(clock()) ;
    printf("Uh Oh! Seems like a dragon swooped in and stole the 8-Ball!\n") ;
    printf("You decide to cast Fireball and roll for initiative") ;
    printf("You have 3 dice in front of you, do you want to roll the Red, Blue, or Green Dice?\n") ;
    printf("(Please Enter: Red, Blue, or Green)\n") ;
    char dice[101] ;
    scanf("%s", dice) ;
    if(strcmp(dice, "Red") == 0) {
        printf("You rolled the Red dice\n") ;
    }
    else if(strcmp(dice, "Green") == 0) {
        printf("You rolled the Green dice\n") ;
    }
    else if(strcmp(dice, "Blue") == 0) {
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
        printf("An 18! You successfully launch a Fireball.. \nThe Fireball catches the Dragon off guard ad it drops the Fireball before it flies away with it's tail between it's legs\n") ;
        printf("You successfully retrieved the 8-Ball\n") ;
        return 1 ;
    }
    if(ran == 4) {
        printf("A 20! Before you even cast Fireball the 8-Ball magically returns to your hand.\nIt is magic after all\n") ;
        printf("You successfully retrieved the 8-Ball\n") ;
        return 1 ;
    }
}

int knightHacks() {
    int attempts = 0 ;
    char garbage ;
    printf("It seems the 8-Ball wants to hear you say how much you love Knightro\n") ;
    char input[101] ;
    while(attempts < 5) {
        if(attempts > 0) {
            printf("Try Again\n") ;
        }
        printf("Please Enter: \"I Love Knightro!\"\n") ;
        scanf("%[^\n]s", input) ;
        scanf("%c", &garbage) ;
        if(strcmp(input, "I Love Knightro!") == 0 ) {
            printf("Yeah You Do!\n") ;
            return 1 ;
        }
        attempts++ ;
    }
    printf("That's alright, I guess you don't want the answer to the 8-Ball :(\n") ;
    return 0 ;
}

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

