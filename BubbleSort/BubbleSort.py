n = int(raw_input().strip())
a = map(int, raw_input().strip().split(' '))
tot = 0
for i in range(n):
    cnt = 0
    for j in range(1,n):
        if a[j-1] > a[j]:
            cnt += 1
            a[j-1],a[j]=a[j],a[j-1]
    if cnt==0:
        break
    tot += cnt
print 'Array is sorted in %d swaps.' % tot
print 'First Element: %d' % a[0]
print 'Last Element: %d' % a[-1]