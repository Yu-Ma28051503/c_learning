# ファイルの入出力をする

with open('file1.txt', 'r') as f:
    print(f.read())

with open('file2.txt', 'w') as f:
    f.write('I am crazy, I suppose, Jerusalem in the grip of madness.\n')

with open('file3.txt', 'a') as f:
    f.write('Before she turned five, ten maidservants had fallen into a century of slumber.\n')
