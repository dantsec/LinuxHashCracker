<h1 align="center">
  🦂 Linux Hash Cracker 
</h1>

<p align="center">
  <img alt="GitHub language count" src="https://img.shields.io/github/languages/count/Dantalion-dev/LinuxHashCracker">

  <!-- <img alt="Repository size" src="https://img.shields.io/github/repo-size/Dantalion-dev/LinuxHashCracker"> -->
  
  <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/Dantalion-dev/LinuxHashCracker">

  <img alt="License" src="https://img.shields.io/badge/license-MIT-brightgreen">
</p>

<p align="center">
  <a href="#-technologies">Technologies</a>&nbsp;&nbsp;&nbsp;•&nbsp;&nbsp;&nbsp;
  <a href="#-project">Project</a>&nbsp;&nbsp;&nbsp;•&nbsp;&nbsp;&nbsp;
  <a href="#%EF%B8%8F-installation">Installing</a>&nbsp;&nbsp;&nbsp;•&nbsp;&nbsp;&nbsp;
  <a href="#-how-to-use">How to use</a>&nbsp;&nbsp;&nbsp;•&nbsp;&nbsp;&nbsp;
  <a href="#-contributing">Contributing</a>&nbsp;&nbsp;&nbsp;•&nbsp;&nbsp;&nbsp;
  <a href="#-license">License</a>
</p>

<h2 align="center">🚀 Technologies</h2>

_This project was developed with the following technologies_:

- C language

<h2 align="center">💻 Project</h2>

- _This is a project that I developed for my studies of linux hashes._

<h2 align="center">♟️ Installation</h2>

```sh
# cloning repository
git clone https://github.com/Dantalion-dev/LinuxHashCracker

# enter on folder 
cd LinuxHashCracker/

# installing "make"
sudo apt update && sudo apt install make

# compiling
make

```

<h2 align="center">🍀 How to use</h2>

```sh
# using
./hash_cracker <wordlist_path>

examples:

# hash for this example: $1$C.O8tO68$HOR08j8SCGSVc67div3qA/

  ./hash_cracker wordlists/rockyou.txt

  Hash: $1$C.O8tO68$HOR08j8SCGSVc67div3qA/
  Salt: $1$C.O8tO68$

              ...OBFUSCATED...
         [+] Found Password: toor
                [*] Finished!


```

![](https://media.discordapp.net/attachments/732350657243381810/837026010791804989/unknown.png)
![](https://media.discordapp.net/attachments/732350657243381810/837026482651922452/unknown.png)

<h2 align="center">🔨 Contributing</h2>

_How can I contribute to the project?_

```sh
1. Create a fork from PlanetInfo repository.
2. git clone https://github.com/your/LinuxHashCracker.git
3. cd LinuxHashCracker/
4. Make your changes.
5. Commit and make a git push.
6. Open a pull request.
```

<h2 align="center">📝 license</h2>

_This project is under the [MIT License](LICENSE)._
