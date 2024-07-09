# Linux Hash Cracker @ C + Crypt Project 🦂

- **Linux Hash Cracker** is tool for cracking Linux passwords, which, based on a wordlist and the hash/salt of the password, we can crack it and return a result, in plain text, of the password in question.
- Created in _27 / 04 / 2021_.

## Authors 👥

- For more information see my blog and my contributions to community.
  - [**@dantsec**](https://www.github.com/dantsec)

## Tech Stack 🧑‍💻

- This project was developed with the following technologies:
  - [**C**](https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html) (Main Language)
  - [**Make**](https://www.gnu.org/software/make/manual/make.html) (Utilitary)

## Documents 📂

- [**MIT License**](./LICENSE)

## Installation / Run Locally ⚙️

- **Important**: First of all, you must have [**C compiler**](https://gcc.gnu.org/) and [**Make utilitary**](https://www.gnu.org/software/make/) installed.

- Clone and enter in the project:
```bash
git clone https://github.com/dantsec/LinuxHashCracker.git && cd LinuxHashCracker/
```

- Run `Makefile`
```bash
# To compile all.
make all
# To clean all.
make clean
```

## Example of Use 🔎

```sh
# Executing binary.
./hash_cracker "wordlist_path"

# Hash Example: $1$C.O8tO68$HOR08j8SCGSVc67div3qA/
./hash_cracker wordlists/wordlist.txt

Hash: $1$C.O8tO68$HOR08j8SCGSVc67div3qA/
Salt: $1$C.O8tO68$

              ...OBFUSCATED...
         [+] Found Password: toor
                [*] Finished!
```

## Contributing 🛠️

```bash
# Create a fork from MagicPantry repository and clone it.
git clone https://github.com/YOUR_USERNAME/LinuxHashCracker.git
# Enter into the folder.
cd LinuxHashCracker/
# Create a new branch with the name feat-[WHAT_YOUR_FEAT_DO].
git checkout -b feat-[WHAT_YOUR_FEAT_DO]
# Make your changes and commit them.
git add . && git commit -m "YOUR_COMMIT_MESSAGE"
# Push and open a pull request.
git push origin [YOUR_BRANCH_NAME]
```
