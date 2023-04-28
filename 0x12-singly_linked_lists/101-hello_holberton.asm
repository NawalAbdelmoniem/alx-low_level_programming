global main
extern printf
main:
edi, format
eax, eax
call printf
eax, 0
ret
format: db `Hello, Holberton\n`,0
