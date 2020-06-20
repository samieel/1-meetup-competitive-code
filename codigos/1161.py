# https://www.urionlinejudge.com.br/judge/pt/problems/view/1161
from math import factorial

while True:
    try:
        n, m = map(int, input().split())
        print(factorial(n) + factorial(m))
    except EOFError:
        break
