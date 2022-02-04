import pandas as pd

df = pd.read_excel (r'Extract.xls') #place "r" before the path string to address special character, such as '\'. Don't forget to put the file name at the end of the path + '.xlsx'
# print(df.keys)
# print (df['Entitlements'])
flag=0
k1,vr1,vr2,vr3,vr4,vr5,vr6,vr7,vr8,vr9,vr10,vr11,vr12,vr13,vr14,vr15,vr16,vr17,vr18,vr19,vr20,vr21,vr22,vr23,vr24,vr25,vr26,vr27,vr28,vr29,vr30,vr31,vr32,vr33,vr34,vr35,vr36,vr37,vr38,vr39,vr40,vr41,vr42,vr43,vr44,vr45,vr46,vr47,vr48,vr49,vr50=0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;

dic = {}
flag=0
for i in df['Entitlements']:
    val = [str(j) for j in i.split(',')]
    # print(val)
    # print(vr50)
    if len(val)>3: flag=flag+1

print(flag)