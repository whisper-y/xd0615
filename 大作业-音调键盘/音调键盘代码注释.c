int pos = 0;            //定义变量pos并赋值为0

void setup()
{                       //下四行代码的引脚为ARDUINO上引脚
  pinMode(A0, INPUT);   //将A0引脚设置为输入
  pinMode(8, OUTPUT);   //将8号引脚设置为输出
  pinMode(A1, INPUT);   //将A0引脚设置为输入
  pinMode(A2, INPUT);   //将A0引脚设置为输入
}

/*

解释tone函数：
  在引脚上产生指定频率（和50%占空比）的方波。
  可以指定持续时间，否则波将继续，直到调用noTone（）为止。
  该引脚可以连接到压电蜂鸣器或其他扬声器播放音调。
  tone(pin, frequency) 或 tone(pin, frequency, duration)
    pin：在其上产生声音的引脚
    frequency：音调的频率，以赫兹为单位
    duration： 音频持续时间（以毫秒为单位）（可选）
*/


void loop()   //循环
{
  if (digitalRead(A0) == HIGH)      //如果A0引脚为高电平，即连接A0的按钮按下。
  {
    tone(8, 440, 100);        //在8号引脚产生频率为440赫兹持续时间为100毫秒的方波
  }
  if (digitalRead(A1) == HIGH)      //如果A1引脚为高电平，即连接A0的按钮按下。
  {
    tone(8, 494, 100);        //在8号引脚产生频率为494赫兹持续时间为100毫秒的方波
  }
  if (digitalRead(A2) == HIGH)      //如果A2引脚为高电平，即连接A0的按钮按下。
   {
    tone(8, 523, 100);        //在8号引脚产生频率为523赫兹持续时间为100毫秒的方波
  }
  delay(10);                        //停滞10毫秒
}