section .data
	fmt db "%s", 10, 0
	msg db "Hello, Holberton", 0

        section .text		;Data section
	extern printf		;The function to be called
	global main		;The standard gcc entry point

main:				;The program label for entry point
	push	rbp		;Sets up stack frame, must be alligned
	mov	rsi, msg
	mov	rdi, fmt
	mov	rax, 0
	call	printf		;Calls C function
	pop	rbp		;Restores stack
	mov	rax, 0		;Normal, no error and so return value
	ret
