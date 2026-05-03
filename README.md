# 🎯 Guess Number Game

一个使用 C 语言编写的简单猜数字小游戏。

## 📌 项目简介

本项目实现了一个经典的“猜数字”游戏：
- 程序会随机生成一个数字
- 玩家通过输入数字进行猜测
- 程序会提示“太大”或“太小”
- 直到猜中为止

## 🛠 使用技术

- C 语言
- 模块化编程（多个 .c 和 .h 文件）
- Makefile（用于编译项目）

## 📂 项目结构
guess_game/ ├── main.c ├── GuessNumber.c ├── MakeNumber.c ├── IsRight.c ├── IsValidNum.c ├── *.h ├── Makefile.win └── README.md

## ▶️ 如何运行

### 方法一：使用 Dev-C++
1. 打开 DEV cpp
2. 点击运行

### 方法二：使用命令行编译
```bash
gcc main.c GuessNumber.c MakeNumber.c IsRight.c IsValidNum.c -o guess_game
./guess_game
