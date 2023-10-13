gpasm -c LED.ASM
gpasm -c FLA.ASM
gpasm -c FLB.ASM
gplink -s 16c556.lkr LED.o FLA.o FLB.o -o gen -m -c
gpvc gen.cod >gen.codv
gpvo gen.cof >gen.cofv
