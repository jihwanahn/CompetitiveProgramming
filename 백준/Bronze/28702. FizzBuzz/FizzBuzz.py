for i in range(3, 0, -1):  # i = 3, 2, 1 (3번 반복)
    x = input()  # 사용자 입력 받기
    if x not in ['Fizz', 'Buzz', 'FizzBuzz']:  # 입력값이 Fizz, Buzz, FizzBuzz가 아니라면
        n = int(x) + i  # 숫자로 변환 후 i를 더함
        print('Fizz'*(n % 3 == 0) + 'Buzz'*(n % 5 == 0) or n)  # FizzBuzz 판별 후 출력
        break