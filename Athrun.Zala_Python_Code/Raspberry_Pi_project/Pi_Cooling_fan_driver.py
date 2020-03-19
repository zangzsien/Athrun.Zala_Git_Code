#!/usr/bin/python3
#coding:utf8

#自动风扇控制程序，使用wringPi的gpio命令来操作GPIO


import subprocess,time

#控制风扇的GPIO
FAN_GPIO = 15

subprocess.getstatusoutput('sudo gpio mode ' + str(FAN_GPIO) + ' OUTPUT')
while True:
    tmpFile = open('/sys/class/thermal/thermal_zone0/temp')
    cpu_temp_raw = tmpFile.read()
    tmpFile.close()
    cpu_temp = round(float(cpu_temp_raw)/1000,1)
    print(cpu_temp)
    #如果温度大于47℃，就启动风扇
    if cpu_temp >= 47:
        subprocess.getstatusoutput('sudo gpio write '+str(FAN_GPIO)+' 0')
     #如果温度小于40`C，就关闭风扇
    if cpu_temp <= 40 :
        subprocess.getstatusoutput('sudo gpio write '+str(FAN_GPIO)+' 1')
    
    time.sleep(10)
