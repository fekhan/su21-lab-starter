#Farman Ullah Khan

.globl factorial

.data
n: .word 8

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    li t1, 1        #initialize t1 (result) to be 1 
loop: 
    beqz a0, end    #Exits the loop if a0 == 0 
    mul t1, t1, a0  #multiplies result with the number i.e. result = result * n 
    addi a0, a0, -1 #decrementing the number i.e. n = n-1 
    j loop          #jumps back to loop until a0 equals zero 
end: 
    mv a0, t1       #updates the value of result in a0 for return 
    jr ra           #returns to the caller function 