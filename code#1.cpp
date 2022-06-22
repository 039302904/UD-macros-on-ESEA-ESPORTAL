.code
my_ntui proc
    mov r10, rcx
    mov eax, 107Fh
    push rbx
    mov rbx, 7FFE0308h
    mov rbx, [rbx]
    test bl_1
    pop rbx
    jnz test_result
    syscall
    ret
    test_result:
    int 2Eh
    ret
    my_ntui endp
    
    my_me proc
       mov rax, rsp
       sub rsp, 58h
       and dword ptr [rax - 38h], 0
       and dword ptr [rax - 20h], 0
       mov.     [rax-2Ch], r8d
       mov.    r8d,28h
       mov.    [rax-24h], ecx
       mov.    [rax-30h], edx
       lea.    rdx, [rsp + 58h - 38h]
       mov.    [rax-28h], r9d
       mov.    rax, [rsp+58h+28h], rax
       lea.    ecx,.[r7-28h]
       mov.    [rsp+58h-18h], rax
       call my_ntui
       nop.    dword ptr [rax+rax+00h]
       add.    rsp, 58h
       ret
my_me endp;

end


