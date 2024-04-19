#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int start;
  do
  {
    start = get_int("start: ");
  }
 while (start < 9);

 int end;
 do
 {
  end = get_int("end: ");
 }
 while (end < start);

int n = start;
int years = 0;
int calculator;

if (start == end)
{
  printf(" years = 0");
}
 do
    {
        n = round(n + (n / 3) - (n / 4));
        years += 1;

    }
    while (n < end);
    printf("Years: %i",  years);
}




