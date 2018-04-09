#include "io.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  int answer = ' ', enter = ' ';
  int wrong_tries = 0;
  printer();
  while (1) {
    scanf("%d", &answer);
    switch (answer) {
    case 0:
      choice_0();
      return 0;
    case 1:
      choice_1();
      break;
    case 2:
      choice_2();
      break;
    case 3:
      choice_3();
      break;
    default:
      default_message(&wrong_tries);
    }
  }
  return 0;
}
