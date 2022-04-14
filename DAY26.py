# Enter your code here. Read input from STDIN. Print output to STDOUT
import datetime
D1 = input()
D2 = input()
D1 = D1.split()
D2 = D2.split()
dt_D1 = datetime.datetime(int(D1[2]), int(D1[1]), int(D1[0]))
dt_D2 = datetime.datetime(int(D2[2]), int(D2[1]), int(D2[0]))
result = 0

if dt_D1 < dt_D2:
    result += 0
elif int(D1[2]) > int(D2[2]):
    result += 10000
elif int(D1[1]) > int(D2[1]):
    result += (int(D1[1]) - int(D2[1])) * 500
elif int(D1[0]) > int(D2[0]):
    result += (int(D1[0]) - int(D2[0])) * 15
print(result)
