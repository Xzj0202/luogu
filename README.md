<div align="center">

# 洛谷题解集

**用 C++17 记录每一道题的思考**

[![C++17](https://img.shields.io/badge/C%2B%2B-17-00599C?style=flat-square&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Luogu](https://img.shields.io/badge/%E6%B4%9B%E8%B0%B7-luogu.com.cn-3498db?style=flat-square)](https://www.luogu.com.cn/)
[![Problems](https://img.shields.io/badge/%E9%A2%98%E7%9B%AE-48-2ea44f?style=flat-square)](#-%E9%A2%98%E7%9B%AE%E7%B4%A2%E5%BC%95)
[![Lines](https://img.shields.io/badge/%E4%BB%A3%E7%A0%81-1397_%E8%A1%8C-6f42c1?style=flat-square)](#-%E7%BB%9F%E8%AE%A1)
[![Last Commit](https://img.shields.io/github/last-commit/Xzj0202/luogu?style=flat-square&label=%E6%9C%80%E8%BF%91%E6%8F%90%E4%BA%A4&color=orange)](https://github.com/Xzj0202/luogu/commits/main)

</div>

---

## 关于

这个仓库是我刷[洛谷](https://www.luogu.com.cn/)的题解存档，每道题一个 `.cpp` 文件，按 `P_题号.cpp` 命名。

**不是标准答案。** 这里存的是我自己写通的版本 —— 有的直白，有的绕，有的现在回头看还能再优化。留着是为了以后回头翻：这道题当时是怎么想的，坑踩在哪。

---

## 快速开始

### 环境

| 项目 | 说明 |
| :--- | :--- |
| 编译器 | GCC 16 — [w64devkit](https://github.com/skeeto/w64devkit) |
| 语言标准 | C++17 |
| 编辑器 | VSCode + [C/C++ 扩展](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) |

### 命令行

```bash
# 编译。-O2 是洛谷评测机用的优化级别，本地保持一致
g++ -std=c++17 -O2 -Wall -o build/P_1425.exe P_1425.cpp

# 拿样例跑一遍
./build/P_1425.exe
```

### 在 VSCode 里

| 想做什么 | 怎么按 | 背后发生的事 |
| :--- | :--- | :--- |
| **编译并运行** | `Ctrl+Alt+N` | `-O2 -Wall` 编译到 `build/`，在集成终端里执行 —— `cin` 可以直接敲 |
| **打断点调试** | `F5` | 改用 `-O0 -g` 重新编译，带上调试符号，断点和变量才看得准 |

两条路产物都落在 `build/`，源码旁边不会堆一排 `.exe`。配置都在 [`.vscode/`](.vscode/) 里，跟着仓库一起走 —— 换台电脑 clone 下来就能直接跑。

---

## 目录结构

```
luogu/
├── P1055.cpp                  # 题解：P_题号.cpp
├── P1075.cpp
├── ⋮
├── .vscode/                   # 编译 / 调试配置，进版本库
│   ├── tasks.json             #   F5 的编译任务
│   ├── launch.json            #   调试器配置
│   └── c_cpp_properties.json  #   IntelliSense（锁定 C++17）
├── .cph/                      # 样例测试数据，已 gitignore
├── build/                     # 编译产物，已 gitignore
└── .gitignore
```

---

## 题目索引

按题号区间分组，点题号跳转洛谷原题。

| 区间 | 题号 |
| :--- | :--- |
| **P1000 – P1999** | [P1055](https://www.luogu.com.cn/problem/P1055) · [P1075](https://www.luogu.com.cn/problem/P1075) · [P1085](https://www.luogu.com.cn/problem/P1085) · [P1217](https://www.luogu.com.cn/problem/P1217) · [P1420](https://www.luogu.com.cn/problem/P1420) · [P1422](https://www.luogu.com.cn/problem/P1422) · [P1424](https://www.luogu.com.cn/problem/P1424) · [P1425](https://www.luogu.com.cn/problem/P1425) · [P1690](https://www.luogu.com.cn/problem/P1690) · [P1720](https://www.luogu.com.cn/problem/P1720) · [P1873](https://www.luogu.com.cn/problem/P1873) · [P1980](https://www.luogu.com.cn/problem/P1980) |
| **P2000 – P2999** | [P2433](https://www.luogu.com.cn/problem/P2433) · [P2513](https://www.luogu.com.cn/problem/P2513) |
| **P3000 – P3999** | [P3954](https://www.luogu.com.cn/problem/P3954) |
| **P4000 – P4999** | [P4414](https://www.luogu.com.cn/problem/P4414) |
| **P5000 – P5999** | [P5704](https://www.luogu.com.cn/problem/P5704) · [P5705](https://www.luogu.com.cn/problem/P5705) · [P5706](https://www.luogu.com.cn/problem/P5706) · [P5707](https://www.luogu.com.cn/problem/P5707) · [P5708](https://www.luogu.com.cn/problem/P5708) · [P5709](https://www.luogu.com.cn/problem/P5709) · [P5710](https://www.luogu.com.cn/problem/P5710) · [P5711](https://www.luogu.com.cn/problem/P5711) · [P5712](https://www.luogu.com.cn/problem/P5712) · [P5713](https://www.luogu.com.cn/problem/P5713) · [P5714](https://www.luogu.com.cn/problem/P5714) · [P5715](https://www.luogu.com.cn/problem/P5715) · [P5716](https://www.luogu.com.cn/problem/P5716) · [P5717](https://www.luogu.com.cn/problem/P5717) · [P5718](https://www.luogu.com.cn/problem/P5718) · [P5719](https://www.luogu.com.cn/problem/P5719) · [P5720](https://www.luogu.com.cn/problem/P5720) · [P5721](https://www.luogu.com.cn/problem/P5721) · [P5722](https://www.luogu.com.cn/problem/P5722) · [P5723](https://www.luogu.com.cn/problem/P5723) · [P5724](https://www.luogu.com.cn/problem/P5724) |
| **P6000 – P6999** | [P6013](https://www.luogu.com.cn/problem/P6013) · [P6568](https://www.luogu.com.cn/problem/P6568) |
| **P9000 – P9999** | [P9572](https://www.luogu.com.cn/problem/P9572) |
| **P10000 – P10999** | [P10223](https://www.luogu.com.cn/problem/P10223) |
| **P11000 – P11999** | [P11251](https://www.luogu.com.cn/problem/P11251) |
| **P13000 – P13999** | [P13049](https://www.luogu.com.cn/problem/P13049) |
| **P14000 – P14999** | [P14684](https://www.luogu.com.cn/problem/P14684) · [P14752](https://www.luogu.com.cn/problem/P14752) |
| **P15000 – P15999** | [P15078](https://www.luogu.com.cn/problem/P15078) |
| **P16000 – P16999** | [P16874](https://www.luogu.com.cn/problem/P16874) |
| **P17000 – P17999** | [P17311](https://www.luogu.com.cn/problem/P17311) |

---

## 统计

| 题目数 | 代码行数 | 题号跨度 | 起始日期 |
| :---: | :---: | :---: | :---: |
| **48** | **1,397** | P1055 – P17311 | 2026-09-27 |

---

## 关于代码

题解随便看，但**别直接交**。洛谷有查重，抄了大概率两边一起挂 —— 而且这道题就白刷了。卡住的时候瞄一眼思路，然后关掉自己重写，才是这些代码唯一的用法。

题目版权归洛谷及各出题人所有，本仓库只存放我自己的解题代码。
