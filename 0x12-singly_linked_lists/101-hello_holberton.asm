global main

extern printf
section .data
	hello db 'Hello, Holberton', 0
	format db 'Hello, Holberton\n', 0

section .text
	global main
	extern printf
main:
	mov rdi, format
	mov rsi, hello
	xor rax, rax
	call printf
	mov eax, 0
	ret
