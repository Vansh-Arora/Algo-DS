n = int(input())
values = input().split()
values = [int(i) for i in values]
V = []
for i in range(n+1):
    V.append([])
    for j in range(n+1):
        if i == 0 or j == 0:
            V[i].append(0)
        elif j<=i:
            vals = values[i-j:i]
            temp = max(sum(vals) * min(vals), V[i-1][j])
            V[i].append(max(V[i-1][j],V[i][j-1],temp))
        else:
            V[i].append(max(V[i-1][j],V[i][j-1]))

print(V[n][n])