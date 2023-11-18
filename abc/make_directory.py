import os

# Specified directory name
dir_name = input("Enter the directory name: ")

# Create the directory
os.makedirs(dir_name, exist_ok=True)

# File names to create
file_names = ["a.cpp", "b.cpp", "c.cpp", "d.cpp"]

# Creating each file in the specified directory
for file_name in file_names:
    with open(os.path.join(dir_name, file_name), 'w') as file:
        # Creating an empty file
        pass

# Checking if the files are created
created_files = os.listdir(dir_name)
created_files
