# 演算

a = 101
b = 23

# 四則演算
print('a + b:', a + b)  # 足し算
print('a - b:', a - b)  # 引き算
print('a * b:', a * b)  # 掛け算
print('a / b:', a / b)  # 割り算
print('a % b:', a % b)  # 余り
print('a // b:', a // b)  # 商
print('a ** b:', a ** b)  # べき乗

# 代入演算
a += b  # a = a + b
print('a += b:', a)
a = 101
a -= b  # a = a - b
print('a -= b:', a)
a = 101
a *= b  # a = a * b
print('a *= b:', a)
a = 101
a /= b  # a = a / b
print('a /= b:', a)
a = 101
a %= b  # a = a % b
print('a %= b:', a)
a = 101
a //= b  # a = a // b
print('a //= b:', a)
a = 101
a **= b  # a = a ** b
print('a **= b:', a)
a = 101

# インクリメント・デクリメント
print('a++:', a + 1)  # インクリメント
print('a--:', a - 1)  # デクリメント

# 比較演算
print('a == b:', a == b)  # 等しい
print('a != b:', a != b)  # 等しくない
print('a > b:', a > b)  # より大きい
print('a < b:', a < b)  # より小さい
print('a >= b:', a >= b)  # 以上
print('a <= b:', a <= b)  # 以下

# 論理演算
print('a and b:', a and b)  # 論理積
print('a or b:', a or b)  # 論理和
print('not a:', not a)  # 否定
#print('a in b:', a in b)  # 含まれる
#print('a not in b:', a not in b)  # 含まれない
print('a is b:', a is b)  # 同じか
print('a is not b:', a is not b)  # 同じでないか
print('a & b:', a & b)  # ビット積
print('a | b:', a | b)  # ビット和
print('a ^ b:', a ^ b)  # 排他的論理和
print('a << 2:', a << 2)  # 左シフト
print('a >> 2:', a >> 2)  # 右シフト
print('~a:', ~a)  # ビット反転
