def the_missing(listnumber):
    mis_number = []
    before = listnumber[0]
    for current_number in listnumber:
        if current_number > before+1:
            for missing in range (before+1,current_number):
                mis_number.append(missing)
                before = current_number
        else:
            before = current_number
    return mis_number
if __name__ == "__main__":
    a = the_missing([23,30])
    print(a)
