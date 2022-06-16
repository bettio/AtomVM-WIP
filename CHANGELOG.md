# Changelog
All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

## [0.5.1] - Unreleased
### Fixed
- Fix `gen_statem`: Cancel outstanding timers during state transitions in
  order to prevent spurious timeout messages from being sent to `gen_statem`
  process.
- Fix missing Elixir libraries: examvlib was not packed into atomvmlib.avm
- Fix `bs_context_to_binary`: match offset wasn't used, leading in certain situations to infinite loops
  while matching binaries.
- Fix how `start` option was handled from `bs_restore2` instruction: last saved match offset was
  used instead of match starting offset, causing some bytes being skipped.
- Fix another potential bug when doing pattern matching using code compiled with OTP 21.
- [ESP32] [UART]: Allow using different pins for rx, tx, cts and rts.
- [ESP32] [UART]: Replace custom UART handling with esp-idf UART event queues, hence other UARTs
  than UART0 are supported, with better performances and stability.
- Added new function for atom comparison, useful when writing 3rd party components.

## [0.5.0] - 2022-03-22
