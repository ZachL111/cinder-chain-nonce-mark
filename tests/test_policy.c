#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {53, 83, 18, 18, 6};
    assert(score_signal(signal_case_1) == 45);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {97, 77, 18, 15, 4};
    assert(score_signal(signal_case_2) == 139);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {68, 74, 11, 5, 10};
    assert(score_signal(signal_case_3) == 177);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
