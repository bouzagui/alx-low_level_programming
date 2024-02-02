section .data
	hello_school db 'Hello, Holberton', 0

section .text
	extern printf
	global main

main:
	sub rsp, 8

	mov rdi, hello_school
	call printf

	add rsp, 8
	ret
