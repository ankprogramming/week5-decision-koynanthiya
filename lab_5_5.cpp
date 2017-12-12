#include <iostream>
#include <string>

int main () {

  string playerName ;
  int score = 0, life = 3;
  char choice1
  char choice2
  char choice3

  // ประกาศตัวแปรเพื่อรับการเลือกคำตอบของผู้เล่น
  // เช่นการเป็น ตัวเลขให้ประกาศเป็น int choice1;
  // ถ้ารับคำตอบเป็นตัวอักษร ให้ประกาศเป็น char choice1;
  //

  cout << "Welcome to Mini Adventure Game." << endl;
  cout << "Please enter your name : ";
  cin >>  playerName;

  // เขียนคำสั่งรับชื่อ แล้วเก็บในตัวแปร playerName
  if (playerName.length() > 8) {
        cout << "Your name is too long!!!!" << endl;
        playerName.erase (playerName.begin()+8, playerName.end());
        cout << "Your name has been changed to " << playerName << endl;
    }
        else {cout << playerName << endl}
        }

  // เขียนคำสั่งแสดงผล คำบรรยายสภาพแวดล้อม สถานการณ์ และคำทักทายที่มีชื่อตัวละคร
  cout << "Hello " << playerName << ". You are in Big C. You are walking happily. Suddenly you realize that forgetting the wallet."
  << " But you're lazy to get back to get it." << endl;

  cout << "Come out of BIG C" << playerName << ". You went to Japan happily, suddenly I saw someone stolen."
  << " Are you thinking of helping him catch a good thief." << endl;


  cout << "From Japan" << playerName << "You go to Khao Yai to see the atmosphere you are hungry now."
  << " Where do you think you are going to eat." << endl;


  // เขียนคำสั่งแสดงผล คำถามให้ผู้ใช้ตัดสินใจ
  // เช่น cout << "What should you do? (A)sk for money,(S)teal : ";


  // เขียนคำสั่งรับคำตอบจากผู้ใช้ แล้วให้คะแนนหรือทำโทษ จากการตัดสินใจนั้น
  // เช่น
      cin >> choice1;
         case "A"
            score += 10;
            cout << "You ask for money from people then you get 100 baht. You are very happy. Now you can shopping."
            switch(choice1) {
        case "S" :
            score += 50;
            life -= 1;
            cout << "You stole money from people. Now you can shopping.";


        cin >> choice2;
         case "A" :
            score += 10;
            cout << "You help him catch the thief."
            switch(choice1) {
        case "S" :
            score += 50;
            life -= 1;
            cout << "You do not help him catch the thief.";



        cin >> choice3;
         case "A" :
            score += 10;
            cout << "Ask for food from tourists"
            switch(choice1) {
        case "S" :
            score += 50;
            life -= 1;
            cout << "Steal food from tourists.";


  // ฝึกสร้างสถานการณ์และสร้างเงื่อนไข อีก 2 สถานการณ์


  // สรุปผลคะแนนและพลังชีวิต เช่น cout << "Congratulations! You win the game with " << score << "Score. See you next time on next game. GG." << endl;

  return 0;
}
