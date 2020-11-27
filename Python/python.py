import sys

if len(sys.argv) != 3:
    print("Error ")
    exit(1)

string = sys.argv[1]
length = int(sys.argv[2])

count = 0
splits = string.split("_")
for word in splits:
    if len(word) == length:
        count += 1

print(f"The word is {string}")
print(f"Target words: {count}")
