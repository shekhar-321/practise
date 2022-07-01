def mergesort(a,left,mid,right):
    start = left 
    end = right
    # why mid-left+1 is required
    # because if we have 5 len of arr
    # first divide will be in [0-2] [3-5]
    # 0-2 will have 3 element
    # we can also know from fact that if we consider first left as 0 then
    # we need to add + 1 to increase the size of the left_arr
    val = mid-left+1
    # why we need right-mid because 
    # we have called it using mid+1,right
    # so total element would be  right - (mid+1)+1
    # i.e equal to right-mid
    val1 = right-mid
    left_arr = [0]*(mid-left+1)
    right_arr = [0]* (right-mid)

    for i in range(val):
        # why left is required
        # left is required because 
        # left will not always start from zero it can 
        # be starting from mid+1
        # ex [10,9,5,7]
        # in  this in 2nd recursion  level left which might be coming from merge(a,mid+1,right) call
        # left value will be 2 and if we just put i in it it will overwrite the initial array  
        left_arr[i] = a[left+i]
    for i in range(val1):
        # we add from middle element so the middle element to the right
        # of array as we start from mid+1 in right_arr we put 
        # mid+i+1 
        right_arr[i] = a[mid+i+1]


    complete_val = right-left
    start1 = left
    start_left = 0
    start_right = 0
    # why and is needed 
    # if we keep or as the condition check 
    # even if start_right goes beyond val1 we might be accessing it as the 
    # first statement seems to be true and there can be indexing error issued.
    while start_left<val and  start_right<val1:
            if (left_arr[start_left] > right_arr[start_right]):
                a[start1] = right_arr[start_right]
                start_right +=1
            else:
                a[start1]=  left_arr[start_left]
                start_left +=1
            start1 +=1

    while start_left<val:
        a[start1]=left_arr[start_left]
        start_left+=1
        start1 +=1
    while start_right<val1:
        a[start1]=right_arr[start_right]
        start_right+=1
        start1 +=1

    print ("left_array right_array",left_arr,right_arr)    
       
    print ("left= right= arr=",left,right,a)    
    return a                      




def merge(a,left,right):
    if left < right:
        mid = left + (right-left)//2
        merge(a,left,mid)
        merge(a,mid+1,right)
        a=mergesort(a,left,mid,right)


a=[10,9,8,7,6]
merge(a,0,len(a)-1)

#for i in a:
#    print ("val=",i)

    
