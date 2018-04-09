#include "mathFacts.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu_reprinting_message();

void printer() {
  puts("The menu :\n0. Exit.\n1. Print menu again.\n2. Number details in "
       "range.\n3. Layers square printing.\nPlease enter your choice :");
}

void choice_0() {
  printf("bye bye !!\n");
  exit(0);
}

void choice_1() { printer(); }

void choice_2() {
  int first_num = 0, sec_num = 0;
  int lower_limit = 10, higher_limit = 150;
  do {
    printf("please enter the 1st int positive number (up to 8 digits):\n");
    scanf("%d", &first_num);
  } while ((first_num < 1) || (first_num > 99999999));

  do {
    printf("please enter the 2nd positive number between %d and %d:\n",
           first_num + lower_limit, first_num + higher_limit);
    scanf("%d", &sec_num);
  } while ((sec_num < first_num + lower_limit) ||
           (sec_num > first_num + higher_limit));

  math_facts(first_num, sec_num);

  printf("Now enter a new menu input ");
  menu_reprinting_message();
}

void choice_3() { printf("I'm 3!\n"); }

void default_message(int *tries_number) {
  *tries_number += 1;
  if (*tries_number == 5) {
    printf("You have made 5 menu errors, ");
    menu_reprinting_message();
    choice_0();
  }
  printf("Wrong input, please try again ");
  menu_reprinting_message();
}

void menu_reprinting_message() {
  printf("(enter 1 for re-printing the menu):\n");
}
