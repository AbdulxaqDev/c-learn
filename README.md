# C-learn

Simple password verifier. It cheks password that include lower and upper case letters, digits, special characters and pass word length.

[see the code](https://github.com/AbdulxaqDev/c-learn/blob/main/passwordValidation.c)

## How to run it

Use C and C++ Compilers [gcc](https://www.freecodecamp.org/news/what-is-a-compiler-in-c/) to run c code.

[How to Install C and C++ Compilers on Windows](https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/)

[How to Install C and C++ Compilers on Linux](https://linuxconfig.org/how-to-install-g-the-c-compiler-on-ubuntu-18-04-bionic-beaver-linux)

```bash
$ gcc passwordValidation.c && ./a.out
```

## Usage

It will ask a username and password.

And, gives feedback based on your password.

```bash
$ gcc passwordValidation.c && ./a.out 

what is your username?
John

Please create a password: 13574&^###########

You shoudl consider a new password John

Make shure you include uppercase and lowercase

letters, digits and special charackters.

```

You can play around to check all feedbacks.
