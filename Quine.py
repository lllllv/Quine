t = "tmp = chr(116) + chr(32) + chr(61) + chr(32) + chr(34)\nlst = t.split(chr(10))\nfor i in lst:\n    tmp = tmp + i\n    tmp = tmp + chr(92) + chr(110)\ntmp = tmp[:-2]\ntmp = tmp + chr(34)\nfmt = chr(32)\nfmt = fmt[:-1]\nprint(tmp)\nprint(t, end=fmt)\n\nWE_CAN_DO_OTHER_CACULATE1=1\nWE_CAN_DO_OTHER_CACULATE2=2"
tmp = chr(116) + chr(32) + chr(61) + chr(32) + chr(34)
lst = t.split(chr(10))
for i in lst:
    tmp = tmp + i
    tmp = tmp + chr(92) + chr(110)
tmp = tmp[:-2]
tmp = tmp + chr(34)
fmt = chr(32)
fmt = fmt[:-1]
print(tmp)
print(t, end=fmt)

WE_CAN_DO_OTHER_CACULATE1=1
WE_CAN_DO_OTHER_CACULATE2=2