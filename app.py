mydict={"Set":"Collection of data", "Abnegation":"Renouncing a belief","Aggrandize":"Enhance Power","Blandishment":"Intentional Flattery for persuasion", "Callous":"Disregard for others"}
print("Dictonary: ",mydict)
key=input("Enter the key to search for: ")
for i in mydict.keys():
    if (i==key):
        print("/nKey exist in this dictonary")
        print(mydict[key])
        break
    else:
        flag=1
if flag==1:
    print("does not exist")