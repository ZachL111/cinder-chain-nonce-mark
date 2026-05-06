# Cinder Chain Nonce Mark Walkthrough

This note is the quickest way to read the extra review model in `cinder-chain-nonce-mark`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 157 | ship |
| stress | nonce pressure | 182 | ship |
| edge | settlement risk | 212 | ship |
| recovery | proof depth | 198 | ship |
| stale | event finality | 169 | ship |

Start with `edge` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

`edge` is the optimistic case; use it to make sure the scoring path still rewards strong signal.
