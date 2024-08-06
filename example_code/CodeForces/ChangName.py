import os

# Define the path to the CodeForces directory
directory_path = '/Users/vissan/PycharmProjects/Cost/example_code/CodeForces'

# Get a list of all the cpp files in the directory
cpp_files = [f for f in os.listdir(directory_path) if f.endswith('.cpp')]

# Sort the files to ensure they are in the correct order
cpp_files.sort()

# Rename the files to a sequential naming scheme
for index, filename in enumerate(cpp_files, start=1):
    new_name = f"{index}.cpp"
    old_file = os.path.join(directory_path, filename)
    new_file = os.path.join(directory_path, new_name)
    os.rename(old_file, new_file)
    print(f"Renamed '{filename}' to '{new_name}'")

print("Renaming completed.")
