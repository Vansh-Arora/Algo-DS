n = int(input())
values = input().split()
values = [int(i) for i in values]
V = []
# Making an n*n matrix
for i in range(n+1):
    V.append([])     # adding n rows
    for j in range(n+1):  # in columns
        if i == 0 or j == 0:   # making 1st row and column 0
            V[i].append(0)

        # following condition is for cases only when number of elements
        # to be considered is less than number of elements in current list
        elif j<=i:
            vals = values[i-j:i]    # making a list of size j, upwards from current index    
            temp = max(sum(vals) * min(vals), V[i-1][j])
            V[i].append(max(V[i-1][j],V[i][j-1],temp))
        else:
            V[i].append(max(V[i-1][j],V[i][j-1]))

print(V[n][n])