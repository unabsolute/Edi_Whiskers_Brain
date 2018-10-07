#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <rgb_lcd.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

int val = 0;
int mood;
int input;

rgb_lcd lcd;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

while(!Serial){ }
lcd.begin(16, 2);


const int colorR = 255;
const int colorG = 165;
const int colorB = 140;

lcd.setRGB(colorR, colorG, colorB);
lcd.print("   heyyyy!!!! i like being purple"); //32 char
{
  for (int positionCounter = 0; positionCounter < 25; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(250); }

}
}

void loop(){

input = Serial.read();
//Serial.print(input);
////delay(500); 
//Serial.print(input == "Hi");
//String(input);
//Serial.print(typeof(input));

if ((input > 1)&&(input < 10)){           //|| (input == "Hi") || (input == "Hola") || (input == "Greetings")) {
  
lcd.clear();

lcd.print("   hi!!! nice to meet you :)");
for (int positionCounter = 0; positionCounter < 18; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(250); }
mood=mood+1;
delay(5000);
lcd.clear();
}


if (input > 10&&input < 20){        //("What is your name" || "Your name" || "Who are you")) {

lcd.clear();

lcd.print("   my name is edi! edi whiskers :3");
for (int positionCounter = 0; positionCounter < 18; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(250); }
mood=mood+2;
delay(5000);
lcd.clear();
}

 
if (input > 20&&input < 30){                 //("<3" || "I love you" || "Wonderful" || "Amazing" || "Beautiful")) {

lcd.clear();

lcd.print("    <3 <3 <3 thank you!!! :D");
for (int positionCounter = 0; positionCounter < 18; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(250); }
mood=mood+3;
delay(5000);
lcd.clear();
}

 
if (input > 30&&input < 40){         //("I hate you" || "You suck" || "You're the worst")) {

lcd.clear();

lcd.print("   ,_, did i do something wrong...?");
for (int positionCounter = 0; positionCounter < 18; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(250); }
mood=mood-3;
delay(5000);
lcd.clear();
}

 
if (input > 40 && input < 50){                 //"):" || "Wrong" || "Bad" || "Sad")) {

lcd.clear();

lcd.print("   what is wrong? ): do not be sad...");
for (int positionCounter = 0; positionCounter < 18; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(250); }
mood=mood-1;
delay(5000);
lcd.clear();
}


if (input > 50 && input < 60){                          //("Talk dirty to me" || "Fuck" || "Shit" || "Bitch" || "Cunt" || "Furry" || "Anime")) {

lcd.clear();

lcd.print("   XXXXXXX you are gross.....");
for (int positionCounter = 0; positionCounter < 18; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(250); }
mood=mood-2;
delay(5000);
lcd.clear();
}


if (input > 60 && input < 70){              //("I don't like you" || "You're gross" || "You are poorly made" || "Robots are gross")) {

lcd.clear();

lcd.print("   i have feelings too.... TToTT");
for (int positionCounter = 0; positionCounter < 18; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(250); }
mood=mood-2;
delay(5000);
lcd.clear();
}


if (input > 70&&input < 80){             //("You are my friend" || "Thank you for talking to me" || "*hugs*")) {

lcd.clear();

lcd.print("    i love you!");
for (int positionCounter = 0; positionCounter < 18; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(250); }
mood=mood+3;
delay(5000);
lcd.clear();
}

if (input > 80&&input < 90){           //("This is so sad edi play decpacito" || "She said do you love me I tell her only partly" || "Go commit die" || "Do robots like memes")) {

lcd.clear();

lcd.print("   wow memes humanz haha am i right dab ha ha");
for (int positionCounter = 0; positionCounter < 18; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(250); }
mood=mood+1;
delay(5000);
lcd.clear();
}



if (mood == 5)
lcd.print("   friendship level 1 achieved!");
else if (mood == 10)
lcd.print("   friendship is magic and you're a wizard.");
else if (mood == 15)
lcd.print("   wow.... thank you. i didn't think anyone would try this hard....");
else if (mood == 20)
lcd.print("   you're my best friend. thank you.");
}

