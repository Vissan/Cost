import os

# Define the path to the CodeForces directory
directory_path = '/Users/vissan/PycharmProjects/Cost/example_code/CommonCode'

# Get a list of all the .exe files in the directory
exe_files = [f for f in os.listdir(directory_path) if f.endswith('.exe')]

# Remove all .exe files
for exe_file in exe_files:
    file_path = os.path.join(directory_path, exe_file)
    try:
        os.remove(file_path)
        print(f"Removed {file_path}")
    except Exception as e:
        print(f"Failed to remove {file_path}: {e}")

print("Remove completed.")
