# ループ処理

print('for loop')
for i in range(10):
    print(i)

i = 0
print('while loop')
while i < 10:
    print(i)
    i += 1

print('do-while loopはない')
print('break')
for _ in iter(int, 1):
    if _ == 5:
        break
    print(_)

print('continue')
i = 0
while True:
    if i == 5:
        i += 1
        continue

    print(i)
    i += 1
    if i == 10:
        break

print('多重ループ')
for i in range(10):
    for j in range(10):
        if j == 5:
            continue
        
        if i == 5:
            break
        print(i, j)
    
    if i == 2:
        continue
    if i == 9:
        break
