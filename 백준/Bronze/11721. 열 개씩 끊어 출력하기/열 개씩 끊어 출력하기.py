res = input()  # 단어 입력받기
for i in range(0, len(res), 10):
    print(res[i:i+10]) # 10글자씩 잘라서 출력