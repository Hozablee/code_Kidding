.model small
.dosseg
.stack 100h
.code
start:
	mov ah,01h
	int 21h
	mov dl,al
	mov ah,02h
	int 21h
	mov ax,4C00h
	int 21h
end start
