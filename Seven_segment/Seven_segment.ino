int e = 5;
int d = 6;
int c = 7;
int g = 8;

int dp = 1;
int a =  3;

int f = 2;

int b = 4;

int num_array[10][7] = {  { 1,1,1,1,1,1,0 },    // 0
                          { 0,1,1,0,0,0,0 },    // 1
                          { 1,1,0,1,1,0,1 },    // 2
                          { 1,1,1,1,0,0,1 },    // 3
                          { 0,1,1,0,0,1,1 },    // 4
                          { 1,0,1,1,0,1,1 },    // 5
                          { 1,0,1,1,1,1,1 },    // 6
                          { 1,1,1,0,0,0,0 },    // 7
                          { 1,1,1,1,1,1,1 },    // 8
                          { 1,1,1,0,0,1,1 }};   // 9
void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Zero
//  digitalWrite(a, HIGH);
//  digitalWrite(b, HIGH);
//  digitalWrite(d, HIGH);
//  digitalWrite(c, HIGH);
//  digitalWrite(e, HIGH);
//  digitalWrite(f, HIGH);
//  digitalWrite(g, LOW);
//  digitalWrite(dp, LOW);
// One
//  digitalWrite(a, LOW);
//  digitalWrite(b, HIGH);
//  digitalWrite(d, LOW);
//  digitalWrite(c, HIGH);
//  digitalWrite(e, LOW);
//  digitalWrite(f, LOW);
//  digitalWrite(g, LOW);
//  digitalWrite(dp, LOW);

// TWO
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);

  
  }

  
