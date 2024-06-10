import os

def main():
    print("Enter the name of file that you want to open for writting purpose :")
    File_name = input()
    
    if os.path.exists(File_name):
           fobj = open(File_name,"r")
           if fobj:
               print("File succesfully opened  in the read mode")
               
               print("Data from file is")
               for Line in fobj:
                   print(Line)
               
               fobj.close()
           else:
               print("Unable to open file")
    else:
        print("There is no such file")
      
if __name__ == "__main__":
    main()