n = int(input())
fn = n
for i in range(1, n-1, 1):
	fn *= (n-i)
print(fn)