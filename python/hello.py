# 色々な関数でHello, World!を出力する

import sys

print('Hello, World!')
sys.stdout.write('Hello, World!\n')
sys.stdout.buffer.write(b'Hello, World!\n')
print('Hello, World!', file=sys.stdout)
