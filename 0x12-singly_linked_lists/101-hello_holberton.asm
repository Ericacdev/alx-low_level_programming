Section .data

	message db "Hello, Holberton", 10

	Section .text

	global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, msglen
	syscall
