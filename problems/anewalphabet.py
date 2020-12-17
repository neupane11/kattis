mydictionary={ 
    "a": "@",
    "b": "8",
    "c": "(",
    "d": "|)",
    "e": "3",
    "f": "#",
    "g": "6",
    "h": "[-]",
    "i": "|",
    "j": "_|",
    "k": "|<",
    "l": "1",
    "m": "[]\\/[]",
    "n": "[]\\[]",
    "o": "0",
    "p": "|D",
    "q": "(,)",
    "r": "|Z",
    "s": "$",
    "t": "']['",
    "u": "|_|",
    "v": "\\/",
    "w": "\\/\\/",
    "x": "}{",
    "y": "`/",
    "z": "2"}

def conversion(ch):
    asci=ord(ch)
    if 97 <= asci <= 122:
        return mydictionary[ch]
    if 65 <= asci <= 90:
        return mydictionary[chr(asci+32)]
    return ch
def helper():
    sent=input()
    for i in sent:
       print(conversion(i),end="")
helper()