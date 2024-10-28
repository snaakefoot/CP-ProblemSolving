import os
import shutil

def delete_folders_with_empty_cpp():
    # Get the directory where the script is located
    script_dir = os.path.dirname(os.path.abspath(__file__))
    
    # Loop through each item in the directory
    for item in os.listdir(script_dir):
        item_path = os.path.join(script_dir, item)
        
        # Check if the item is a folder
        if os.path.isdir(item_path):
            # Find the .cpp file in the folder
            cpp_file = None
            for file in os.listdir(item_path):
                if file.endswith(".cpp"):
                    cpp_file = os.path.join(item_path, file)
                    break
            
            # Check if the .cpp file is found and is empty
            if cpp_file and os.path.getsize(cpp_file) == 0:
                # Delete the entire folder
                shutil.rmtree(item_path)
                print(f"Deleted folder: {item_path}")

if __name__ == "__main__":
    delete_folders_with_empty_cpp()
