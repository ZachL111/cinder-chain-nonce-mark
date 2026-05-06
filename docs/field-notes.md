# Field Notes

The useful part of this repository is the small rule set around event finality and settlement risk.

The domain cases cover `event finality`, `nonce pressure`, `settlement risk`, and `proof depth`. They sit beside the smaller starter fixture so the project has both a compact scoring check and a domain-flavored review check.

`edge` tells me the happy path still works. `baseline` tells me whether the guardrail still has teeth.

The language-specific addition keeps the review model in a header and source pair with assertion tests.
