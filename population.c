#include <stdio.h>
#include <math.h>

int main(void){
    int start;
  do {
    start = get_int("start: ");
  } while (start < 9);

 int end;
 do{
  end = get_int("end: ");
 } while (end < start);

int n = start;
int years = 0;
int calculator;

if (start == end) {
        years = 0;
    } else {
        while (n < end) {
            n = round(n + (n / 3.0) - (n / 4.0));
            years++;
        }
    }
    if (years == 1) {
        printf("Years: %i\n", years);
    } else {
        printf("Years: %i\n", years);
    }
}



