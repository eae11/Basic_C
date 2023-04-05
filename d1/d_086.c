#include <stdio.h>

typedef struct Role {
    int HP;
    int MP;
} *PRole;

int main() {
   struct Role user;
//    Role *user2;
//    user2 = &user;
//    user2->MP = 50;
//    user2->HP = 50;

    PRole puser = &user;

    puser->HP = 50;
    puser->MP = 50;

    printf("%d\n",puser->HP);
    printf("%d\n",puser->MP);

}
