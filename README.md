# 🎮 Poor Guys (풀 가이즈)

![풀가이즈_최종발표_표지](https://github.com/blue-birds/poor-guys/assets/77480122/9e62499e-c617-44ed-95d7-fab41a061856)

> 목차 
> - [📌 프로젝트 소개](#프로젝트-소개)
> - [👩‍👩‍👧‍👧 팀원 소개](#팀원-소개)
> - [✏️ 주요 기능](#주요-기능)
> - [🖥️ 기술 스택](#기술-스택)
> - [📜 DB 설계](#DB-설계)
> - [📄 API 모아보기](#api-모아보기)
> - [📁 파일 구조](#파일-구조)
> - [🚩 시작 가이드](#시작-가이드)

> - [🌐 BE 개발 주안점](#개발-주안점)
> - [⚡성능 최적화](#성능-최적화)
> - [©️ License: The MIT License (MIT)](#license)

<br>

## 프로젝트 소개

### 개발 동기 및 목적
 예비 부부의 경우 결혼과 관련된 정보를 찾기 위해서는 웨딩 박람회, 온라인 검색, SNS 등 여러 방법을 사용하지만, 어디를 알아봐도 복잡하기만 하고 가격도 천차만별이라 선택하기 어렵습니다. 또한, 결혼 시장의 경우 일회성 고객이 대부분이다 보니 소비자보다 판매자 위주의 시장이 형성되어 왔습니다. 이에 따라 결혼 비용을 공개하지 않아 지인 소개 등으로 가면 훨씬 싸게 해주는 등 소비자 입장에선 모르고 당하기 십상입니다.

 웨딩 플래너의 경우 무급으로 시작해서 실력이 아닌 연차가 쌓일 때까지는 최저시급에도 미치지 못하는 기본급을 받으며 열정 페이를 강요받아 어려움을 겪고 있었습니다.

✨ 저희 `순수웨딩` 팀은 앞선 웨딩플래너의 결혼 준비 비용 불투명성 문제와 웨딩 플래너의 급여 공정성 문제를 해결하기 위해 투명한 가격으로 이 둘을 매칭 해주는 서비스를 기획하게 되었습니다. ✨

<br>

### 서비스 소개
> 투명한 가격으로 웨딩 플래너와 예비 부부를 매칭하다, '순수웨딩'

1. ✏️ 투명한 웨딩 플래너의 **포트폴리오**
   - 웨딩 플래너가 직접 등록한 자기 소개, 예상 가격, 사진, 사용자 리뷰등 볼 수 있어요
   - `순수 웨딩 멤버십`에 가입하면 플래너의 실제 이전 계약 기록(업체, 가격, 날짜 등)을 볼 수 있어요
   - 마음에 드는 플래너를 찜할 수 있어요!
     
2. 🗨️ 내 PICK! 플래너에게 **채팅 상담받기**
   - 원하는 플래너들과 채팅으로 상담받으며 결혼 준비를 할 수 있어요
     
3. 📜 **견적서**로 결혼 진행 과정을 서로 공유해요
   - 채팅방에서 견적서를 만들어서 업체 이름, 가격 등을 확인하고 진행 상황을 한눈에 확인할 수 있어요
   - 전체 견적서를 확정하면 해당 플래너에 대한 리뷰를 작성할 수 있어요
    
4. 💯 **리뷰**를 통해 생생한 결혼 진행 후기 확인하기
   - 다른 사람이 실제로 플래너와 진행한 후기를 들려줘요 이를 기반으로 더 좋은 플래너를 선택할 수 있어요
   - 해당 내용은 포트폴리오 상세 페이지에서 확인할 수 있어요
  
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
| • 패스워드는 bcript로 암호화해서 DB에 저장 <br> | • 로그인 시 redis에 접속 상태 동기화 <br> |

| 게임 설치 | 게임 실행 |
| ---------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/5736f582-ebd7-42ab-9797-9487430503bb"> | <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/7091357f-b082-4bcf-b148-1f3e9b03b382"> |
| • 회원가입 및 로그인 <br> • 로그인 시 redis에 접속 상태 동기화 | • 설치 파일 <br> • 플래너 이름 검색 |
<br>

- 🗨️ 로비 및 매치메이킹
  
| 로비 화면 | 매치메이킹 |
| ---------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/e5eea951-6289-4a7d-b939-1be8c51bac4d"> | <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/8712be29-58e8-4104-8331-b7b1aa47cef0"> |
| • 이미지 전송 | • 읽음 유무 표시 <br> • 안 읽은 메시지 개수 표시 |
<br>

- 🎮 인게임 플레이
  
| 게임 스타트 | 게임 플레이 |
| --------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/da0c21c8-13eb-4e3f-a327-fc01ec04a3a1"> | <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/82648539-daa0-4af2-9640-86d27ea9b43b"> |
| • 플래너의 소개, 가격 등의 정보를 등록 <br> • 수정 및 삭제 | • 견적서 항목에 대한 정보 등록 <br> • 수정 및 삭제 |

| 도착 및 관전 모드 | 승리 및 종료 |
| --------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/1afa0fe9-28fe-4b71-bafe-ce3b867e4424"> | <img width="380" src="https://github.com/blue-birds/poor-guys/assets/77480122/5dcc0507-51ab-4254-aecd-b60fb608f352"> |
| • 플래너의 별점 및 후기 등록 <br> • 수정 및 삭제 | • 해당 플래너의 리뷰 조회 |

<br>

## DB 설계

<img width="600" src="https://github.com/blue-birds/poor-guys/assets/77480122/b6df468e-c587-4891-81b2-9b20c1599eb6">



<br>

## 기술 스택
<img width="600" src="https://github.com/blue-birds/poor-guys/assets/77480122/aa6932b8-5c13-49c7-9279-4c266d77b8e0">

<br>

## 파일 구조
```
└───📂src
    ├───📂main
    │   ├───📂generated
    │   ├───📂java.com.kakao.sunsuwedding
    │   │               ├───📁chat
    │   │               ├───📁favorite
    │   │               ├───📁match
    │   │               ├───📁payment
    │   │               ├───📁portfolio
    │   │               │   ├───📁cursor
    │   │               │   ├───📁image
    │   │               │   └───📁price
    │   │               ├───📁quotation
    │   │               ├───📁review
    │   │               │   └───📁image
    │   │               ├───📁user
    │   │               │   ├───📁base_user
    │   │               │   ├───📁constant
    │   │               │   ├───📁couple
    │   │               │   ├───📁mail
    │   │               │   ├───📁planner
    │   │               │   └───📁token
    │   │               └───📁_core
    │   │                   ├───📁constants
    │   │                   ├───📁errors
    │   │                   │   └───📁exception
    │   │                   ├───📁security
    │   │                   └───📁utils
    │   └───📂resources
    │       ├───📁db
    │       └───📁env
    └───📂test
        └───📂java.com.kakao.sunsuwedding
            ├───📁chat
            ├───📁favorite
            ├───📁match
            ├───📁payment
            ├───📁portfolio
            │   ├───📁image
            │   └───📁price
            ├───📁quotation
            ├───📁review
            ├───📁user
            ├───📁util
            └───📁_core
```

폴더 내부 구조
```
- Entity.java
- DTOConverter.java
- JPARepository.java
- Request.java
- Response.java
- RestController.java
- Service.java 
- ServiceImpl.java
```
<br>

## 시작 가이드

> Requirements: Java 17, Spring 3.1.4
> 
> 순수웨딩 환경 변수 설정이 완료되어야 프로젝트가 실행됩니다.

1. 프로젝트 클론
```
git clone https://github.com/Step3-kakao-tech-campus/Team5_BE.git
cd Team5_BE
cd sunsu-wedding
```

2. 실행
```
./gradlew build
cd build
cd libs
java -jar sunsu-wedding-0.0.1-SNAPSHOT.jar
```

<br>

## 개발 주안점

### 🖥️ 코드 컨벤션

**네이밍 규칙**
> - 폴더 이름: 소문자
> - 파일명, 변수명, 메서드명: `CamelCase`
> - 엔티티의 필드네임: `snake_case`
> - 상수: `UPPER_CASE`
> - 테이블 이름: `snake_case_tb`
> - CRUD 네이밍 통일 (생성 → `save` / 조회 → `find` / 수정 → `update` / 삭제 → `delete`)

**코드**
> - `record` 사용하기, `DTOConverter`에서 Entity -> DTO로 변환하기
> - `Annotation` 순서 설정: 클래스 → 필드 → 생성자 → 메서드
> - Class 전체에 `@Transactional(readOnly = true)`를 사용하고 필요한 메서드에 `@Transactional` 사용하기
> - 상태, 등급 등 constant한 값을 가지고 있는 내용은 `enum` 타입으로 분리하기
> - DB를 잘못 삭제하는 걸 방지하기 위해서 각 table마다 `is_active` 필드를 통해 `SQLDelete`활용하기 

**테스트**
> - Assertions.assertThat, assertThrows는 `static import`하기  
> - RepositoryTest는 `DummyEntity`에서 생성해서, ControllerTest는 `teardown.sql`에서 가져와서 테스트 하기
> - `logResult()` 함수를 따로 빼서 중복 코드 줄이기 

<br> 

### 👤 유저별 기능 접근 제한
1️. 로그인 유무에 따른 기능 접근 제한 - `401 UnAuthorized`

|로그인 필요 X|👤 회원 |회원가입, 로그인 |
|:-------------|:-------|:------------------|
||✉️ 메일|인증 코드 전송, 검증|
||✏️ 포트폴리오|	리스트 조회, 상세 조회|
|로그인 필요 O|	👤 회원|	회원탈퇴, 유저 정보 조회, 토큰 갱신|
||	💳 결제|	결제 데이터 저장, 결제 승인 및 업그레이드|
||	✏️ 포트폴리오|	본인 게시글 조회, 등록, 수정, 삭제|
||	🗨️ 채팅|	채팅방 생성|
||	📌 매칭|	매칭 확정, 리뷰 작성 가능한 매칭 조회|
||	📜 견적서|	전체 리스트 조회, 매칭별 리스트 조회, 견적서 등록, 수정, 삭제, 1개 확정|
||	💯 리뷰|	전체 리스트 조회, 플래너별 리뷰 조회, 상세 조회, 등록, 수정, 삭제|
||	❤️ 찜하기|	찜리스트 조회, 등록, 삭제|

<br>

2️. 사용자 role에 따른 기능 접근 제한 - `403 Forbidden`
|공통|👤 회원 |회원가입, 로그인, 유저 정보 조회, 토큰 갱신, 회원 탈퇴 |
|:-------------|:-------|:------------------|
||	✉️ 메일|	인증 코드 전송, 검증|
||	💳 결제|	결제 데이터 저장, 결제 승인 및 업그레이드|
||	✏️ 포트폴리오|	리스트 조회, 상세 조회|
||	📜 견적서|	전체 리스트 조회, 매칭별 리스트 조회|
||	💯 리뷰|	플래너별 리뷰 조회|
||	❤️ 찜하기|	찜리스트 조회, 등록, 삭제|
|플래너	| ✏️ 포트폴리오|	본인 게시글 조회, 등록, 수정, 삭제|
||	📜 견적서|	견적서 등록, 수정, 삭제, 1개 확정|
||	🗨️ 채팅|	채팅방 생성|
||	📌 매칭|	매칭 확정, 리뷰 작성 가능한 매칭 조회|
|예비 부부|	🗨️ 채팅|	채팅방 생성|
||	📌 매칭|	매칭 확정, 리뷰 작성 가능한 매칭 조회|
||	💯 리뷰|	전체 리스트 조회, 상세 조회, 등록, 수정, 삭제|

<br> 

### ♻️ Access, Refresh Token

🪙 **JWT 도입**

유저 정보 인증을 위해 ****JWT를 도입하였습니다. 따라서 유저는 access token을 가지고 인증을 진행하게 됩니다. 이때, access token은 API를 요청할 때마다 헤더에 추가하여 전송되기 때문에 네트워크상에 많이 노출되고, 탈취될 확률도 높습니다. 

그리고 유저가 로그인을 자주하는 불편함 없이 오래 사용하기 위해서는 토큰의 유효기간이 길어야 합니다. 하지만 길게 설정하면, 탈취당한 토큰으로 해커는 오랜 기간동안 유저의 정보를 이용할 수 있게 됩니다.

따라서 access token의 유효기간을 짧게 가져가면서 상대적으로 기간이 긴 refresh token을 도입하게 되었습니다.

---

✅ **Refresh Token 도입**
1. 유저는 최초 로그인을 하면 access token, refresh token 두가지를 발급받습니다. 
2. 유저는 access token만을 가지고 인증을 요청합니다. 
3. access token이 만료되면, 서버에서는 토큰 만료 에러를 전송합니다.
4. 이를 받은 클라이언트는 access token과 refresh token을 가지고 토큰 재발급 요청을 합니다. 
5. 서버는 두 토큰을 모두 새로 발급하고 유저는 새로 발급받은 두 토큰을 저장 후, 다시 access token을 통해 인증 과정을 거치게 됩니다.
 
보안을 높이기 위해 탈취당하는 경우를 고민해 보았습니다.

>  **a. 리프레시 토큰만 탈취당한 경우**
> - 토큰 재발급을 할 때, 이전에 발급했던 access token, refresh token 두개를 모두 사용해야 재발급이 가능하도록 설계했습니다. 따라서 둘 중 하나의 토큰만을 탈취했다면, 재발급이 불가능합니다.
> - 리프레시 토큰만 존재하면 인증도 불가능하도록 설계했습니다. 따라서 리프레시 토큰만을 가지고 있다면, 해커는 인증을 진행할 수 없을 것입니다.
> 
> **b. 모든 토큰이 탈취당한 경우**
> - 먼저 access token의 유효시간이 남아있다면, 재발급을 받을 수 없도록 설계했습니다.
> - 만약 만료 시간에 맞추어 해커가 재발급을 했다면, 서버에 저장되어 있는 토큰 쌍과 정상 유저가 재발급을 요청한 토큰 쌍이 다를 것이기 때문에 정상 유저는 재로그인을 통해 새로운 토큰 쌍을 발급받습니다. 재발급을 받게 되면, 해커의 토큰이 폐기되고 유저는 정상적으로 다시 이용이 가능해집니다. 해커는 유효하지 않은 토큰쌍을 가지고 있으므로 재인증 및 재발급이 불가능합니다.
>   
> **c. 로그인 시 새로운 JWT 발급**
> - 데이터베이스에 저장된 토큰 정보를 다시 준다면, 해커는 타이밍만 맞춘다면 무한정 해킹이 가능해집니다. 따라서 로그인을 할 경우, 기존 토큰 정보를 삭제 후 새로운 토큰 정보를 데이터베이스에 저장하도록 설계했습니다.
>   
>  **d. 재발급 시 모든 토큰을 새로 발급**
> - 리프레시 토큰 또한 재발급을 자주 받게 된다면 네트워크에 자연스럽게 많이 노출됩니다. 따라서 토큰을 재발급할 때, access token 및 refresh token 둘 다 새로 발급하도록 설계했습니다.

### ✉️ 이메일 검증
유저 이메일이 유효한지 검증을 할 필요가 있습니다. 하지 않을 경우, 유저는 존재하지 않는 가상의 이메일들을 무한정 만들어 낼 수 있습니다. 이를 방지하기 위하여 회원가입을 할 이메일로 인증 코드를 발송, 해당 인증코드를 입력해야만 가입할 수 있도록 설계했습니다.

하지만 크램폴린 내부 정책으로 인한 SMTP 프로토콜 사용 불가로 이메일 발송은 제외하고 테스트 코드로 검증하도록 대체하였습니다.

<br>

### 💳 토스 페이먼츠와 연결

> 순수 멤버십 결제 후 유저 등급 업그레이드를 하기 위해 토스 페이먼츠와 연동을 진행했습니다. (결제 + 업그레이드)를 atomic하게 처리하여 **데이터 무결성**을 보장하였습니다. 전체 로직은 다음과 같습니다.

- 결제 요청을 위한 데이터 저장
    - orderId와 amount를 Payment 테이블에 저장합니다.
- 결제 승인 요청 및 업그레이드
    1. 검증: 이전에 저장한 데이터와 현재 request로 받은 데이터 비교
    2. 토스 페이먼츠 승인요청: paymentKey, orderId, amount 데이터를 담아 토스페이먼츠로 승인 요청을 보냅니다.
    3. 승인 요청에 성공하면 유저 등급을 NORMAL → PREMIUM으로 업그레이드하고 결제 시간을 저장합니다.

<br>

### ⛔ CORS 설정
> 백엔드 서버로 들어오는 모든 요청에 대해 위 설정을 적용하였습니다.
- `GET`, `POST`, `PUT`, `DELETE` 메서드를 사용하고 있습니다. 따라서 위 4가지 HTTP methods를 허용하였습니다.
- 배포 환경에서 프론트 엔드와의 통신은 localhost의 3000번 포트를 통해 이루어지기 때문에 `localhost:3000` 포트만의 통신만 허용하였습니다.
- JWT 토큰을 사용하고 있습니다. 액세스 토큰을 위한 `Authorization` 헤더, 리프레시 토큰을 위한 `Refresh` 헤더를 사용하고 있습니다. 따라서 두 헤더를 클라이언트에서 열람 가능하도록 수정했습니다.
- `Authorization` 헤더를 통해 유저 인증을 진행하고 있기 때문에 `setAllowCredentials` 옵션을 `true`로 활성화했습니다.

<br>

### ❌ SQLDelete
<img width="722" alt="Untitled (12)" src="https://github.com/Step3-kakao-tech-campus/Team5_BE/assets/84652886/02e4996f-e5b6-4398-bd08-13e96b732d8f">

저희 테이블 구조는 매칭내역에 플래너와 예비 부부가 함께 들어가 있는 형태입니다. 이 경우 예비 부부가 탈퇴하면 웨딩 플래너가 견적서 등 연관된 다른 데이터를 조회할 때 문제가 발생합니다. 저희는 포트폴리오 조회에서도 플래너의 이전 거래 내역을 조회하기 위해 견적서 내용을 가져와야 하기 때문에 Hard Delete 를 하게되면 조회가 불가능합니다.

실무에선 is_active와 같은 상태값을 확인할 수 있는 필드를 만들어 SQL Delete를 사용한다는 멘토님의 조언을 듣고 유저, 매칭, 견적서 등에서 활성화 유무 등을 관리하도록 하였습니다. 

또한 포트폴리오를 플래너가 실수로 삭제하거나 견적서 등 중요 데이터를 삭제할 경우 내용을 다시 복구할 수 있도록 하였습니다.

<br>

### ⚙️ 환경 변수 세팅 
> 저희 github에 올라간 코드를 더 안전하게 관리하기 위해서 다음 내용을 환경변수로 분리해서 관리하고 있습니다.
> - `EMAIL_TEST_CODE`(이메일 인증 코드)
> - `SENDER`(이메일 전송 계정 이메일)
> - `GMAIL_PASSWORD`(이메일 전송 계정 비밀번호)
> - `TOSS_PAYMENT_SECRET`(토스 페이먼츠 시크릿키)
> - `JWT_ACCESS_SECRET`(access토큰 시크릿 키)
> - `JWT_REFRESH_SECRET`(refresh토큰 시크릿키)

<br>

## 성능 최적화

### ⚡ N번의 Insert Query → JDBC Batch Update

웨딩 플래너가 작성한 포트폴리오와 포트폴리오에 포함될 이미지, 가격 항목 & 예비 부부가 작성한 리뷰와 리뷰에 포함될 이미지 항목에는 서로 1대 N의 관계가 성립합니다.

그렇기 때문에 포트폴리오 등록 상황이 발생하면 서버에서는 DB의 ‘포트폴리오’ 테이블과 ‘포트폴리오 이미지’ 테이블, ‘포트폴리오 가격’ 테이블에 접근해야 합니다.

예를 들어, 사용자가 포트폴리오를 등록할 때 이미지 4개, 가격 항목 3개를 추가하면 ‘포트폴리오’ 테이블에 1개의 레코드, ‘포트폴리오 이미지’ 테이블에 4개의 레코드, ‘포트폴리오 가격’ 테이블에 3개의 레코드를 추가해야 합니다.

**(1) JPA**

하지만 이 동작을 JPA로 수행하면 총 8개의 INSERT Query가 발생합니다.

```sql
INSERT INTO portfolio_tb VALUES (?,?,?,default);
INSERT INTO portfolio_imageitem_tb VALUES (?,?,?,default);
INSERT INTO portfolio_imageitem_tb VALUES (?,?,?,default);
INSERT INTO portfolio_imageitem_tb VALUES (?,?,?,default);
INSERT INTO portfolio_imageitem_tb VALUES (?,?,?,default);
INSERT INTO portfolio_priceitem_tb VALUES (?,?,?,default);
INSERT INTO portfolio_priceitem_tb VALUES (?,?,?,default);
INSERT INTO portfolio_priceitem_tb VALUES (?,?,?,default);
```

    
왜냐하면 JPA는 기본적으로 Batch Insert가 비활성화되어 있기 때문입니다.
    
```sql
spring.jpa.properties.hibernate.order_inserts=true
spring.jpa.properties.hibernate.order_updates=true
spring.jpa.properties.hibernate.jdbc.batch_size=50
```
    
> 하지만 위와 같이 Spring 설정 값들을 변경해주어도 여전히 동작하지 않습니다.
>
> 그 이유는 다음 Hibernate의 [공식 문서](https://docs.jboss.org/hibernate/orm/5.4/userguide/html_single/Hibernate_User_Guide.html#batch-session-batch-insert)에도 나와있는 것처럼 JPA Entity에서 Primary Key의 GenerationType을 IDENTITY로 설정할 경우에 Hibernate가 JDBC batch를 비활성화시켜 버리기 때문입니다.
> 
> 그 이유는 새로 할당할 Key 값을 미리 알 수 없는 IDENTITY 방식을 사용할 때 Batch Support를 지원하면 Hibernate가 채택한 flush 방식인 ‘Transactional Write Behind’와 충돌이 발생하기 때문이라고 합니다.
>
> 따라서 가장 널리 사용되는 IDENTITY 방식을 사용하면 Batch Insert는 동작하지 않습니다.
    
---

**(2) JDBC Template**

그렇다고 다양한 이점이 있는 IDENTITY 방식을 변경할 수는 없기 때문에 JdbcTemplate에서 Batch를 지원하는 `batchUpdate` 메서드를 사용하기로 했습니다.

```sql
@Repository
public class PortfolioImageItemJDBCRepositoryImpl implements PortfolioImageItemJDBCRepository {

    private final JdbcTemplate jdbcTemplate;
    
		...
        jdbcTemplate.batchUpdate(sql, portfolioImageItems, portfolioImageItems.size(), pss);

    ...
```

위와 같이 `batchUpdate`를 사용하면 Multi Value 형태로 작성된 SQL Batch Insert문을 실행시킬 수 있습니다.

```prolog
o.s.jdbc.core.JdbcTemplate : Executing SQL batch update [INSERT INTO portfolio_imageitem_tb ... ]
o.s.jdbc.core.JdbcTemplate : Executing prepared SQL statement [INSERT INTO portfolio_imageitem_tb ... ]
...
o.s.jdbc.core.JdbcTemplate : Executing SQL batch update [INSERT INTO portfolio_priceitem_tb ... ]
o.s.jdbc.core.JdbcTemplate : Executing prepared SQL statement [INSERT INTO portfolio_priceitem_tb ... ]
```

결과적으로 Batch Insert문을 사용하게 되면 테이블마다 하나씩 총 3개의 쿼리가 실행됩니다.

---

(3) 🏳️ 결론

구현 후 테스트를 해보았을 때,

Batch Insert를 사용하지 않고 JPA로 **1만 건의 데이터**를 삽입했을 때 약 30초(31263ms)의 시간이 소요되었지만,

Batch Insert를 사용하니 935ms로 수행 시간이 불과 1초도 되지 않는 퍼포먼스를 보여주었습니다. **약 30배 이상의 엄청난 성능 차이**를 보이는 것을 확인할 수 있습니다. 

JDBC batchUpdate는 수정(Update) 요청 시에도 마찬가지로 적용하였으며,

이를 통해, 서비스 과정에서 한꺼번에 요청 받는 데이터의 항목 수가 늘어나도 안정적인 Response 시간을 확보하며 효과적으로 잘 대처할 수 있을 것으로 기대합니다.  

<br>

### ☝️ 인덱스

> 저희 프로젝트의 궁극적인 목적은 정보 공유에 있습니다. 다른 사람들의 데이터를 이용해서 합리적인 의사결정을 내리는 것에 초점이 있기 때문에, 삽입 및 수정에 비해 조회 요청의 비율이 압도적으로 높습니다. 따라서 조회 성능을 높이기 위해 테이블에 인덱스를 추가했습니다.

- `user_tb` : 유저 테이블의 경우, 가장 빈번하게 발생하는 조회 쿼리는 유저 인증 시에 발생하는 email을 통한 엔티티 조회입니다. 따라서 email 인덱스를 추가했습니다.
- `token_tb` : 토큰은 유저 아이디에 해당하는 토큰을 조회하는 경우가 전부입니다. 따라서 인덱스로 user_id를 추가했습니다.
- `email_code_tb` : 이메일 인증코드의 경우, 이메일로 조회하는 경우 뿐입니다. 따라서 email을 인덱스로 추가했습니다.
- `quotation_tb` : match_id 혹은 유저 아이디로 조회하는 경우가 대부분입니다. 따라서 match_id를 인덱스로 추가했습니다. 유저 아이디로의 조회는 Match 테이블이므로 추가하지 않았습니다.
- `portfolio_tb` : 대부분의 경우가 플래너를 이용한 조회입니다. 따라서 planner_id를 인덱스로 추가했습니다.
- `portfolio_price_item_tb` , `portfolio_image_item_tb` : 포트폴리오를 통한 조회가 전부이기 때문데, portoflio_id를 인덱스로 추가했습니다.
- `payment_tb` : 유저 아이디를 이용한 조회가 전부이기 때문에 user_id를 인덱스로 추가했습니다.
- `match_tb` : 플래너, 커플, 플래너와 커플 3가지 경우로 조회를 시도합니다. 하지만 couple을 이용한 조회가 대다수 이고, 매칭내역 생성을 위한 플래너와 커플 모두를 사용한 조회가 다음입니다. 플래너만을 이용한 조회는 빈번하게 발생하지 않습니다. 따라서 planner_id와 couple_id를 복합키로 인덱스 설정을 하고, couple_id를 앞에 배치하였습니다.
- `favorite_tb` : 유저 아이디를 이용한 조회가 전부입니다. 포트폴리오도 필요한 경우가 있지만, 유저 아이디만 이용하는 경우가 압도적이라고 판단되어 user_id만 인덱스로 추가했습니다.
- `chat_tb` : 채팅 테이블은 다른 테이블에서 join하여 사용하는 경우가 대부분입니다. 그렇기에 id만으로 충분하기 때문에, 추가적인 인덱스를 설정하지 않았습니다.


## License

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

