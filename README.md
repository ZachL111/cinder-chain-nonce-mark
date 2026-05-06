# cinder-chain-nonce-mark

`cinder-chain-nonce-mark` is a C project in blockchain tooling. Its focus is to implement a C blockchain tooling project for nonce incremental indexing, using append-only fixtures and checkpoint recovery checks.

## Why I Keep It Small

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how event finality and settlement risk should influence a review result.

## Cinder Chain Nonce Mark Review Notes

For a quick review, compare `settlement risk` with `event finality` before reading the middle cases.

## Included Behavior

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/cinder-chain-nonce-walkthrough.md` walks through the case spread.
- The C code includes a review path for `settlement risk` and `event finality`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Internal Model

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The added C path is deliberately direct, with fixtures doing most of the explaining.

## Try It Locally

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Validation

The verifier is intentionally local. It should fail if the fixture score math, lane assignment, or language-specific test drifts.

## Scope

This remains a local project with deterministic fixtures. It does not depend on credentials, hosted services, or live data. Future work should add richer malformed inputs before widening the public API.
