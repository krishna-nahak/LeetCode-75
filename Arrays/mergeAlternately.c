#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2){
  int len1 = strlen(word1);
  int len2 = strlen(word2);
  char* mergedWords = malloc(len1 + len2 + 1);
  int i=0, k=0;

  while(i<len1 && i<len2) {
    mergedWords[k++] = word1[i];
    mergedWords[k++] = word2[i];
    i++;
  }

  while(i<len1) 
    mergedWords[k++] = word1[i++];

  while(i<len2)
    mergedWords[k++] = word2[i++];

  mergedWords[k] = '\0';
  return mergedWords;
}

int main() {

  char word1[100], word2[100];
  scanf("%s", word1);
  scanf("%s", word2);
  printf("%s", mergeAlternately(word1, word2));

  return 0;
}