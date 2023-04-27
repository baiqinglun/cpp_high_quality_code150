# 改善C++程序的150个建议

## 01、不要让main函数返回void

main函数返回值说明程序的退出状态，返回0说明执行完毕正常退出，否则不正常；

1、返回void，在vc编译器上通过（不规范），gcc不通过

```c++
void main(){
    return 0;
}
```

2、在linux上，测试以下两段代码

```c++
int main(){
    return 0;
}
```

执行`g++ main.cpp`，之后打开可执行文件`./a.out && echo "success"`，发现正常输出success

```c++
int main(){
    return -1;
}
```

执行`g++ main.cpp`，之后打开可执行文件`./a.out && echo "success"`，不输出success

> 说明程序出现异常，返回-41，程序不能正常返回

## 02、区分0的4种面孔

1、整型0：占据32位的空间；

2、空指针NULL（宏）：`int* pValue = 0`是合法的；

3、字符串结束标志'\0'，具有唯一性；

```c++
char str[12] = {"Hello C/C++"};
if(str[11] == '\0')
{
    cout << "相同" << endl; // 输出：相同
}
```

4、逻辑FALSE/false

FALSE（宏）是int类型：二进制表（00000000 00000000 00000000 00000000）

false是bool类型：二进制表（0）
