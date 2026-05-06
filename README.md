# cinder-chain-nonce-mark

`cinder-chain-nonce-mark` treats blockchain tooling as a local verification problem. The C implementation is intentionally narrow, but the fixtures and notes make the behavior explicit.

## Cinder Chain Nonce Mark Checkpoints

Treat the compact fixture as the contract and the extended examples as a scratchpad. The code should stay boring enough that a change in behavior is obvious from the test output.

## Architecture Notes

The core is a scoring model over demand, capacity, latency, risk, and weight. That keeps contract state, event replay, and invariant checks in one explicit decision path. The threshold is 163, with risk penalty 6, latency penalty 3, and weight bonus 3. The C implementation keeps headers, source, and assertions separate so bounds and types are easy to review.

## What This Is For

The repository exists to keep a technical idea small enough to reason about. The implementation avoids external dependencies where possible, then uses fixtures to make changes easy to review.

## Useful Pieces

- Uses fixture data to keep event replay changes visible in code review.
- Includes extended examples for invariant checks, including `surge` and `degraded`.
- Documents settlement rules tradeoffs in `docs/operations.md`.
- Runs locally with a single verification command and no external credentials.
- Stores project constants and verification metadata in `metadata/project.json`.

## Case Study

The examples are meant to be readable before they are exhaustive. They cover enough variation to show how latency and risk can pull a decision below the threshold.

## Project Layout

- `src`: primary implementation
- `tests`: verification harness
- `fixtures`: compact golden scenarios
- `examples`: expanded scenario set
- `metadata`: project constants and verification metadata
- `docs`: operations and extension notes
- `scripts`: local verification and audit commands

## Tooling

Use a normal shell with C available on `PATH`. The verifier is written as a PowerShell script because the portfolio was assembled on Windows.

## Local Workflow

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

This runs the language-level build or test path against the compact fixture set.

## Quality Gate

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/audit.ps1
```

The audit command checks repository structure and README constraints before it delegates to the verifier.

## Scope

The repository favors determinism over breadth. It does not pull live data, keep secrets, or depend on network access for verification.

## Expansion Ideas

- Split the scoring constants into a typed configuration object and validate it before use.
- Add a comparison mode that shows how decisions change when one signal is adjusted.
- Add a loader for `examples/extended_cases.csv` and promote selected cases into the language test suite.
- Add one more blockchain tooling fixture that focuses on a malformed or borderline input.
