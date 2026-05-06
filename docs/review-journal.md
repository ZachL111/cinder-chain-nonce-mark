# Review Journal

I treated `cinder-chain-nonce-mark` as a project where the smallest useful behavior should still be inspectable.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 157, lane `ship`
- `stress`: `nonce pressure`, score 182, lane `ship`
- `edge`: `settlement risk`, score 212, lane `ship`
- `recovery`: `proof depth`, score 198, lane `ship`
- `stale`: `event finality`, score 169, lane `ship`

## Note

This file is intentionally plain so the fixture remains the source of truth.
