#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include "ordering.h"



int main (int argc, const char** argv) {
  int a[1000000], i;
  //system("python test.py");
  for(i=0; i<1000000; i++)
  {
    a[i] = i;
  }

  printVector(a,1000000);

  shuffle(a,1000000);

  printVector(a,1000000);

  return 0;
}