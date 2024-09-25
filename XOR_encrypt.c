#include<stdio.h>
#include<string.h>

char encrypt(char enc);

int main(void)
{
  char str[100];
  printf("암호화할 문자를 입력해주세요.");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  for(int i = 0; str[i] != '\0'; i++){
    
  }
}

