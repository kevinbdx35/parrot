# Parrot Cipher

A C program that encrypts and decrypts text using the "parrot" cipher algorithm.

## Technologies

- C (C99)
- Code::Blocks

## How It Works

The parrot cipher encrypts a source text using a key word (the "parrot"). Each character of the source is encoded by computing the ASCII difference with the corresponding character of the key (cycling through the key as needed).

| Element | Example |
|---------|---------|
| Source text | Olivier |
| Parrot key | abcd |
| Encoding | `('O'-'a')('l'-'b')('i'-'c')('v'-'d')('i'-'a')('e'-'b')('r'-'c')` |
| Result | Concatenation of ASCII codes |

## Files

- `source.txt` — plaintext input
- `dest.crt` — encrypted output
- `peroq.def` — parrot key definition

## Getting Started

Open `parrot.cbp` in Code::Blocks and build the project.

## Improvements

- Fixed type error: `char parrot = ""` → `char parrot[MAX]` in `menu.c`
- Fixed typo: `decryt` → `decrypt` in `header.h`, `decrypt.c`, and `menu.c`
- Removed double semicolon at end of `while` loop in `menu.c`

## License

MIT
