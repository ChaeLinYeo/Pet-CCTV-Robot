#include <Servo.h>

Servo sv;

long input = -1;
int direct = -1;
long angle = 90;
long n_angle = 90;
long spd = 2;
int index = 0;
int patrol_index = 0;
long d = 0;

long angle_list[] = {0,180,90};
long angle_list2[] = {0,90,180};

void setAngle();
void moveServo(long);

void setup() {
  sv.attach(3);//3번핀에 PWM연결
  sv.write(angle);
  Serial.begin(115200);
}

void loop() {
  
  d = n_angle - angle; //도착 각도와 현재 각도 비교
  if(d < 1 - spd){
    n_angle += spd;
  }else if(d > spd -1){//1도씩 움직이며 부드럽게 움직이고 속도 제어할수 있게함
    n_angle -= spd;
  }

  moveServo(n_angle); //모터 움직이기

  Serial.print("input :");
  Serial.print(input);
  Serial.print("  angle: ");
  Serial.print(angle);
  Serial.print("  n_angle: ");
  Serial.print(n_angle);
  Serial.print("  d: ");
  Serial.print(d);
  Serial.println("");
  delay(10);
}

void serialEvent(){
  int _input = Serial.parseInt();
  if(_input != -1){
    input = _input;
    setAngle();
  }
}

void setAngle(){
  switch(input){ //입력에 따라 반응
    case -1:
      Serial.print("input is not exist");
      break;

    case 0://위험구역 설정 0,90,180 에서 멈춰서 다시 '0'들어올때 각도 증가
      angle = angle_list[index];
      index++;
      if(index > 2) index = 0; //2는 angle_list의 길이 -1
      break;

    case 1://고개 돌리기
      Serial.print(input);
      angle = angle_list2[patrol_index];

      patrol_index += direct;
      if(patrol_index > 2){
        patrol_index = 1;
        direct *= -1;
      }else if(patrol_index < 0){
        patrol_index = 1;
        direct *= -1;
      }      
      break;

    case 2://정지
      Serial.print(input);
      angle = n_angle;
      delay(3000);
      break;

    case 3: //처음
      angle = 90;
      break;
      
    default:
      Serial.print("unknown input: ");
      Serial.print(input);
      break;      
  }
}

void moveServo(long angle){
  sv.write(angle);
}
