#include <stdio.h>
#include <stdlib.h>
#include <time.h>



// function return a random char

char ranchar() {
   int word = rand()%26;
   char arry[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
   char i = arry[word];

return i;
}
