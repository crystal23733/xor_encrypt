#include <stdio.h>
#include <string.h>

void encrypt(char input[], char key[]);

int main(void) {
  char str[100];
  char my_key[] = "mysecret";
  printf("암호화할 문자를 입력해주세요:");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  encrypt(str, my_key);
  printf("암호화된 결과: %s\n", str);
  return 0;
}

void encrypt(char input[], char key[]) {
  int key_length = strlen(key);
  for (int i = 0; i < strlen(input); i++) {
    input[i] = input[i] ^ key[i % key_length];
  }
}
