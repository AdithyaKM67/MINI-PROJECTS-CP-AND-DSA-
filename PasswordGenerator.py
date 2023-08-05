import random
import string
print("Welcome to the password generator")
x=int(input("How many letters do you want in your password? "))
y=int(input("How many numbers do you want in your password? "))
z=int(input("How many symbols do you want in your password? "))
password=""
num=""
let=""
sym=""
for i in range(x):
 password+=random.choice(string.ascii_letters)
for i in range(y):
 password+=random.choice(string.digits)
for i in range(z):
 password+=random.choice(string.punctuation)
password="".join(random.sample(password,x+y+z))
print("This is your password as per your requirements:")
print(password)