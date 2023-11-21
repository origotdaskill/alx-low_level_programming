section .data
    hello db "Hello, Holberton", 10 ; 10 is the ASCII code for newline character

section .text
    global main

main:
    ; Call printf with the format string
    mov rdi, hello ; format string address
    mov rax, 0     ; syscall number for printf
    call printf

    ; Exit the program
    mov rax, 60    ; syscall number for exit
    xor rdi, rdi   ; exit code 0
    syscall

