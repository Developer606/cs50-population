#include <cs50.h>
#include <stdio.h>
int population(int populations);

int main(void)
{

    int Start_input;
    do
    {
        Start_input = get_int("Enter the starting  population size: "); //Prompt for Strt size
    }
    while (Start_input < 9);
    int End_input;
    do
    {
        End_input = get_int("Enter the end population size: "); //Prompt for end size
    }
    while (End_input < Start_input);

    int Present_population = Start_input;

    int number_of_years = 0;
    for (number_of_years = 0; Present_population < End_input; number_of_years++)
    {
        int population_container = population(Present_population);
        Present_population = population_container;
    }
    printf("It Will Take " "Years: %i \n", number_of_years); // Here print how much in years it will take to achieve the end population
}
int population(int populations) // this function return of increased population by 1 year
{
    int x = populations / 3;
    int y = populations / 4;
    int population_increased = x - y;
    int increased_population_count = populations + population_increased;
    return increased_population_count;
}