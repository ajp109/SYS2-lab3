#include <stdio.h>

uint32_t wordcount(char const * string) {
  uint32_t words = 0;

  return words;
}

int main(void) {

  // This text contains 11 words.
  char const * text = "This is a  word count test.\nHere is the second line !";
  printf("The text is:\n%s\n", text);
  printf("It contains %d words.\n", wordcount(text));

  return 0;
}

