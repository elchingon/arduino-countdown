int segmentA = 7;
int segmentB = 8;
int segmentC = 2;
int segmentD = 4;
int segmentE = 5;
int segmentF = 6;
int segmentG = 3;
int switchPin = 9;
int switchVal = 0;

void setup() {
  Serial.begin(9600);    // Debugging only
  // put your setup code here, to run once:
  pinMode(segmentA, OUTPUT);
  pinMode(segmentB, OUTPUT);
  pinMode(segmentC, OUTPUT);
  pinMode(segmentD, OUTPUT);
  pinMode(segmentE, OUTPUT);
  pinMode(segmentF, OUTPUT);
  pinMode(segmentG, OUTPUT);
  pinMode(switchPin, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  switchVal = digitalRead(switchPin);
//  Serial.println(switchVal);
//  if (switchVal == LOW) {
//    generateRandom();
//  } else {
    countDown();
//  }
//  digitalWrite(segmentA,HIGH); 
//  digitalWrite(segmentB,HIGH); 
//  digitalWrite(segmentC,HIGH); 
//  digitalWrite(segmentD,HIGH); 
//  digitalWrite(segmentE,HIGH); 
//  digitalWrite(segmentF,HIGH); 
//  digitalWrite(segmentG,HIGH); 

//  delay(500);
//  clearAll(); 
//  delay(500);
}

void countDown() {
  
  for(int x=9; x >= 0; x--) {
    clearAll();
    showNumber(x);
    Serial.println(x);
    delay(1000);
  }

//  switchVal = digitalRead(switchPin);
//  if (switchVal == HIGH) {
//    showNumber(0);
//    delay(1000);
//    clearAll();
//    delay(1000);
//  }
  
}


void showNumber(int number) {
  switch(number) {
    case 1: digitalWrite(segmentB,HIGH);digitalWrite(segmentC,HIGH); break;
    case 2: digitalWrite(segmentA,HIGH);digitalWrite(segmentB,HIGH);digitalWrite(segmentD,HIGH);digitalWrite(segmentE,HIGH);digitalWrite(segmentG,HIGH); break;
    case 3: digitalWrite(segmentA,HIGH);digitalWrite(segmentB,HIGH);digitalWrite(segmentC,HIGH);digitalWrite(segmentD,HIGH);digitalWrite(segmentG,HIGH); break;
    case 4: digitalWrite(segmentF,HIGH);digitalWrite(segmentG,HIGH);digitalWrite(segmentB,HIGH);digitalWrite(segmentC,HIGH); break;
    case 5: digitalWrite(segmentA,HIGH);digitalWrite(segmentF,HIGH);digitalWrite(segmentG,HIGH);digitalWrite(segmentC,HIGH);digitalWrite(segmentD,HIGH); break;
    case 6: digitalWrite(segmentA,HIGH);digitalWrite(segmentF,HIGH);digitalWrite(segmentG,HIGH);digitalWrite(segmentE,HIGH);digitalWrite(segmentC,HIGH);digitalWrite(segmentD,HIGH); break;
    case 7: digitalWrite(segmentA,HIGH);digitalWrite(segmentB,HIGH);digitalWrite(segmentC,HIGH); break;
    case 8: digitalWrite(segmentA,HIGH);digitalWrite(segmentB,HIGH);digitalWrite(segmentC,HIGH);digitalWrite(segmentD,HIGH);digitalWrite(segmentE,HIGH); digitalWrite(segmentF,HIGH);digitalWrite(segmentG,HIGH);break;
    case 9: digitalWrite(segmentA,HIGH);digitalWrite(segmentB,HIGH);digitalWrite(segmentC,HIGH);digitalWrite(segmentD,HIGH); digitalWrite(segmentF,HIGH);digitalWrite(segmentG,HIGH); break;
    case 0: digitalWrite(segmentA,HIGH);digitalWrite(segmentB,HIGH);digitalWrite(segmentC,HIGH);digitalWrite(segmentD,HIGH);digitalWrite(segmentE,HIGH); digitalWrite(segmentF,HIGH); break;
  }

}

void clearAll() {
  for(int x=2; x<=8; x++) {
    digitalWrite(x, LOW);
  }
}

void generateRandom() {
  clearAll();
  int randomNumber;
  randomNumber = random(0,9);
  showNumber(randomNumber);
//  Serial.println(randomNumber);
  delay(1000);
}

//  switch (number)
//  {
//    case 1: segments = b | c; break;
//    case 2: segments = a | b | d | e | g; break;
//    case 3: segments = a | b | c | d | g; break;
//    case 4: segments = f | g | b | c; break;
//    case 5: segments = a | f | g | c | d; break;
//    case 6: segments = a | f | g | e | c | d; break;
//    case 7: segments = a | b | c; break;
//    case 8: segments = a | b | c | d | e | f | g; break;
//    case 9: segments = a | b | c | d | f | g; break;
//    case 0: segments = a | b | c | d | e | f; break;
//    case ' ': segments = 0; break;
//    case 'c': segments = g | e | d; break;
//    case '-': segments = g; break;
//  }

