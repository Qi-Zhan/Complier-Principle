# ZJU 2022 Spring Compiler-Principle



## Usage


```bash
make
./SSC your_file
git add .
git commit -m "mes"
git push -u origin main
clang -cc1 -ast-dump mytest.c
clang -S -emit-llvm mytest.c
```


Support Features--just a toy

* one dimension array
* function definition and use
* type: int float void 
* global/local variable

see folder `test` for detail


## Requirements
```
linux
clang++
llvm 12
```