query = int(input())

dictionary = {}
sol_list = []

for q in range(0, query):
    n = int(input())
    for rep in range(0, 3):
        for i in range(0, n):
            inp = list(map(str, input().split(' ')))
            subject = inp[0]
            sols = int(inp[1])

            if subject not in dictionary:
                dictionary[subject] = sols
            else:
                dictionary[subject] = dictionary[subject] + sols        

    for subject in dictionary:
        sol_list.append(dictionary[subject])

    out = ""
    for sol in sorted(sol_list):
        out = out + str(sol) + " "
    print(out)

    dictionary.clear()
    sol_list.clear()
