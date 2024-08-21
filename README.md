# code

 Command-line companion application for VSCode to create, save and open files created via code CLI.

 ## Compile and run!

If on Debian/Ubuntu based Linux distro, insall "build-essential" by running:

```bash
sudo apt install -y build-essential'
```

It will install GCC compiler and make. Then simply run `make code` and then run binary with `./code filename`.

You can add it to the environment PATH variable and can run simply from any directory with `code` command. It might conflict with the actual VSCode's code command. So, to prevent that, you can give this one priority by moving it above the VSCode's path variable.

At the end, it all might seem stupid, but it was bothering me that running `code` command (VSCode one) doesn't save the file on disk when run from terminal like `code hello.c` until you hit `ctrl + s`. So, I created this, not very well made cli program, WHICH WORKS! ;)
