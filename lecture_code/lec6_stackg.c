#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "lec6_stackg.h"

void stackNew(stack *s) {
        s->logicLen = 0;
	s->allocLen = 4;
        s->elemSize = 4;
        s->elems = malloc(4*s->elemSize);
        assert(s->elems != NULL);

}
void stackDispose(stack *s) {
    free(s->elems);
}

void stackPush(stack *s, void* vp) {
    if (s->allocLen == s->logicLen) {
        s->allocLen *= 2;
        s->elems = realloc(s->elems, s->elemSize*s->allocLen);
        assert(s->elems != NULL);
    }
    void* target = (char*)s->elems + s->elemSize*s->logicLen;
    memcpy(target, vp, s->elemSize);
    s->logicLen++;
}

void stackPop(stack *s, void* elemAddr) {
    assert(s->logicLen > 0);
    s->logicLen--;
    void *source = ((char*)s->elems + s->elemSize*s->logicLen);
    memcpy(elemAddr, source, s->elemSize);
}
int main() {
        stack s;
        stackNew(&s);

        for (int i = 0; i < 5; i++) {
            stackPush(&s, &i);
        }
        int ans;
        stackPop(&s, &ans);
        printf("%d", ans);
        stackDispose(&s);
        return 0;
}

