# Arduino-controller-programming
Here I will share with you some of the projects that I worked on during my attendance at the Tuwaiq Academy course (Arduino controller programming)

First we will get to know what the Ardino

 Arduino is: an open source platform used to build electronics and consists of two parts

The first part : is a programmable physical circuit board (it is often referred to as an accurate controller)

The second part : is the IDE (the integrated development environment) that works on the computer and is used to write and download the code from the computer to the electronic plate.

Arduino devices and programs are designed for every person interested in creating interactive environments. It can interact with Ardino with buttons, LED lamps, engines, loudspeakers, GPS units, cameras and the Internet

Arduino is used in almost any electronics project, Arduino is linked to sensors to communicate with the material world and then convert these sensors to data that it analyzes and based on the codes that are programmed and then take decisions such as running engines, running or sound source

https://user-images.githubusercontent.com/102740867/188249043-57e58b43-3b26-4ace-98b5-de3189f75fda.mp4



If you have the Arduino pieces to run your project you need to download the Arduino program through https://www.arduino.cc/en/software , If you do not have the Ardino pieces now, you can use this simulator site for the Ardino and you can program it and also run it
-->https://www.tinkercad.com/dashboard
Enter this site, then click on "New" and then "circuit"

To write the code, click " Code " and then " Text "


All codes will find them with files above




1 -  the traffic signal project

- The first way

The pieces that we use here are LED and Resistor and make sure to make the  Resistor value 220Ω by pressing the piece and changing it

https://user-images.githubusercontent.com/102740867/188220303-a781c1c9-8aa4-4e14-926b-183e7ea83dc6.mp4

You can also control the duration through the code at Delay (1000) , You can add any duration you want if you want two, put 2000, then the first LED will work, then after the 2s, the second will work


- The second way :

https://user-images.githubusercontent.com/102740867/188223110-09824e61-caf2-40e5-aacd-bcc99f5f5498.mp4

- The third way

We can also give the Arduino inputs or order to do a specific order, for example here I told the Arduino that if I entered the letter 'A' I open the red light if you enter the letter 'B' ' open the yellow light And if you enter the letter 'C', open  the green light  , and make sure of the state of letters,  then enter it must be Capital Letters



https://user-images.githubusercontent.com/102740867/188243844-22abd9c9-c1c2-46d3-83f0-0cb942ae69cb.mp4

When you click on a "code", you will find the "Serial Monitor" option, then enter one of the letters you mentioned above and will do the desired thing

2 -I will now show you a challenge, which is to make Micro Servo move from 0 to 180 slowly and then return faster

