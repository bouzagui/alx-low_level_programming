section .data
    hello_school db 'Hello, Holberton', 0   ; Null-terminated string
    newline db 10                           ; Newline character
    format db '%s', 0                       ; Format specifier for printf

section .text
    global main
    extern printf

main:
    sub rsp, 8

    mov rdi, format
    mov rsi, hello_school
    call printf

    mov rdi, format
    mov rsi, newline
    call printf

    add rsp, 8
    ret