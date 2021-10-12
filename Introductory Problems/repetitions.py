DNA = input()

count, last_count = 1, 1

last_w = DNA[0]
for w in range(1, len(DNA)):
    if DNA[w] == last_w:
        count +=1
    else:
        count = 1
    
    if count > last_count:
        last_count = count
    
    last_w = DNA[w]


print(last_count)