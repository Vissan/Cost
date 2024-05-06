import subprocess
import statistics
import math

# 编译C++程序
subprocess.run(["g++", "-O2", "-o", "intcondle", "intcondle.cpp"])

# 清空或者创建一个新的时间记录文件
TIME_FILE = "times.txt"
open(TIME_FILE, 'w').close()

# 执行C++程序多次，这里做5000次示例
for i in range(5000):
    # 执行程序并将时间追加到文件
    result = subprocess.run(["./intcondle"], capture_output=True, text=True)
    time = float(result.stdout.strip())
    if time != 0:  # 只有时间不为0时才写入文件
        with open(TIME_FILE, 'a') as file:
            file.write(str(time) + '\n')

# 读取时间记录文件中的时间数据
with open(TIME_FILE, 'r') as file:
    times = [float(line.strip()) for line in file]

# 计算平均时间
average_time = statistics.mean(times)
print("Average Time (ms):", average_time)

# 计算中位数
median_time = statistics.median(times)
print("Median Time (ms):", median_time)

# 计算标准差
standard_deviation = statistics.stdev(times)
print("Standard Deviation (ms):", standard_deviation)
