//1.Arduino程序基本结构由setup() 和loop() 两个函数组成：
//	setup()和loop()
//在setup() 函数中的程序执行完后，Arduino会接着执行loop() 函数中的程序。而loop()函数是一个死循环，其中的程序会不断的重复运行。
//通常我们会在loop() 函数中完成程序的主要功能，如驱动各种模块，采集数据等。


//2.pinMode(pin, mode);
// 参数pin为指定配置的引脚编号；参数mode为指定的配置模式。
// 可使用的三种模式:
// INPUT        输入模式
// OUTPUT        输出模式
// INPUT_PULLUP        输入上拉模式

//3.digitalWrite(pin, value);
// 参数pin为指定输出的引脚编号；参数value为你要指定输出的电平，使用HIGH指定输出高电平，或是使用LOW指定输出低电平。
// Arduino中输出的低电平为0V，输出的高电平为当前Arduino的工作电压。例如Arduino UNO的工作电压为5V，其高电平输出也是5V；
// Arduino Due工作电压为3.3V，所以高电平输出也就是3.3V。

//4.int value = digitalRead(pin);
//数字引脚除了用于输出信号外，还可以用digitalRead() 函数读取外部输入的数字信号，其调用形式为：
//参数pin为指定读取状态的引脚编号；返回值value为获取到的信号状态，1为高电平，0为低电平。
//Arduino UNO会将大于3V的输入电压视为高电平识别，小于1.5V的电压视为低电平识别。
//所以，即使输入电压不太准确，Arduino UNO也可以正常识别。
//需要注意的是，超过5V的输入电压可能会损坏Arduino UNO。（不同型号的Arduino有所不同）

//在Arduino核心库中，OUTPUT被定义等于1，INPUT被定义等于0，HIGH被定义等于1，LOW被定义等于0。
//因此这里也可以用数字替代这些定义。如：

//delay() 为毫秒延时函数，delay(1000) 即延时1秒（1000毫秒），在本程序中用来控制，开关LED的间隔时间。
//你可以自行修改其中的参数，观察实际运行效果。