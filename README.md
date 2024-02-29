# 🎮 Poor Guys (풀 가이즈)

![풀가이즈_최종발표_표지](https://github.com/blue-birds/poor-guys/assets/77480122/9e62499e-c617-44ed-95d7-fab41a061856)

> 목차 
> - [📌 프로젝트 소개](#프로젝트-소개)
> - [👩‍👩‍👧‍👧 팀원 소개](#팀원-소개)
> - [✏️ 주요 기능](#주요-기능)
> - [🚩 시작 가이드](#시작-가이드)
> - [🖥️ 기술 스택](#기술-스택)
> - [📜 DB 설계](#DB-설계)
> - [🌐 개발 주안점](#개발-주안점)

<br>

## 프로젝트 소개

### 개발 동기 및 목적
✨ 준비 중 ✨

<br>

### 서비스 소개
> 에픽 게임즈(Epic Games)에서 서비스하고 있는 폴 가이즈(Fall Guys)를
벤치마킹해서 만든 3D 플랫포머 게임입니다.

1. ✏️ 멀티 플레이가 가능합니다.
     
2. 🗨️ 회원 관리가 웹 게임 플랫폼에서 이루어집니다.
     
3. 📜 
    
4. 💯 
  
<br>

### 개발 기간
2022.11.25 - 2023.02.24

<br>

## 팀원 소개

|          [김정도](https://github.com/Rizingblare)          |          [김민관](https://github.com/MinkwanK)          |          [임우영](https://github.com/LimTurtle)          |                   [홍지현](https://github.com/Hong-Study)          |
| :--------------------------------------------------------: | :-------------------------------------------------------: | :----------------------------------------------------: | :----------------------------------------------------: |
| <img src="https://github.com/Rizingblare.png" width="100"> | <img src="https://github.com/MinkwanK.png" width="100"> | <img src="https://github.com/LimTurtle.png" width="100"> | <img src="https://github.com/Hong-Study.png" width="100"> | 
|                             Platform & Lobby                             |                           Game Client                             |                           Full Stack                         |                        Game Server                             |

<br>

## 주요 기능
> - ✏️ 웹 게임 플랫폼
> - 🗨️ 로비 및 매치 메이킹
> - 🎮 인게임 플레이

<br>

- ✏️ 웹 게임 플랫폼

| 회원 가입 | 로그인 |
| --------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/70671204-5b3e-4eae-95b9-1f8d28602f0d"> | <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/2a17f036-1467-4a60-a47f-e324457d62a4"> |
| • 패스워드는 bcrypt로 암호화 <br> | • 로그인 성공 시 쿠키에 JWT 토큰 저장 <br> • Redis에 접속 상태 동기화 |

| 게임 설치 | 게임 실행 |
| ---------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/5736f582-ebd7-42ab-9797-9487430503bb"> | <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/7091357f-b082-4bcf-b148-1f3e9b03b382"> |
| • 빌드 파일로 설치 및 게임 클라이언트 생성  <br> • 클라이언트 레지스트리에 Custom URL Scheme 등록 | • Scheme에 등록된 경로로 게임 클라이언트 실행 <br> • 매개변수로 유저ID 및 닉네임 전달 |
<br>

- 🗨️ 로비 및 매치메이킹
  
| 로비 화면 | 매치메이킹 |
| ---------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/e5eea951-6289-4a7d-b939-1be8c51bac4d"> | <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/8712be29-58e8-4104-8331-b7b1aa47cef0"> |
| • 사운드 및 게임 모드 설정 <br> • 로비 서버와 매치메이킹 서버 간 소켓 연결 | • 게임 클라이언트와 FastAPI 서버 간 HTTP 통신 <br> • FastAPI 서버는 IOCP 서버에 프로토콜 버퍼 패킷 전송 |
<br>

- 🎮 인게임 플레이
  
| 게임 스타트 | 게임 플레이 |
| --------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/da0c21c8-13eb-4e3f-a327-fc01ec04a3a1"> | <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/82648539-daa0-4af2-9640-86d27ea9b43b"> |
| • 본인 캐릭터는 ⚪️ 표시 <br> • 매칭된 유저들의 로딩이 모두 완료될 때까지 대기 | • 장애물을 피해서 목적지까지 이동 <br> • 추락 시 출발지로 다시 리스폰 |

| 도착 및 관전 모드 | 승리 및 게임 종료 |
| --------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/1afa0fe9-28fe-4b71-bafe-ce3b867e4424"> | <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/5dcc0507-51ab-4254-aecd-b60fb608f352"> |
| • 도착 시 관전 시점으로 전환 <br> • 목표 인원을 달성하면 다음 스테이지로 이동 | • 최종 스테이지에서 승리 시 게임 종료 |

<br>

## 시작 가이드

> - Python 3.9
> - FastAPI 0.62.0

1. 프로젝트 클론
```
git clone https://github.com/blue-birds/poor-guys.git
```

2. 서버 실행
```
(1) 게임 서버 실행
binary/server/Debug/ServerGame.exe

(2) NPC 서버 실행
binary/server/Debug/ServerNpc.exe

(3) 매치 서버 실행
binary/server/Debug/ServerMatch.exe

(4) 웹 서버 실행
cd src/ServerPlatform
pip install -r requirements.txt
uvicorn app.main:app --reload
```

<br>

## DB 설계

<img width="600" src="https://github.com/blue-birds/poor-guys/assets/77480122/b6df468e-c587-4891-81b2-9b20c1599eb6">

<br>

## 기술 스택
<img width="600" src="https://github.com/blue-birds/poor-guys/assets/77480122/aa6932b8-5c13-49c7-9279-4c266d77b8e0">

<br>

## 플로우 차트
<img width="600" src="https://github.com/blue-birds/poor-guys/assets/77480122/f3aa7690-d09f-4963-93ed-0f0f6144f212">

<br>

## 개발 주안점

### 🌉 Custom URL Scheme

웹 개발과 게임 개발을 접목하기 위해서 웹 게임 플랫폼을 개발하게 되면서 웹을 통해 접속한 유저를 어떻게 게임 클라이언트로 전달할 것인가에 대한 문제를 해결해야 했습니다.
유저가 어떻게 클라이언트를 설치하도록 할 것이며, 실행할 수 있도록 할 것이며, 클라이언트가 해당 유저의 정보를 어떻게 특정할 것인지 등이 예상되는 문제점들이었습니다. 

이 모든 것들을 해결할 수 있는 방법이 Custom URL Scheme를 활용하는 것이었습니다. Custom URL Scheme는 사용자가 직접 만드는 Scheme입니다. 사실 엄밀히 이야기하면 Custom URI Scheme가 더 올바른 표현입니다.
URI는 특정한 리소스에 대한 위치 정보를 제공합니다. 해당 자원에 접근했을 때 어떤 유형인지 식별하여 처리하기 위한 정보를 URI Scheme라고 하며, `http`, `ftp`, `mailto` 등과 같이 공식적으로 지정되고 관리되는 Official URI Scheme도 있지만
사용자가 직접 지정할 수도 있도록 대부분의 OS가 지원합니다. 이 방법을 통해 클라이언트의 컴퓨터에 `bluebird` Custom URI Scheme를 등록해 웹에서 게임 클라이언트를 실행하도록 처리할 수 있었습니다. 
