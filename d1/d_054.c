#include <stdio.h>
#include <stdlib.h>

/*
 咱们调用malloc和calloc函数,单次申请的内存是连续的,两次申请的两块内存不一定连续。
 有些时候有这种需求，即我先用malloc或者calloc申请了一块内存,我还想在原先内存的基础上挨着继续申请内存。
 或者我开始时候使用malloc或calloc申请了一块内存，我想释放后边的一部分内存。为了解决这个问题，发明了realloc这个函数

 realloc函数
 函数的定义: void*realloc(void *s,unsigned int newsize);
 函数的功能:
在原先s指向的内存基础上重新申请内存，新的内存的大小为new_size个字节，
如果原先内存后面有足够大的空间，就追加，如果后边的内存不够用，则realloc函数会在堆区
找一个newsize个字节大小的内存申请，将原先内存中的内容拷贝过来，然后释放原先的内存，最后返回新内存的地址。
如果newsize比原先的内存小，则会释放原先内存的后面的存储空间,只留前面的newsize个字节
返回值:新申请的内存的首地址

 */
int main() {
    char *p;
    p = (char *) malloc(100);
//    p = (char *) realloc(p, 150);
    p = (char *) realloc(p, 50);//后面50字节被释放掉了

//注意:malloc calloc realloc动态申请的内存，只有在 free或程序结束的时候才释放。
    free(p);
    return 0;
}