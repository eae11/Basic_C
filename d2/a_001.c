#include <stdio.h>
int main() {

/*  int myvariable;

  printf("Enter a number:");
  fflush( stdout );
  scanf("%d", &myvariable);
  printf("%d", myvariable);*/

  int myvariable;

//  setbuf(stdout, NULL);

  printf("Enter a number:");
  scanf("%d", &myvariable);
  printf("%d", myvariable);
  printf("%s\n", "哈哈");
  return 0;
}