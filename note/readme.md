
# CIM642_Physical Computing

## Week04_0207

### 1.What is potentiometer?
Basicly a potentiometer is a voltage divider;
### 2.Analog Signal v.s. Digital Signal
continous changing values v.s. discrete values;
![](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/week4/img2.jpg?raw=true)
![](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/week4/note2.jpg?raw=true)

### [3.Code](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/Arduino/practice0209/practice0209.ino)

#### Note_code

[1) digitalWrite](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/week4/classCode_1.JPG?raw=true)

[2) analogWrite](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/week4/classCode_2.JPG?raw=true)

[3) analogRead_potentiometer](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/week4/classCode_3.JPG?raw=true)

[4) analogRead_photoresistor](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/week4/classCode_4.JPG?raw=true)

[5) analogRead_potentiometer](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/week4/practiceCode_5.JPG?raw=true)

### 4.Other Notes
[[1]](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/week4/layout.jpg?raw=true)
[[2]](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/week4/note1.jpg?raw=true)
[[3]](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/week4/note3.JPG?raw=true)


## Week08_0307_One Button Exercise

### 0. Interpretation;
### 1. One press on one button;
### 2. Several presses on one button;
  * 2-1. differentiate different presses by the **LENGTH** of each press;
  * 2-2. differentiate different presses by their **ORDER**;
  * 2-3. differentiate different **GROUPS**(different numbers of "presses" within a certain time range) of presses;
   
&nbsp;  
&nbsp; 
&nbsp; 

### 0. Interpretation;
"Press the button" is a behavior that we normaly would say in the daily life. 

However, think again about this behavior -- look it as a more microcosmic way. Then you would probaly say, "I press and release the button" (which is so inappropriate to say in normal context, ulessing you're making a joke!)

But for computers to understand the behavior, "press the button", sometimes the nerdy expression, "press and release the button" is still not enough.

In order to let computer execute certain instructions triggering by INPUT, we need to know exactly how computers interpretate our behaviors (INPUT).


<p align = "center">
  
  <img width = 500 src = "https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/2OneButtonExercise__Computer%20Interpretation.png?raw=true">
  
  </p>
  
So you can see computer interpretates the behavior "press the button" as a sequence of "0 & 1". 
And the reson that there are more then one "0" or "1" when the button pressed or released is that the satus of the button is checked every serial.

### 1. One press on one button;

![](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/OneButtonExercise_Press%20&%20Release%20.png?raw=true)
### 2. Several presses on one button;


  * 2-1. differentiate different presses by the **LENGTH** of each press;
![](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/OneButtonExercise_length.png?raw=true)

&nbsp;

  * 2-2. differentiate different presses by their **ORDER**;
![](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/OneButtonExercise__order.png?raw=true)
&nbsp;

* 2-2. Practice;

<p align = "center">
  
  <img width = 500 src = "https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/note/practices.png?raw=true">
  
  </p>


  * 2-3. differentiate different **GROUPS**(different numbers of "presses" within a certain time range) of presses;
   

### Week09_0314

### Week10_0319

### Week11_0321

### Week12_0328

### Week13_0404

### Week14_0411

### Week15_0418

### Week16_0425
