# code

 Command-line companion application for VSCode to create, save and open files created via code CLI.

 ## Compile and run!

 > You can also download compiled binary for Windows & Linux from [Releases](https://github.com/CheapNightbot/code/releases/latest)

If on Debian/Ubuntu based Linux distro, insall "build-essential" by running:

```bash
sudo apt install -y build-essential
```

It will install GCC compiler and MAKE. Then simply run:
```bash
make code
```
OR 
```bash
gcc -o code code.c
```
and then run binary with `./code filename`.

### For Linux:

- Move the compiled binary to your home directory; `mv <path-to-compiled-code ~/`.
- Create an alias for it in your `.bashrc` / `.zshrc` file: `alias code="~/code"`
- You can now use `code` command from anywhere..
 - `code` | `code .` | `code hello.py`

---

At the end, it all might seem stupid, but it was bothering me that running `code` command (VSCode one) doesn't save the file on disk when run from terminal like `code hello.c` until you hit `ctrl + s`. So, I created this, not very well made CLI program, WHICH WORKS! ;)
