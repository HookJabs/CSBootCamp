	.text
	.globl toLower
	.type	toLower, @function
toLower:
	mov %rdi, %rax
	cmpb $0x41, %al
	jge less
	jmp done
less:	cmpb $0x5A, %al
	jle add
	jmp done
add:	add $0x20, %al 
done:	ret 
	
