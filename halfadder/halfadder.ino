#include <LogicGates.h>
const int ipinA = 5;
const int ipinB = 6;
const int opinS = 12;
const int opinC = 13;

void setup() {
  pinMode(ipinA,INPUT);
  pinMode(ipinB,INPUT);

  pinMode(opinS,OUTPUT);
  pinMode(opinC,OUTPUT);

  Serial.begin(9600);

  digitalWrite(opinS,LOW);
  digitalWrite(opinC,LOW);
}

void loop() {
  bool A = digitalRead(ipinA);
  bool B = digitalRead(ipinB);

  Serial.print(A);
  Serial.print(B);

  bool S = XorGate(A,B);
  bool C = AndGate(A,B);

  Serial.print("----------");
  Serial.print(S);
  Serial.print(C);
  Serial.println();

  digitalWrite(opinS,S);
  digitalWrite(opinC,C);
  

}
