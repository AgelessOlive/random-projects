//coding options
//A. marchtime
//B. temporal
//C. 4-4-4-4
//D. 90BPM



const int coding = 2;



//ints
int codingdelay;

//more ints
const int codingSelect;
const int codingSelect1;
const int codingSelect2;
const int codingSelect3;
const int syncselect = A5;
const int zone1 = A4;
const int NAC = 8;
const int SYNC = 9;

void setup() {
//OUTPUTS
pinMode(NAC, OUTPUT);
//INPUTS
pinMode(A0, INPUT_PULLUP);
pinMode(A1, INPUT_PULLUP);
pinMode(A2, INPUT_PULLUP);
pinMode(A3, INPUT_PULLUP);
pinMode(zone1,INPUT_PULLUP);
pinMode(syncselect,INPUT_PULLUP);


}

void loop() {
int alarms = digitalRead(zone1);
//coding stuff
if(alarms == 1) {}
else{
int codingSelect = digitalRead(A0);
if(codingSelect == 1) {


}
else{
    digitalWrite(NAC,HIGH);
delay(250);
digitalWrite(NAC,LOW);
delay(250);
};

int codingSelect1 = digitalRead(A1);
if(codingSelect1 == 1) {}
else{
digitalWrite(NAC,HIGH);
delay(500);
digitalWrite(NAC,LOW);
delay(500);
digitalWrite(NAC,HIGH);
delay(500);
digitalWrite(NAC,LOW);
delay(500);
digitalWrite(NAC,HIGH);
delay(500);
digitalWrite(NAC,LOW);
delay(1500);

};

int codingSelect2 = digitalRead(A2);
if(codingSelect2 == 1) {}
else{
digitalWrite(NAC, HIGH);
delay(350);
digitalWrite(NAC, LOW);
delay(350);
digitalWrite(NAC, HIGH);
delay(350);
digitalWrite(NAC, LOW);
delay(350);
digitalWrite(NAC, HIGH);
delay(350);
digitalWrite(NAC, LOW);
delay(350);
digitalWrite(NAC, HIGH);
delay(350);
digitalWrite(NAC, LOW);
delay(1000);
digitalWrite(NAC, HIGH);
delay(350);
digitalWrite(NAC, LOW);
delay(350);
digitalWrite(NAC, HIGH);
delay(350);
digitalWrite(NAC, LOW);
delay(350);
digitalWrite(NAC, HIGH);
delay(350);
digitalWrite(NAC, LOW);
delay(350);
digitalWrite(NAC, HIGH);
delay(350);
digitalWrite(NAC, LOW);
delay(3550);

};

int codingSelect3 = digitalRead(A3);
if(codingSelect3 == 1) {}
else{
digitalWrite(NAC,HIGH);
delay(350);
digitalWrite(NAC,LOW);
delay(350);
};

int synctoggle = digitalRead(syncselect);
if(synctoggle == 1) {}
else{
if(alarms == 1) {
}
else{
digitalWrite(SYNC, HIGH);
};
 
};

};


 
}


