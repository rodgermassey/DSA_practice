#!/bin/python3

def binary_search( _list, item):
    
        low = 0
        high = len(_list) - 1

        while( low <= high):
        
            mid = (low + high)//2
            if(_list[mid] == item):
            
                print("we found your item :", item)
                break
            
            elif (_list[mid] < item):
            
                low = mid + 1
                #print("im running 1") 
            else:
            
                high = mid -1
                #print("im running 2")
        if(_list[mid] != item ):
            print("the item you're looking for is not in the list")

my_list = []
num = int (input ("enter a number"))
while(num != -1 ):
    
        #print("hello")
        my_list.append(num)  
        num = int(input("Enter a number to fill the list or press -1 to exit "))
    
item = int(input("enter the number you want to search for : "))

my_list.sort()
binary_search(my_list,item)
        
    
