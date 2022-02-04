import pandas as pd

df = pd.read_excel (r'Extract.xls') #place "r" before the path string to address special character, such as '\'. Don't forget to put the file name at the end of the path + '.xlsx'
# print(df.keys)
# print (df['Entitlements'])
flag=0
k1,vr1,vr2,vr3,vr4,vr5,vr6,vr7,vr8,vr9,vr10,vr11,vr12,vr13,vr14,vr15,vr16,vr17,vr18,vr19,vr20,vr21,vr22,vr23,vr24,vr25,vr26,vr27,vr28,vr29,vr30,vr31,vr32,vr33,vr34,vr35,vr36,vr37,vr38,vr39,vr40,vr41,vr42,vr43,vr44,vr45,vr46,vr47,vr48,vr49,vr50=0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;
viol = []
dic = {}
for i in df['Entitlements']:
    val = [str(j) for j in i.split(',')]
    # print(val)
    # print(vr50)
    # df['Identity ID']
    k1=k1+1
    violation_per_person=0
    
    for j in val:
        
        for k in val:
            if j == 'CKSH IND GXC AP MSD Maint' and k == 'CKSH IND GXC AP Superuser':
                violation_per_person=violation_per_person+1
                vr1=vr1+1
                break
        for k in val:
            if j == 'CKSH IND GXC AP MSD Maint' and k == 'CKSH BED ENG MFG Admin':
                violation_per_person=violation_per_person+1
                vr2=vr2+1
                break
        for k in val:
            if j == 'CKSH IND GXC AP MSD Maint' and k == 'CKSH DTR DPQST Shipping Mgr':
                violation_per_person=violation_per_person+1
                vr3=vr3+1
                break
        for k in val:
            if j == 'CKSH AU DIST AP Payments' and k == 'CKSH AU DIST AP Supervisor':
                violation_per_person=violation_per_person+1
                vr4=vr4+1
                break
        for k in val:
            if j == 'CKSH JP DIST AP Payments' and k == 'CKSH JP DIST AP Superuser':
                violation_per_person=violation_per_person+1
                vr5=vr5+1
                break
        for k in val:
            if j == 'CKSH SG COM AP Payments' and k == 'CKSH SG COM AP Superuser':
                violation_per_person=violation_per_person+1
                vr6=vr6+1
                break
        for k in val:
            if j == 'CKSH TH COM AP Payments' and k == 'CKSH TH COM AP Supervisor':
                violation_per_person=violation_per_person+1
                vr7=vr7+1
                break
        for k in val:
            if j == 'CKSH UK IND AP Payments' and k == 'CKSH UK IND AP User':
                violation_per_person=violation_per_person+1
                vr8=vr8+1
                break
        for k in val:
            if j == 'CKSH VN COM AP Payments' and k == 'CKSH VN COM AP Superuser':
                violation_per_person=violation_per_person+1
                vr9=vr9+1
                break
        for k in val:
            if j == 'CKSH BRZ AP Superuser' and k == 'CKSH BRZ AP Vendor Maint':
                violation_per_person=violation_per_person+1
                vr10=vr10+1
                break
        for k in val:
            if j == 'CKSH PHL1 AP Superuser' and k == 'CKSH PHL1 AP Vendor Maint':
                violation_per_person=violation_per_person+1
                vr11=vr11+1
                break
        for k in val:
            if j == 'CKSH PHL1 AP Superuser' and k == 'CKSH P1F PUR ASL Creator':
                violation_per_person=violation_per_person+1
                vr12=vr12+1
                break
        for k in val:
            if j == 'CKSH JP DIST AP Superuser' and k == 'CKSH JP DIST AP Vendor Maint':
                violation_per_person=violation_per_person+1
                vr13=vr13+1
                break
        for k in val:
            if j == 'CKSH UK IND AP Superuser' and k == 'CKSH UK IND AP Vendor Maint':
                violation_per_person=violation_per_person+1
                vr14=vr14+1
                break
        for k in val:
            if j == 'CKSH TH COM AP Superuser' and k == 'CKSH TH COM AP Vendor Maint':
                violation_per_person=violation_per_person+1
                vr15=vr15+1
                break
        for k in val:
            if j == 'CKSH NZ COM AP Superuser' and k == 'CKSH NZ COM AP Vendor Maint':
                violation_per_person=violation_per_person+1
                vr16=vr16+1
                break
        for k in val:
            if j == 'CKSH NL BV AP Superuser' and k == 'CKSH NL BV AP Vendor Maint':
                violation_per_person=violation_per_person+1
                vr17=vr17+1
                break
        for k in val:
            if j == 'CKSH HK COM AR CH App' and k == 'CKSH HK COM OM Setup':
                violation_per_person=violation_per_person+1
                vr18=vr18+1
                break
        for k in val:
            if j == 'CKSH HK COM AR CH App' and k == 'CKSH HK COM PA Super Controller':
                violation_per_person=violation_per_person+1
                vr19=vr19+1
                break
        for k in val:
            if j == 'CKSH UAE DIST AR CH App' and k == 'CKSH APC GL Superuser':
                violation_per_person=violation_per_person+1
                vr20=vr20+1
                break
        for k in val:
            if j == 'CKSH UAE DIST AR CH App' and k == 'CKSH UAE DIST OM Superuser':
                violation_per_person=violation_per_person+1
                vr21=vr21+1
                break
        for k in val:
            if j == 'CKSH BRZ AR CH App' and k == 'CKSH APC GL Analyst':
                violation_per_person=violation_per_person+1
                vr22=vr22+1
                break
        for k in val:
            if j == 'CKSH NZ COM AR CH App' and k == 'CKSH NZ COM PA Super Controller':
                violation_per_person=violation_per_person+1
                vr23=vr23+1
                break
        for k in val:
            if j == 'CKSH SP COM AR CH App' and k == 'CKSH SP COM CE Superuser':
                violation_per_person=violation_per_person+1
                vr24=vr24+1
                break
        for k in val:
            if j == 'CKSH SP COM AR CH App' and k == 'CKSH SP COM STAT GL Superuser':
                violation_per_person=violation_per_person+1
                vr25=vr25+1
                break
        for k in val:
            if j == 'CKSH SP COM AR CH App' and k == 'CKSH SP COM PA Super Controller':
                violation_per_person=violation_per_person+1
                vr26=vr26+1
                break
        for k in val:
            if j == 'CKSH SP COM AR CH App' and k == 'CKSH SP COM SVC Coordinator':
                violation_per_person=violation_per_person+1
                vr27=vr27+1
                break
        for k in val:
            if j == 'CKSH PH COM AR CH App' and k == 'CKSH PHL INV Warehouse Mgr':
                violation_per_person=violation_per_person+1
                vr28=vr28+1
                break
        for k in val:
            if j == 'CKSH DK AR CH App' and k == 'CKSH DK SVC OM Superuser':
                violation_per_person=violation_per_person+1
                vr29=vr29+1
                break
        for k in val:
            if j == 'CKSH COFRR AR CH App' and k == 'CKSH WKF INV Warehouse Mgr':
                violation_per_person=violation_per_person+1
                vr30=vr30+1
                break
        for k in val:
            if j == 'CKSH COFRR AR CH App' and k == 'CKSH WKF MFG Material Specialist':
                violation_per_person=violation_per_person+1
                vr31=vr31+1
                break
        for k in val:
            if j == 'CKSH COFRR AR CH App' and k == 'CKSH W2F MFG Materials Mgr':
                violation_per_person=violation_per_person+1
                vr32=vr32+1
                break
        for k in val:
            if j == 'CKSH COFRR AR CH App' and k == 'CKSH W2F DPQST Shipping Mgr':
                violation_per_person=violation_per_person+1
                vr33=vr33+1
                break
        for k in val:
            if j == 'CKSH COFRR AR CH App' and k == 'CKSH COFRR SVC OM Superuser':
                violation_per_person=violation_per_person+1
                vr34=vr34+1
                break
        for k in val:
            if j == 'CKSH LE DIST AR CH App' and k == 'CKSH LE DIST AR Customer Maintenance':
                violation_per_person=violation_per_person+1
                vr35=vr35+1
                break
        for k in val:
            if j == 'CKSH LE DIST AR CH App' and k == 'CKSH LE DIST STAT GL Superuser':
                violation_per_person=violation_per_person+1
                vr36=vr36+1
                break
        for k in val:
            if j == 'CKSH LE DIST AR CH App' and k == 'CKSH OSD INV Warehouse Admin User':
                violation_per_person=violation_per_person+1
                vr37=vr37+1
                break
    
                # CKSH LE DIST AR CH App

        for k in val:
            if j == 'CKSH LXTIZ AR CH App' and k == 'CKSH APC GL Superuser':
                violation_per_person=violation_per_person+1
                vr38=vr38+1
                break
        for k in val:
            if j == 'CKSH LXTIZ AR CH App' and k == 'CKSH APC SYST ENH GL User':
                violation_per_person=violation_per_person+1
                vr39=vr39+1
                break
        for k in val:
            if j == 'CKSH SHXZ GTIA AR CH App' and k == 'CKSH SHXZ OPS GL Superuser':
                violation_per_person=violation_per_person+1
                vr40=vr40+1
                break
        for k in val:
            if j == 'CKSH SHXZ GTIA AR CH App' and k == 'CKSH SHD INV Warehouse Mgr':
                violation_per_person=violation_per_person+1
                vr41=vr41+1
                break
        for k in val:
            if j == 'CKSH SHXZ GTIA AR CH App' and k == 'CKSH SHXZ GTIA PA Sales Admin':
                violation_per_person=violation_per_person+1
                vr42=vr42+1
                break
        for k in val:
            if j == 'CKSH SHXZ GTIA AR CH App' and k == 'CKSH SHXZ GTIA PA Super Controller':
                violation_per_person=violation_per_person+1
                vr43=vr43+1
                break
        for k in val:
            if j == 'CKSH SHXZ GTIA AR CH App' and k == 'CKSH SHXZ GTIA SVC CON Administrator':
                violation_per_person=violation_per_person+1
                vr44=vr44+1
                break
        for k in val:
            if j == 'CKSH SHXZ GTIA AR CH App' and k == 'CKSH SHXZ GTIA SVC OM Superuser':
                violation_per_person=violation_per_person+1
                vr45=vr45+1
                break
        for k in val:
            if j == 'CKSH PST PHL1 MFG Setup' and k == 'CKSH P1F WMS Mgr':
                violation_per_person=violation_per_person+1
                vr46=vr46+1
                break
        for k in val:
            if j == 'CKSH PST LE DIST MFG Setup' and k == 'CKSH MRS WMS Mgr':
                violation_per_person=violation_per_person+1
                vr47=vr47+1
                break
        for k in val:
            if j == 'CKSH AU DIST MFG Superuser' and k == 'CKSH ATS WMS Mgr':
                violation_per_person=violation_per_person+1
                vr48=vr48+1
                break
        for k in val:
            if j == 'CKSH LE DIST MFG Superuser' and k == 'CKSH HLD WMS Mgr':
                violation_per_person=violation_per_person+1
                vr49=vr49+1
                break
        for k in val:
            if j == 'CKSH PHL1 MFG Superuser' and k == 'CKSH PHS WMS Mgr':
                violation_per_person=violation_per_person+1
                vr50=vr50+1
                break
    # dic[k1]=violation_per_person
    viol.append([violation_per_person, k1])
    
    if(violation_per_person>0): flag=flag+1
    # break
l = [vr1,vr2,vr3,vr4,vr5,vr6,vr7,vr8,vr9,vr10,vr11,vr12,vr13,vr14,vr15,vr16,vr17,vr18,vr19,vr20,vr21,vr22,vr23,vr24,vr25,vr26,vr27,vr28,vr29,vr30,vr31,vr32,vr33,vr34,vr35,vr36,vr37,vr38,vr39,vr40,vr42,vr43,vr44,vr45,vr46,vr47,vr48,vr49,vr50]
sum=0
# print(l)
l.sort()
viol.sort()
print(viol)
print("maximum policy violations are done by")
print(viol[-1])
print(viol[-2])
print(viol[-3])
print(viol[-4])
print(viol[-5])
dic2=dict(sorted(dic.items(),key= lambda x:x[1]))
print(dic2)
for i in l: 
    sum=sum+i
# print(l)
print("what is number of maximum violations",max(l))
print("total violations",sum)
print("people with atleast one violation",flag)