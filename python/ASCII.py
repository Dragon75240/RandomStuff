def encrypt_bin(string):
    return ' '.join(string[i:i+8] for i in range(0,len(string),8))

with open("trying.py","r") as f:
    st = f.read().encode("utf-8")

print("The string is:", st)

res = ''.join(format(i, 'b') for i in bytearray(st))

print("The binary equivalent is:", encrypt_bin(res))