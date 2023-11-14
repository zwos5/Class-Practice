import practice

test = input('Hello what would you like to print? ')
test1 = input('What greeting would you like to print? ')

x = practice.Practice(test,test1)

print('What is printing: ')
print(x.message)
print(x.greeting)