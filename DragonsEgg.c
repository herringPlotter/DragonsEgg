#include <stdio.h>

int main()
{
    //A LONE knight RODE along the TWISTY slope up to the dragon's cave.
    // His mission was to defeat the dragon ROOSTING there, then return its HEAD to the king he swore fealty to.
    //The cave was silent as he neared its DARK and STONY depths. It was UNNERVING. There should have been at least ONE
    //TINY roar as the dragon realized he was there. But instead, there was nothing.
    //As he stepped through the entrance, he realized why. The dragon was lying still on the GREY stone, a JAVELIN
    //stuck in its back. Someone else had gotten to it before him.
    //To the side of the dragon was a LARGE, SHIMMERY egg. As he watched, cracks appeared in the surface, and a CURIOUS
    // snout poked its way through. It didn't take long for the rest of the baby dragon to follow.
    //The knight put a hand on his SWORD, but the IRIDESCENT whelp made no hostile moves. It STRETCHED,and finally looked at the knight expectantly, waiting to be fed.
    //then YAWNED, and finally looked at the knight expectantly, waiting to be fed. It occured to the knight, as the
    //hand on his SHEATHED weapon relaxed, that it thought he was its mom.
    //A pang of sympathy hit him in the HEART, and he resolved to adopt this wyrmling and raise it as his own.
    //It was the least he could do.
    //And that is how a FRIENDLY dragon came to be GUARDING the king's BELOVED castle.
   printf("This is a Mad Libs-esque story.\n");
    printf("Enter an adjective : ");
     char lone[50];
     gets(lone);
    printf("A past tense verb : ");
     char RODE[50];
     gets(RODE);
    printf("An adjective : ");
     char TWISTY[50];
     gets(TWISTY);
    printf("A verb ending in ing : ");
     char ROOSTING[50];
     gets(ROOSTING);
    printf("A body part : ");
     char HEAD[50];
     gets(HEAD);
    printf("An adjective : ");
     char DARK[50];
     gets(DARK);
    printf("Another adjective: ");
     char STONY[50];
     gets(STONY);
    printf("An emotion related adjective ending in ing, like amusing, distressing, etc: ");
     char UNNERVING[50];
     gets(UNNERVING);
    printf("A number : ");
     char ONE[50];
     gets(ONE);
    printf("A size : ");
     char TINY[50];
     gets(TINY);
    printf("A sound : ");
     char ROAR[50];
     gets(ROAR);
    printf("An adjective : ");
     char GREY[50];
     gets(GREY);
    printf("An object : ");
     char JAVELIN[50];
     gets(JAVELIN);
    printf("A size : ");
     char LARGE[50];
     gets(LARGE);
    printf("An adjective : ");
     char SHIMMERY[50];
     gets(SHIMMERY);
    printf("Another adjective : ");
     char CURIOUS[50];
     gets(CURIOUS);
    printf("A weapon : ");
     char SWORD[50];
     gets(SWORD);
    printf("An adjective : ");
     char IRIDESCENT[50];
     gets(IRIDESCENT);
    printf("A past tense verb : ");
     char STRETCHED[50];
     gets(STRETCHED);
    printf("Another past tense verb : ");
     char YAWNED[50];
     gets(YAWNED);
    printf("An adjective : ");
     char SHEATHED[50];
     gets(SHEATHED);
    printf("An organ : ");
     char HEART[50];
     gets(HEART);
    printf("An adjective : ");
     char FRIENDLY[50];
     gets(FRIENDLY);
    printf("A verb ending in ing : ");
     char GUARDING[50];
     gets(GUARDING);
    printf("One last adjective : ");
     char BELOVED[50];
     gets(BELOVED);



    printf("\n\n   A/n %s knight %s along the %s slope up to the dragon's cave.\n", lone, RODE, TWISTY);
    printf("His mission was to defeat the dragon %s there, then return its %s to the king he swore fealty to.\n\n",ROOSTING,HEAD);
    printf("   The cave was silent as he neared its %s and %s depths.\nIt was %s.\nThere should have been at least %s %s %s/s as the dragon realized he was there.\nBut instead, there was nothing.\n\n",DARK,STONY,UNNERVING,ONE,TINY,ROAR);
    printf("   As he stepped through the entrance, he realized why.\nThe dragon was lying still on the %s stone, a/n %s stuck in its back.\nSomeone else had gotten to it before him.\n\n",GREY,JAVELIN);
    printf("   To the side of the dragon was a/n %s, %s egg.\nAs he watched, cracks appeared in the surface, and a/n %s snout poked its way through.\nIt didn't take long for the rest of the baby dragon to follow.",LARGE,SHIMMERY,CURIOUS);
    printf("   The knight put a hand on his %s, but the %s whelp made no hostile moves.\nIt %s, then %s, and finally looked at the knight expectantly, waiting to be fed.\n",SWORD,IRIDESCENT,STRETCHED,YAWNED);
    printf("It occurred to the knight, as the hand on his %s weapon relaxed, that it thought he was its mom.\n\n",SHEATHED);
    printf("   A pang of sympathy hit him in the %s, and he resolved to take this wyrmling home with him and raise it as his own.\nIt was the least he could do.\n\n",HEART);
    printf("   And that is how a/n %s dragon came to be %s the king's %s castle.\n\n\nTHE END\n\n\n",FRIENDLY,GUARDING,BELOVED);


   printf("\n\n*****");
   return(0);
}
