x = int(input())
y = int(input())
z = int(input())
n = int(input())
xl = [i for i in range(x + 1)]
yl = [i for i in range(y + 1)]
zl = [i for i in range(z + 1)]
Num = [[i,j,k] for i in xl for j in yl for k in zl if i + j + k != n]
print(Num)
