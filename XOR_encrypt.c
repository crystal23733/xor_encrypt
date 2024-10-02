#include <stdio.h>
#include <string.h>

void encrypt(char *input, char *key);

int main(void) {
  char input[100];
  char key[] = "mysecret";

  // 사용자로부터 암호화할 문자 받기
  printf("암호화할 문자를 입력해주세요:");
  fgets(input, sizeof(input), stdin);
  input[strcspn(input, "\n")] = '\0'; // 개행문자 제거

  printf("원본 문자열: %s\n", input);

  // 암호화 함수 호출
  encrypt(input, key);
  printf("암호화된 결과: %s\n", input);
  return 0;
}

void encrypt(char *input, char *key) {
  int key_length = strlen(key);
  for (int i = 0; i < strlen(input); i++) {
    input[i] = input[i] ^ key[i % key_length];
  }
}
