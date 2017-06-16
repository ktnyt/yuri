#include <stdio.h>
#include <string.h>

#include "親.h"

int main(int argc, char* argv[]) {
  if(argc > 1) {
    char* cmd = argv[1];

    if(strcmp(cmd, "妊娠")) {
      printf("%sが%sの子を妊娠しました。\n", tachi, neko);
      return 0;
    }

    if(strcmp(cmd, "出産")) {
      printf("%sが%sの子を出産しました。\n", tachi, neko);
      return 0;
    }
  }

  printf("百合 コマンド一覧\n");
  printf("  妊娠: 妊娠します。\n");
  printf("  出産: 出産します。\n");

  return 0;
}
