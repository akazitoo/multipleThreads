<h1 align="center">Multiple Threads</h1>

<p align="center">
        <span>Process</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>First Step</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Compile</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Run</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Clean</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Explanation</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</p>

---

## ๐ Process

step by step about how to create a multiple threads and get their respective average, minimum and maximum values.

---

## โ๏ธ First Step

```bash
$ git clone https://github.com/akazitoo/multipleThreads.git
$ cd multipleThreads
$ cd folder
```

Cloning the project to local and arriving in the program folder

---

## โ๏ธ Compile

```bash
$ make
```
Create a file 'main'

<br>

OBS: if you don't have 'make' installed

```bash
$ sudo apt install make
```

---

## โ๏ธ Run

```bash
$ make run
```
Run the main file 

---

## ๐งน Clean

```bash
$ make clean
```

Delete the compiled file

---

## ๐ Explanation

Running the main file, at first, it creates the parent thread, then creates the respective child threads, the program must receive the amount of integers and then all values, in this way, it enters the functions, where each thread determines the average of the values, minimum value and maximum value, respectively.