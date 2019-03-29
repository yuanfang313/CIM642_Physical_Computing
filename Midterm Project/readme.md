# Midterm Project_Wake Up An Egg!
&nbsp;
![](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/Midterm%20Project/Assets/Midterm_01.gif?raw=true)

&nbsp;

# 1. About the project

 ## 1-1. What is the title of my project?
* ### Proposal
![](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/Midterm%20Project/Assets/Midterm_proposal.png?raw=true)

* ### Wake Up An Egg!

In my proposal, I used the word "Hatch", but I found the temperature of our hands was not high enough to make so many animation inside an encased object. So I changed the verb in the title.

## 1-2. Briefly explain why did you want to make this project?

The reason that I wanted to make this project is that I want to exlore how to influence my audiences emotionly.

And among all the senses of mankind, Sight, Hearing, Tough, Smell and Taste, as there are already so many products or artistic works related with the first two, the sense I'm most interested in currently is "Touch" or its combinations with other senses. 

In the process of **"hatch" or "wake up"** the egg, I expect some emotions are also **"hatching" or "waking up"** inside themselves.

### 1-2-1. Who are the stakeholders?

Any human beings.


### 1-2-2. Find 3 inspiring projects

In fact, any thing that enable certain sets(sequences) of emotions growing inside audiences I'd saw is one part of my inspiration of this project.

 ### [Journey]
  
  #### 01. Journey - Gameplay / Playthrough (No Commentary)
 https://www.youtube.com/watch?v=bkL94nKSd2M
 
  
  #### 02. Journey Game Creator Jenova Chen "Theories Behind Journey"
 https://www.youtube.com/watch?v=S684RQHzmGA&t=29s

![](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/Midterm%20Project/Assets/Insperation01_journey.png?raw=true)
  
  &nbsp;
  
### [Tree]

#### 01. TreeSense
http://www.qianyedan.com/treesense#angl-video

#### 02. MIT Media Lab_If you were a tree
https://www.media.mit.edu/posts/tree-treesense/

  ![](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/Midterm%20Project/Assets/Insperation02_Tree.png?raw=true)
  
  &nbsp;
  
### [Man from Earth]
https://www.youtube.com/watch?v=9mOIxyRTY5I

This movie is just an example of any movies that're carefully planning the emotions of audience into its storytelling process. I expecially chose _Man from Earth_ because it creates so many different emotions just within 1.5 hours and that tiny space, which I may have already forgotten its contents but still vividly remember all the emotions it rooted inside my heart. 

![](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/Midterm%20Project/Assets/Insperation03_The_Man_from_Earth.png?raw=true)

&nbsp;
&nbsp;
&nbsp;
&nbsp;

# 2. Code

 ## 2-1. How does your program work?
 
 Before I added servo when I just played with the lights, my codes worked as I expected.
 
 But When servo and piezo were added, and I moved all the components onto the mini breadbord to incase everything inside "the egg", the situation was kind of losing my control.

## 2-2. Reflection
### 2-2-1. What worked/did not work?

**work**

* First trying to use a battery providing electricity, and it worked pretty well;

* First trying to use a mini breadbord, and it worked just well as the standard ones;


**did not work**

* The first thing I noticed was that servo would make sounds (little vibrations )before any input happening, which ruined my original concept that the defalt mode is "quiet breath";

* Then when the vibration began, the blue light would shaked with it;

* When the input, knocking, stop, the vibration would continue a little longer;

* Broke one leg of piezo the night before presentation, after which it totally lost of control;


### 2-2-2. If you had more time what would you change in your project?

I want to make a tail, two eyes and two legs on my egg!

&nbsp;
&nbsp;
&nbsp;
&nbsp;

# 3. Components

 ## 3-1. What parts did you use?
 
 ## 3-2. Which are your inputs/outputs?
 
 * INPUT: piezo;

 * OUTPUT: led: Red & blue; servo;

&nbsp;
&nbsp;
&nbsp;
&nbsp;

# 4. Interaction

 ## 4-1. Explain how a user interacts with your input/output
 
1. In the defalt mode, the egg breathes peacefully -- users look at it and feel a little curious;
2. When users knock the egg -- there will be some events happening inside correspondingly -- instant vibrations and flashing lights -- users will feel like they are waking up something.
 
 ### 4-1-1. Create a layout for your interface
 
 The interface is the smooth surface of the egg.
 
 ### 4-1-2. Storyboard the interaction
 
* **Draw a step by step diagram of the interaction**

Knock! -- red light flashing & vibration stronger

* **Explain how the project is used?**

Knock the egg.

  * **How does the user interact with the input?**
  
  A: Watch the egg and knock it!
  
  * **Why did you decide to use that component?**
  
  A: I don't want any components extruding the egg, so I excluded any forms of potentiometer and button.
  Therefore I need to make my choice within temperature sensor, sound sensor(piezo), photoresistor.
  
  I think all these three inputs, temperature, sounds, lights will make a well responding egg, but based my skills and tools currently, setting my inputs as "sounds" is the best choice.
  
  * **Explain how the input translates to the output**
  
  A: The piezo that attached inside the shell of the egg analogRead the values of knocks from users, which are translated to the values analogWrite by servo and led inside.


## 4-2. Talk about what form factor/size your project would ideally be.

The ideal size of the egg would be the size that audience can hold it with one hand.

&nbsp;
&nbsp;
&nbsp;
&nbsp;

# 5. Images and Videos

 ## 5-1. Include images and captions
 
 ### Inner Structure
 
 ![](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/Midterm%20Project/Assets/Inner%20Structure.jpg?raw=true)
 
 ### 0303_Midterm Exercise 1__Breath Accelerating [[Video]](https://www.youtube.com/watch?v=xwx0PsnR0Ms) 
   
   <p align = "left">
    <img width = 500 src = "https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/Hw/0303_Midterm_Breath_Accelerating_Exercise.JPG?raw=true">
    </p>
    
   &nbsp; 
   
 ### 0303_Midterm Exercise 2__Multiple Color [[Video]](https://www.youtube.com/watch?v=RHlMtE3KQMU&feature=youtu.be)    
 <p align = "left">
    <img width = 500 src = "https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/Hw/0303_Midterm_Mutiple_%20Color_Exercise.jpg?raw=true">
    </p>
 
 

 ## 5-2. A video of finished project [[Link]](https://www.youtube.com/watch?v=n6ORIo3roBw&feature=youtu.be)
 [![Watch the video](https://github.com/yuanfang313/CIM642_Physical_Computing/blob/master/Midterm%20Project/Assets/video%20image.jpg?raw=true)](https://www.youtube.com/watch?v=n6ORIo3roBw&feature=youtu.be)

