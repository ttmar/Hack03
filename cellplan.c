/**
* Author: Victor Nguyen, Joe Wyrick, Collin Sipple
* Date: 09/06/2018
*
*For the company that need this program on GOOGLE
*
*/


#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main (int argc, char **argv) {

  double dayLeft, averageDatause, idealUse, realData, expected, DataLeft, KeepBelow, proExceed, amountExceed;


double totalData = atof(argv[1]);
double day = atof(argv[2]);
double usedData =  atof(argv[3]);

dayLeft =  (30 - day);
averageDatause = usedData / day;
idealUse = totalData / day;
realData = usedData / day;
expected = (totalData / 30);
DataLeft = (totalData - usedData);
KeepBelow = (DataLeft / dayLeft);
proExceed = (averageDatause * dayLeft);
amountExceed = (proExceed + usedData) - (totalData);

printf("%.0f days used, %.0f days remaining\n", day, dayLeft );
printf("Average daily use: %.1f GB/Day\n", averageDatause );
if (proExceed > DataLeft) { printf("You are exceeding your daily use: (%.1f GB/Day).\nContinuing this high usage, you'll exceed your plan by: %.1f GB \n", expected, amountExceed);
}
else { printf("You're not exceeding your average daily use \n");
}
printf("To stay below your data plan, use no more than %.1f GB/Day. \n", KeepBelow);
   return 0;
}
