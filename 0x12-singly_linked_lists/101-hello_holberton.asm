section .data
	hello_school db 'Hello, Holberton', 10, 0

section .text
	global main
	extern printf

main:
	sub rsp, 0

	mov rdi, hello_school
	call printf

	add rsp, 0
	ret
