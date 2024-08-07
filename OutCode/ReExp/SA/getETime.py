import os
import subprocess
import csv
import time


def compile_cpp_program(source_file, output_executable):
    # Compile the C++ program with -O0 to avoid optimizations
    compile_command = ["g++", "-std=c++11", "-O0", "-o", output_executable, source_file]
    result = subprocess.run(compile_command, capture_output=True, text=True)

    if result.returncode != 0:
        print(f"Compilation failed with errors:\n{result.stderr}")
        return False
    else:
        print(f"Compilation successful: {output_executable}")
        return True


def measure_execution_time(executable_path):
    # Record the start time
    start_time = time.time()

    # Execute the C++ program
    process = subprocess.Popen([executable_path], stdout=subprocess.PIPE, stderr=subprocess.PIPE)

    # Record the end time
    end_time = time.time()

    # Calculate the execution time
    execution_time = end_time - start_time
    return execution_time


def main(directory_path, eTime_csv):
    # 获取文件夹中的所有 .cpp 文件
    cpp_files = [f for f in os.listdir(directory_path) if f.endswith('.cpp')]
    cpp_files.sort()

    # 创建CSV文件并写入标题行
    with open(eTime_csv, mode='w', newline='') as file:
        writer = csv.writer(file)

        # 添加属性名称到第一行
        attributes = []
        attributes.append('eTime')
        writer.writerow(["Filename"] + attributes)

        # 依次编译和执行每个 .cpp 文件，并记录结果
        for cpp_file in cpp_files:
            file_path = os.path.join(directory_path, cpp_file)
            executable_path = os.path.splitext(file_path)[0]
            if compile_cpp_program(file_path, executable_path):
                execution_time = measure_execution_time(executable_path)
            else:
                execution_time = 'Compilation Failed'

            # 添加计数值到CSV行
            counts_row = []
            counts_row.append(execution_time)
            writer.writerow([cpp_file] + counts_row)

    print(f"Results written to {eTime_csv}")


if __name__ == '__main__':
    # 设置要处理的文件夹路径和输出CSV文件路径

    directory_path = '/example_code/CommonCode'
    # directory_path = 'F:\\vissan\\Cost\\example_code\\CommonCode'
    # output_csv = 'C:\\Users\\scnuer\\PycharmProjects\\Cost\\OutCode\\ReExp\\eTime_csv_windows.csv'
    # macos
    directory_path = '/Users/vissan/PycharmProjects/Cost/example_code/CommonCode'
    for i in range(10):
        output_csv = f'/Users/vissan/PycharmProjects/Cost/OutCode/eTime_mac/eTime_csv_macos{i}.csv'
        main(directory_path, output_csv)
