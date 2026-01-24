# study_stm32_nucleo
STM32 Nucleo 보드로 진행한 실습/예제 모음 (STM32CubeIDE 기준)

## Projects
- `LED/` : GPIO 출력(온보드 LED) 기반 가장 기본 예제
- `USB_CDC_RESET_FUNC_ADD/` : USB CDC(가상 COM 포트) + (필요 시) 리셋/복구 관련 기능 추가 실습

> 각 폴더는 “프로젝트 1개 = 폴더 1개” 구조로 관리합니다.

## Environment
- Board: (NUCLEO-F103RB) 
- IDE: STM32CubeIDE 
- Toolchain: IDE 기본 GCC / ST-LINK (기본)

## How to build & flash (STM32CubeIDE)
1. 레포 클론
   ```bash
   git clone https://github.com/KNDG01001/study_stm32_nucleo.git
   ```
