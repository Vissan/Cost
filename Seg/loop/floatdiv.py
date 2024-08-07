import subprocess
import statistics
import math

# 编译C++程序
subprocess.run(["g++", "-O2", "-o", "loop", "loop.cpp"])

# 清空或者创建一个新的时间记录文件
TIME_FILE = "times.txt"
open(TIME_FILE, 'w').close()

# 执行C++程序多次，这里做5000次示例
for i in range(5000):
    # 执行程序并将时间追加到文件
    result = subprocess.run(["./loop"], capture_output=True, text=True)
    time = float(result.stdout.strip())
    if time != 0:  # 只有时间不为0时才写入文件
        with open(TIME_FILE, 'a') as file:
            file.write(str(time) + '\n')

print("finish")