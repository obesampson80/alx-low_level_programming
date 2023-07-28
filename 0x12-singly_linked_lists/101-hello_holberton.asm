; Declare needed C functions
extern printf

section .data
    my_message db "Hello, Holberton", 0 ; Define the string variable named my_message
    format_string db "%s", 10, 0       ; Define the format string with newline

section .text ; Code section
global main ; The standard gcc entry point

main:       ; The program label for the entry point
    push rbp ; Set up the stack frame

    ; Pass the arguments to printf
    mov rdi, format_string ; First argument: the format string
    mov rsi, my_message    ; Second argument: the string to print

    ; Call printf
    call printf

    ; Clean up the stack and return
    pop rbp   ; Restore stack frame
    xor rax, rax ; Set return value to 0 (indicating successful execution)
    ret       ; Return


