; 101-hello_holberton.asm
; Assembly program to print "Hello, Holberton" followed by a new line using printf.

section .data
    format db "Hello, Holberton", 0xA, 0  ; Format string with message and newline
    format_len equ $ - format             ; Calculate the length of the format string

section .text
    global main                           ; Entry point

    extern printf                        ; External reference to printf function

main:
    push rbp                              ; Save base pointer
    mov rdi, format                       ; Load address of format string into rdi
    call printf                           ; Call printf function with format string
    pop rbp                               ; Restore base pointer
    ret                                   ; Return from main

