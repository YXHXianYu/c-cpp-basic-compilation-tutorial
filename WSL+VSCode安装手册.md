# WSL+VSCode安装手册

> 俞贤皓 2023.11.20

* 一份比较简易的安装手册
  * 参考 [微软 - WSL安装](https://learn.microsoft.com/zh-cn/windows/wsl/install) 与 [VSCode - Developing in WSL](https://code.visualstudio.com/docs/remote/wsl)

* 多谢张cy舍友的电脑

## 1. 什么是WSL

* 全称：Windows Subsystem for Linux
* 作用：在Windows操作系统中提供Linux操作系统的环境

## 2. 安装WSL

* 环境：Windows 11 专业版 22621.2715 x64
* 按下 `ctrl` + `R`，打开运行窗口
* 输入 `cmd`，打开命令提示符/终端
* 输入 `wsl --install -d Ubuntu-22.04`，开始安装WSL（发行版为Ubuntu 22.04 LTS）
* 等待一段时间后，会提示一下内容
  * <img src="./WSL+VSCode%E5%AE%89%E8%A3%85%E6%89%8B%E5%86%8C/P92N2CC0HY1ETO66%25Y%60U7.png" alt="img" style="zoom:67%;" />
* **重启电脑！**
* 按下 `win` 键，在搜索框输入 `ubuntu`，选择Ubuntu 22.04.2 LTS并打开
* 接下来按提示完成基本配置
* 等待一段时间后，若提示一下内容，则wsl安装成功！
  * <img src="./WSL+VSCode%E5%AE%89%E8%A3%85%E6%89%8B%E5%86%8C/TR75%7DMIWE0FWL%7DD6FVDU_L.png" alt="img" style="zoom:67%;" />
* 这个时候，你的电脑中就有一个 **Linux环境** 了。

## 3. 安装VSCode

* 自己装一下就好了
  * [官网链接](https://code.visualstudio.com)
* 打开VSCode，在左侧的扩展(Extension)菜单中，搜索 `wsl`，选择第一个并安装
  * <img src="./WSL+VSCode%E5%AE%89%E8%A3%85%E6%89%8B%E5%86%8C/WVD6R_T527S@9D3%7BWRF1ZLD.png" alt="img" style="zoom:67%;" />‘

## 4. WSL+VSCode

* 登入WSL后，在终端输入 `code`
* 若自动打开vscode，则成功！
  * <img src="./WSL+VSCode%E5%AE%89%E8%A3%85%E6%89%8B%E5%86%8C/2.png" alt="2" style="zoom:50%;" />

## 5. 配置GCC编译环境

* 在VSCode中，按下 `ctrl` + `~`，打开VSCode内置终端

  * <img src="./WSL+VSCode%E5%AE%89%E8%A3%85%E6%89%8B%E5%86%8C/3.png" alt="3" style="zoom: 50%;" />

* 在终端中输入以下命令

  ```bash
  sudo apt update
  sudo apt install build-essential # 需要按下回车确认
  ```

* 在终端中输入 `gcc --version`，若出现以下内容，则安装成功
  * <img src="./WSL+VSCode%E5%AE%89%E8%A3%85%E6%89%8B%E5%86%8C/4-1700489666252-9.png" alt="4" style="zoom:67%;" />

## 6. 使用wsl+vscode进行开发

* 在VSCode终端中输入 `code main.c`，打开一个名为 `main.c` 的文件

  * 往 `main.c` 中写入以下内容

    ```c
    #include <stdio.h>
    
    int main() {
        printf("Hello, wsl!\n");
        return 0;
    }
    ```

  * 输入完毕后，按 `ctrl` + `s` 保存

* 继续在终端中输入以下内容

  ```bash
  gcc main.c -o my_program # 编译：使用gcc编译main.c文件，编译结果命名为my_program
  ./my_program # 运行
  ```

* 若出现以下内容，则编译与运行成功

  * <img src="./WSL+VSCode%E5%AE%89%E8%A3%85%E6%89%8B%E5%86%8C/5.png" alt="5" style="zoom: 80%;" />