#include <stdio.h>

struct bracelet
{
    int num_beads;
    int letter_beads;
    double size;
    char initial;
};

int main(void)
{
    struct bracelet friendship;
    friendship.num_beads = 10;
    friendship.letter_beads = 5;
    friendship.size = 12.3;
    friendship.initial = 's';
}