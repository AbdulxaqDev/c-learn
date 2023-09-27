# C-learn

Simple console dice game. First, it generates random two number and representes total of both. And, asked to guess you with letters (H, L, S) and tells the player guessed right or not.

## How to run it

Use C and C++ Compilers [gcc](https://www.freecodecamp.org/news/what-is-a-compiler-in-c/) to run c code.

[How to Install C and C++ Compilers on Windows](https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/)

[How to Install C and C++ Compilers on Linux](https://linuxconfig.org/how-to-install-g-the-c-compiler-on-ubuntu-18-04-bionic-beaver-linux)

```bash
$ gcc dice.c && ./a.out
```

## Usage

It will ask you to enter one of the belove lettes:

H - Higher

L - Lover

S - Same

And, it gives result based on player guess.

```bash
$ g++ dice.c && ./a.out 

--------------------- DICE 1 --------------------

        First roll of the dice was 4 and 4

                for a total of 8.

-------------------------------------------------

Do yuo think the next roll will be 

H - Higher

L - Lower

S - Same


--------- Enter one of the above letters ---------

s

---------------------  DICE 2 ---------------------

        The second roll was 5 and 5

                for a total of 10.

------------------- Your guess --------------------

        Sorry! 10 is not equal to 8

```

You can play it.

This game print some outputs in different colors. You can get more information about colors in c output here [Adding Color to Your Output From C](https://www.theurbanpenguin.com/4184-2/)