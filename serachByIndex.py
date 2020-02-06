def search_by_index(lst,num):
    finds = 0
    while(finds<=len(lst)):
        if num==lst[finds]:
            return finds
        else:
            finds = finds+1
