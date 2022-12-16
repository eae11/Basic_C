static int num = 11;

int funA(void) {
    return num;
}

static int funB(void) {//不会被调用
    return 7;
}