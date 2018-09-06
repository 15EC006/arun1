def min(l,s,e):
	min=999
	for i in range(s,e+1):
		if min>l[i]:
			min=l[i]
	return min
def main():
  n=int(input())
	l=[]
	for i in range(n):
		l.append(int(input()))
	q=int(input())
	out=[]
	for i in range(q):
		s=int(input())
		e=int(input())
		out.append(min(l,s,e))
	for i in out:
  print(i)
  try:
  main()
  except:
  print('invalid')
	
