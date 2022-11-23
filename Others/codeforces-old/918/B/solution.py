db = {}
inp = list(map(int, input().split(' ')[:2]))
n = inp[0]
m = inp[1]

def get_ip(command):
    ip = ""
    for x in command:
        if x != ';':
            ip = ip + x
    return ip

for i in range(0, n):
    inp = list(map(str, input().split(' ')[:2]))
    server = inp[0]
    ip = inp[1]
    db[ip] = server
for i in range(0, m):
    inp = list(map(str, input().split(' ')[:2]))
    command = inp[0]
    ip = get_ip(inp[1])
    server = db[ip]
    # print("command: ", command)
    # print("ip: ", ip)
    # print("server: ", server)
    log = command + " " + ip + "; #" + server
    print(log)