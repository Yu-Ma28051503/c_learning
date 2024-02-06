# 分岐
# if文

number = input("Enter a number: ")
number = int(number)

if number < 10:
    print("The number is less than 10.")
elif number > 100:
    print("The number is greater than 100.")
else:
    print("The number is between 10 and 100.")

# switch文はない
# 代わりにdictionaryを使うけど，　同じことはできない
dict = {1: "one", 2: "two", 3: "three", 4: "four", 5: "five", 6: "six", 7: "seven", 8: "eight", 9: "nine"}
number = number % 10

if number in dict:
    print(dict[number])
else:
    print("The number is zero")
