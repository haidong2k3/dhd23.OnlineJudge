### 
clang++ --version
lldb --version

2 task cần quan tâm
- build & run -> code và test nhanh
=> chạy bằng command trên terminal: input bằng terminal hoặc file
- debug -> sai logic
=> input bằng file


###
[terminal]
> clang++ -std=c++17 main.cpp -o main && ./main
=> code & test nhanh

###
[terminal]
> clang++ -std=c++17 main.cpp -o main
> ./main
=> build & run separately

###
[shortcut] 
F5
=> debug

### compile & run tối giản
- Compile
> clang++ -std=c++17 -O2 main.cpp -o main

- Run (input từ file)
> ./main < input.txt

### Compile cho debug
clang++ -std=c++17 -g -O0 problem.cpp -o solve


