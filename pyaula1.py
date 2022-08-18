""""
# tupla

a = (1, 2, 3)
print(a)
print(type(a))

s = 'string legal'

a = enumerate(s)
print(next(a))
print(next(a))
print(next(a))
print(next(a))
for  ind ,el  in enumerate(s):
    print(el*(ind+1))

for c1  in range(len(s)):
    print(s[c1])
"""
""""
a =[1, 3, 2, 'string legal']

b = a [2]
a[3]=100
a.sort() #não pode ter string dentro da lista
print(type(a))
print(len(a))
print(a)

a = [1,2,3,4,5]
b =[6,7,8,9]
print(a+b)
print(a*3)
"""
"""
a = [1,2,3,4,5]
b =[6,7,8,9]
c = a*3
print(len(c))
a.insert(2, 100)#primeiro numro é onde sera comocado e o segundo é o valor que sera colocado
print(a)
a.append(200) #adiciona elementos no final da lista
print(a)
d = a.pop()
print(a)
print(d)
"""
"""
a = [1,2,3,4,5]
print(a.index(3))
s='string'
a.extend(s)
print(a)
"""
"""
a = [el for el in range(1,31) if el % 3==0]
print(a)

b = [el if el % 2== 0 else 'x'  for el in range(1,31)]
print(b)
"""
"""
b = [el if el % 2!= 0 else 'pin'  for el in range(1,100)]
print(b)
"""
c =['pim pam' if el % 2==0 and  el % 3==0
else 'pim' if el % 2==0
else 'pam' if el % 3==0
else el for el in range(1,100)]
print(c)
