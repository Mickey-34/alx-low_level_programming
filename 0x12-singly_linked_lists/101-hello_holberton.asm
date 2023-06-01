section           .text
        extern    printf

main:
        mov       msg, edi
        call      printf
        mov       0,   eax

section       .data
          msg db 'Hello, Holberton', 0xa, 0
