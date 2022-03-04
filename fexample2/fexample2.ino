int numData;
  float data[16];
  int j;
  float average;
  float bucket;
  
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Number of data ?");
  while (Serial.available()==0){
    
    }
    numData = Serial.parseInt();
    for (j=1; j<numData;j=j+1){
      Serial.println("input: ");
      while (Serial.available()==0){
    
    }
     data[j]=Serial.parseFloat(); 
      }
      for(j=1;j<=numData;j=j+1){
        bucket = bucket + data[j];
        }
        average = bucket/numData;
        bucket = 0;
        Serial.println("The data are: ");
              for(j=1;j<=numData;j=j+1){
                Serial.println(data[j]);
              }
              Serial.print("");
              Serial.print("average  : ");
              Serial.println(average);
}
