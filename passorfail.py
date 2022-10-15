n=int(input("Enter the number of subjects: "))
m=int(input("Enter the number of students: "))

a={}

e=[]
for j in range(m):
    name=input("Enter the student name: ")
    b=0
    for i in range(n):
        c=int(input("Enter the marks: "))

        if c>40:
            b=b+c
            print(b)
            marks=b/n
            a.update({name:marks})
            
        else:
            e.append(name)
            break
        
d=dict(sorted(a.items(),key=lambda item:item[1],reverse=True))

print("The ranking is: ",d.keys())

print("The students who failed are: ")
for i in range(len(e)):
    print(e[i])



