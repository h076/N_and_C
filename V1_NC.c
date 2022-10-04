#include <stdio.h>

void Play()
void PrintBoard()

int main()
{
    Play();
    return 0;
}

void Play()
{
    bool playing = true;
    char continuer;
    while(playing == true)
    {
        PrintBoard();
        printf("Would you like to continue? (Y/N) : ");
        scanf(continuer&);
    }
}