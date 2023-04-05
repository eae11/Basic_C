#include <stdlib.h>
#include <stdio.h>
struct NPC {
  int hp;
  int mp;
  int damage;
};

struct MONSTER {
  int hp;
  int mp;
  int damage;
  int price;
};
struct ROLE {
  int hp;
  int mp;
  int damage;
  int diamond;

};
int main() {
  char c3[] = {'c', 'a', 'p', 'p'};
  printf("%d\n", sizeof(c3));
  printf("%s\n", c3);
  return 0;
}
