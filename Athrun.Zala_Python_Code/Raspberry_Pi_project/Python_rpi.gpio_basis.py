import RPi.GPIO as GPIO
#导入树莓派的第三方库

#1.使用GPIO库的setmode方法来设置开发板的引脚模式。
#两种模式：GPIO.BOARD为自然编号 GPIO.BCM 为Broadcom编号

GPIO.setmode(GPIO.BOARD)

#2.将某引脚的电平设置为输出
GPIO.setup(5,GPIO.OUT)

#3.接地直接接GND，代码里不能设置GND口

#4.设置某引脚的电平为高低
GPIO.output(5,GPIO.HIGH)
GPIO.output(5,GPIO.LOW)
