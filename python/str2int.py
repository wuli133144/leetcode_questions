class Solution(object):
  
    __slots__ = ("_map")
    def __int__(self):
       # self._map={'0':0,'1':1,'2':2,'3':3,'4':4,'5':5,'6':6,'7':7,'8':8,'9':9}

        pass
    def myAtoi(self,str):
        sum=0
        _map = {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9}
        l=[x for x in str ]
        for y in l:
            sum=sum*10+_map[y]

        return sum

def stringToString(input):
    return input[1:-1].decode('string_escape')

def intToString(input):
    if input is None:
        input = 0
    return str(input)

def main():
    import sys
    def readlines():
        for line in sys.stdin:
            yield line.strip('\n')
    lines = readlines()
    while True:
        try:
            line = lines.next()
            str = stringToString(line)
            
            ret = Solution().myAtoi(str)

            out = intToString(ret)
            print out
        except StopIteration:
            break

if __name__ == '__main__':
    main()