section .data
    hello_string db "Hello, Holberton",0

section .text
    global main

extern printf
main:
    push rdi         ; Save registers
    push rsi
    mov rdi, hello_string  ; Load address of hello_string into rdi
    call printf      ; Call printf
    pop rsi          ; Restore registers
    pop rdi
    xor eax, eax     ; Return 0
    ret
