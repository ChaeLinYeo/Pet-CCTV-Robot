# Pet-CCTV-Robot
2020 1학기 어드벤처디자인2 수업 
## Overview
  직장인들의 외출에 펫을 감시하기 위한 펫 CCTV, 하지만 기존 펫 CCTV는 사용자가 앱으로 직접 스트리밍 영상을 보면서 반려동물의 상황을 파악 해야하기 때문에 용무가 있어 외출을 한 사용자들에게는 스트리밍 영상을 통한 감시를 할 수 없는 상황이 대부분이다. 또한, 터치를 통해 구동되는 가전제품들이 증가함으로 반려동물의 사고 또한 빈번히 발생한다. 예로 반려동물 주인이 외출시 반려동물이 인덕션, 하이라이트 전자레인지 등을 건드려서 화재가 발생했다는 사건이 급증했다. ([화재사건기사내용](https://www.hankyung.com/life/article/201912041776Y)) 우리는 이에대해 기존의 제품이 구매자의 목적을 완벽하게 해소시켜주지 못한다는 점과 현재 사고들의 원인을 파악하여 사용자가 위험구역을 지정하고, 반려동물의 위치를 자동적으로 파악하여 기존 펫 CCTV의 부족한 점을 보완하고자한다.
 
## 세부 기능
- 사용자가 직접 본 기기 카메라에서 송출하는 화면을 통해 전면, 좌측, 우측 방향에 반려동물이 접근하면 안되는 구역을 설정을 할 수 있다.
- 본 기기는 인공지능을 통해 전면, 좌측, 우측 방향으로 반려동물의 위치를 파악한다.
- 반려동물이 사용자가 지정한 접근 금지 구역에 위치했을 때 기기는 음성을 송출하여 반려동물에게 제지를 하고, 사용자의 앱에 알림을 울린다. ([소리를 통해 반려동물을 제지할 수 있을까?](https://youtu.be/sFJ1QNv7OGw?t=42))

## 모델링
초기 모델 시안은 다음과 같다. 심미성 및 내부 하드웨어 위치를 고려하여 1번 구조를 택했으며, 이후에 3d 프린팅하기 쉬운 구조로 변형시켰다.
![초기 시안](./Modeling/Initial design.jpeg)

## 사용재료
  라즈베리 파이3B+, 라즈베리 파이4, 라즈베리파이 카메라 모듈, USB허브, 서보모터, 마이크로 SD카드 32G, SD카드 리더기, 라즈베리파이 공식7인치 터치스크린
