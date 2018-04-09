#include <math.h>
#include <stdio.h>
#include <string.h>

void print_case(int number);
int is_special(int number);
int is_perfect(int number);
int is_Germain_prime(int number);
int is_lower_pair_prime(int number);
int is_prime(int number);
int is_palindrome(int number);

int *prime_list() {
  int primes[] = {0};
  int i = 0;
  for (i = 0; i < 100; i++) {
  }
}

void math_facts(int first_num, int sec_num) {
  int i;
  printf("The range:\n");
  for (i = first_num; i <= sec_num; i++) {
    printf("\t%8d ", i);
    print_case(i);
    printf(" number.\n");
  }
}

void print_case(int number) {
  if (is_special(number)) {
    printf("Special");
  } else if (is_perfect) {
    printf("Perfect");
  } else if (is_prime) {
    if (is_Germain_prime) {
      printf("Germain prime");
    } else if (is_lower_pair_prime) {
      printf("Lower pair prime");
    } else {
      printf("Prime");
    }
  } else if (is_palindrome) {
    printf("Palindrom");
  }
}

int is_special(int number) { return number == 1; }

int is_perfect(int number) {}

int is_Germain_prime(int number) {}

int is_lower_pair_prime(int number) {}

int is_prime(int number) {}

int is_palindrome(int number) {
  int i;
  int number_len = floor(log10((double)number)) + 1;
  char number_string[9] = {0};
  int is_not_pal = 0;
  sprintf(number_string, "%d", number);
  for (i = 0; i < number_len; i++) {
    if (is_not_pal) {
      return 0;
    }
    if (number_string[i] != number_string[number_len - i]) {
      is_not_pal == 1;
    }
  }
}