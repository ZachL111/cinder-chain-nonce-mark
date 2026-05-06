#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {49, 28, 13, 70};
    assert(domain_review_score(item) == 157);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
