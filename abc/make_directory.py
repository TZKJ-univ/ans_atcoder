import os
import numpy as np

# Specified directory name
dir_name = os.path.dirname(__file__) + "/" + input("Enter the directory name: ")

# Create the directory
os.makedirs(dir_name, exist_ok=True)

# File names to create
extension = ".py"
file_names = [filename + extension for filename in ["a", "b", "c", "d", "e"]]

# Creating each file in the specified directory
for file_name in file_names:
    with open(os.path.join(dir_name, file_name), 'w') as file:
        # Creating an empty file
        pass