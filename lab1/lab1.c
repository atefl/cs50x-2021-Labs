#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startSize;
    int endSize;
    // TODO: Prompt for start size
    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    // TODO: Prompt for end size
    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    // TODO: Calculate number of years until we reach threshold
    int years, born, death; 
    int population = startSize;
    for (years = 0; population < endSize; years++)
    {
        born = population / 3;
        death = population / 4;
        population = population + born - death;
    }
    
    // TODO: Print number of years
    printf("Years: %d", years);
}
