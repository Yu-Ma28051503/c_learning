# structureがないのでclass

class Student:
    def __init__(self, id, name, age):
        self.id = id
        self.name = name
        self.age = age
        
    def print_student(self):
        print('ID:', self.id)
        print('Name:', self.name)
        print('Age:', self.age)

class Teacher:
    def __init__(self, id, name, age):
        self.id = id
        self.name = name
        self.age = age
        
    def print_teacher(self):
        print('ID:', self.id)
        print('Name:', self.name)
        print('Age:', self.age)

student1 = Student(100, 'ikepe', 21)
student2 = Student(101, 'hiro', 19)

teacher1 = Teacher(10000, 'yamada', 30)
teacher2 = Teacher(10001, 'tanaka', 35)

student1.print_student()
student2.print_student()

teacher1.print_teacher()
teacher2.print_teacher()
