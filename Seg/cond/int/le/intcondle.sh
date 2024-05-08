#!/bin/bash

# 编译C++程序
g++ -O2 -o intcondle intcondle.cpp

# 清空或者创建一个新的时间记录文件
TIME_FILE="times.txt"
> $TIME_FILE

# 执行C++程序多次，这里做100次示例
for i in {1..10000}
do
   # 执行程序并将时间追加到文件
   ./intcondle >> $TIME_FILE
done

# 使用awk计算平均时间、中位数和标准差
awk '{ total += $1; count++ } END { print "Average Time (ms): " total/count }' $TIME_FILE

# 对时间进行排序
sort -n $TIME_FILE > sorted_$TIME_FILE

# 计算中位数
middle_line=$(( $(cat sorted_$TIME_FILE | wc -l) / 2 ))
median=$(awk "NR==$middle_line{print \$1}" sorted_$TIME_FILE)
echo "Median Time (ms): $median"

# 计算标准差
awk '{sum+=$1; sumsq+=$1*$1} END { print "Standard Deviation (ms): " sqrt(sumsq/NR - (sum/NR)**2) }' $TIME_FILE
