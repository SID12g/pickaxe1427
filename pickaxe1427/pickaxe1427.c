﻿#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <mmsystem.h>
#include "ImageLayer.h"
#pragma comment(lib,"winmm.lib")
#define _CRT_SECURE_NO_WARNINGS
#define SAVE "save.txt"

#define UP 0
#define DOWN 1
#define SUBMIT 4

enum color {
    Black = 0,
    Blue,
    Green,
    Cyan,
    Red,
    Magenta,
    Brown,
    Lgray,
    Dgray,
    Lblue,
    Lgreen,
    Lcyan,
    Lred,
    Lmagenta,
    Yellow,
    White
};

void color(int text, int bg) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text + bg * 16);
}

char userName[100] = "unknown";
int userLevel = 0;
int userMoney = 2000000;

void init() {
    system("cls");
    Sleep(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void viewImage0() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"0.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage1(){
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"1.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage2() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"2.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage3() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"3.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage4() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"4.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage5() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"5.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage6() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"6.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage7() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"7.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage8() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"1.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage9() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"9.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage10() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"10.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage11() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"11.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage12() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"12.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage13() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"13.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage14() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"14.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage15() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"15.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage16() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"16.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage17() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"17.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage18() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"18.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage19() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"19.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void viewImage20() {
    ImageLayer imageLayer = DEFAULT_IMAGE_LAYER;
    imageLayer.initialize(&imageLayer); //초기화
    Image images[3] = {
        {L"20.bmp", 0, 0, 2}, //{이미지 이름, 시작 x좌표, 시작 y좌표, 크기 배율(쓰지 않으면 기본값인 16이 들어감)} 
    }; //배열의 첫 원소가 가장 아래 그려진다.
    imageLayer.imageCount = 3; //images 배열의 크기보다 작거나 같아야 한다.
    imageLayer.images = images;
    imageLayer.renderAll(&imageLayer);
    Sleep(2000);
}

void gotoxy(int x, int y)
{
    COORD Pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int keyControl() {
    char temp = _getch();
    if (temp == 'w' || temp == 'W') {
        return UP;
    }
    else if (temp == 's' || temp == 'S') {
        return DOWN;
    }
    else if (temp == ' ') {
        return SUBMIT;
    }
}

void titleDraw() {
    printf("\n\n\n\n"); 
    printf("                                  ______  _____  _____  _   __  ___  __   __ _____ \n"); 
    printf("                                  | ___ \\|_   _|/  __ \\| | / / / _ \\ \\ \\ / /|  ___|\n"); 
    printf("                                  | |_/ /  | |  | /  \\/| |/ / / /_\\ \\ \\ V / | |\n"); 
    printf("                                  |  __/   | |  | |    |    \\ |  _  | /   \\ |  __| \n"); 
    printf("                                  | |     _| |_ | \\__/\\| |\\  \\| | | |/ /^\\ \\| |__\n"); 
    printf("                                  \\_|     \\___/  \\____/\\_| \\_/\\_| |_/\\/   \\/\\____/ \n\n\n\n"); 
}

int menuDraw() {
    int x = 53;
    int y = 15;
    gotoxy(x-2, y);
    printf("> 이지모드");
    gotoxy(x, y+2);
    printf("하드모드");
    gotoxy(x, y+4);
    printf("불러오기");
    gotoxy(x, y + 6);
    printf("끝내기");
    while (1) {
        int n = keyControl();
        switch (n) {
            case UP: {
                if (y > 15) {
                    gotoxy(x - 2, y);
                    printf(" ");
                    gotoxy(x - 2, y - 2);
                    printf(">");
                    y = y - 2;
                }
                break;
            }
            case DOWN: {
                if (y < 21) {
                    gotoxy(x - 2, y);
                    printf(" ");
                    gotoxy(x - 2, y + 2);
                    printf(">");
                    y = y + 2;
                }
                break;
            }
            case SUBMIT: {
                return y - 15;
            }
        }
    }
}

char pName[50][53] = {
    "허지현의 나약한 곡괭이",
    "김진호의 나무 곡괭이",
    "김도현의 돌 곡괭이",
    "이기찬의 그냥 곡괭이",
    "허지현의 용의 발톱으로 만든 곡괭이",
    "장건희의 철 곡괭이",
    "이기원의 인간 곡괭이",
    "김도윤의 시크릿 곡괭이",
    "이준성",
    "박진우의 고무 곡괭이",
    "이현명의 뼈 곡괭이",
    "손희창의 쿠키 곡괭이",
    "황석준의 버섯 곡괭이",
    "김승원의 괭이",
    "박종윤의 국산 곡괭이",
    "구본찬의 LG 곡괭이",
    "노현규의 투명 곡괭이",
    "랍스터의 맛있는 곡괭이",
    "허지현이 약탈한 김진호의 가짜 곡괭이",
    "이준성의 뿌셔뿌셔 곡괭이",
    "김진호의 야구 방망이",
};

struct Pickaxe {
    char name[100];
    int percent;
}pix[21];

void sayHello() {
    init();
    gotoxy(52, 15);
    printf("%s님 안녕하세요!", userName);
    Sleep(3000);
    init();
}

int userMode = 0;

int ez[21] = { 100, 95, 95, 95, 90, 90, 85, 85, 80, 75, 70, 65, 65, 60, 60, 55, 50, 45, 40, 30 };

int hd[21] = { 100, 95, 90, 90, 85, 85, 80, 80, 75, 75, 70, 65, 60, 50, 50, 45, 35, 30, 30, 25 };

int tzd[21] = { 100, 100,  100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, };

int cost[21] = {1000, 2000, 5000, 10000, 15000, 17000, 20000, 30000, 40000, 55000, 60000, 61000, 67000, 70000, 80000, 100000, 110000, 115000, 120000, 200000};

void easyMode() {
    for (int i = 0; i < 21; i++) {
        strcpy(pix[i].name, pName[i]);
        pix[i].percent = ez[i];
    }

    while (1) {
        init();
        switch (userLevel) {
        case 0: viewImage0(); break;
        case 1: viewImage1(); break;
        case 2: viewImage2(); break;
        case 3: viewImage3(); break;
        case 4: viewImage4(); break;
        case 5: viewImage5(); break;
        case 6: viewImage6(); break;
        case 7: viewImage7(); break;
        case 8: viewImage8(); break;
        case 9: viewImage9(); break;
        case 10: viewImage10(); break;
        case 11: viewImage11(); break;
        case 12: viewImage12(); break;
        case 13: viewImage13(); break;
        case 14: viewImage14(); break;
        case 15: viewImage15(); break;
        case 16: viewImage16(); break;
        case 17: viewImage17(); break;
        case 18: viewImage18(); break;
        case 19: viewImage19(); break;
        case 20: viewImage20(); break;
        }

        init();
        printf("단계 : %d\n", userLevel);
        printf("강화 성공 확률 : %d%\n", pix[userLevel].percent);
        printf("보유 돈 : %d\n", userMoney);
        printf("강화 비용 : %d\n", cost[userLevel]);
        printf("게임 모드 : 이지 모드\n");
        printf("save : s");
        int n = keyControl();
        switch (n) {
        case SUBMIT: {
            init();
            srand(time(NULL));
            int random = rand() % 100;
            if (random < ez[userLevel]) {
                if (userLevel == 19) {
                    init();
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
                    gotoxy(47, 15);
                    printf("당신의 도전은 성공하였습니다.\n   다시 시작 : space\n   quit : w");
                    while (1) {
                        int n = keyControl();
                        if (n == SUBMIT) {
                            userLevel = 0;
                            userMoney = 2000000;
                            init();
                            gotoxy(0, 0);
                            easyMode();
                        }
                        else if (n == UP) {
                            return;
                        }
                    }
                }
                else if (userLevel < 20) {
                    userMoney -= cost[userLevel];
                    userLevel += 1;
                }
            }
            else {
                init();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                gotoxy(47, 15);
                printf("당신의 도전은 %d단계에서 멈췄습니다.\n   다시 시작 : space\n    quit:w", userLevel);
                while (1) {
                    int n = keyControl();
                    if (n == SUBMIT) {
                        userLevel = 0;
                        userMoney = 2000000;
                        init();
                        gotoxy(0, 0);
                        easyMode();
                    }
                    else if (n == UP) {
                        return;
                    }
                }
            }
            break;
        }
        case DOWN: {
             
                FILE* file = fopen(SAVE, "w");
                fprintf(file, "%s %d %d %d", userName, userMoney, userLevel, userMode );
                fclose(file);
        }
        }
    }
}

void hardMode() {
    for (int i = 0; i < 21; i++) {
        strcpy(pix[i].name, pName[i]);
        pix[i].percent = ez[i];
    }

    while (1) {
        init();
        switch (userLevel) {
        case 0: viewImage0(); break;
        case 1: viewImage1(); break;
        case 2: viewImage2(); break;
        case 3: viewImage3(); break;
        case 4: viewImage4(); break;
        case 5: viewImage5(); break;
        case 6: viewImage6(); break;
        case 7: viewImage7(); break;
        case 8: viewImage8(); break;
        case 9: viewImage9(); break;
        case 10: viewImage10(); break;
        case 11: viewImage11(); break;
        case 12: viewImage12(); break;
        case 13: viewImage13(); break;
        case 14: viewImage14(); break;
        case 15: viewImage15(); break;
        case 16: viewImage16(); break;
        case 17: viewImage17(); break;
        case 18: viewImage18(); break;
        case 19: viewImage19(); break;
        case 20: viewImage20(); break;
        }

        init();
        printf("단계 : %d\n", userLevel);
        printf("강화 성공 확률 : %d%\n", pix[userLevel].percent);
        printf("보유 돈 : %d\n", userMoney);
        printf("강화 비용 : %d\n", cost[userLevel]);
        printf("게임 모드 : 하드 모드\n");
        printf("save : s");
        int n = keyControl();
        switch (n) {
        case SUBMIT: {
            init();
            srand(time(NULL));
            int random = rand() % 100;
            if (random < hd[userLevel]) {
                if (userLevel == 19) {
                    init();
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
                    gotoxy(47, 15);
                    printf("당신의 도전은 성공하였습니다.\n   다시 시작 : space\n   quit : w");
                    while (1) {
                        int n = keyControl();
                        if (n == SUBMIT) {
                            userLevel = 0;
                            userMoney = 2000000;
                            init();
                            gotoxy(0, 0);
                            hardMode();
                        }
                        else if (n == UP) {
                            return;
                        }
                    }
                }
                else if (userLevel < 20) {
                    userMoney -= cost[userLevel];
                    userLevel += 1;
                }
            }
            else {
                init();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                gotoxy(47, 15);
                printf("당신의 도전은 %d단계에서 멈췄습니다.\n   다시 시작 : space\n    quit:w", userLevel);
                while (1) {
                    int n = keyControl();
                    if (n == SUBMIT) {
                        userLevel = 0;
                        userMoney = 2000000;
                        init();
                        gotoxy(0, 0);
                        easyMode();
                    }
                    else if (n == UP) {
                        return;
                    }
                }
            }
            break;
        }
        case DOWN: {

            FILE* file = fopen(SAVE, "w");
            fprintf(file, "%s %d %d %d", userName, userMoney, userLevel, userMode);
            fclose(file);
        }
        }
    }
}

int main() {
    PlaySound(L"bgm.wav", 0, SND_FILENAME | SND_ASYNC | SND_LOOP);
    _getch();
    titleDraw();
    int menu = menuDraw();
    init();
    printf("menu : %d", menu);
    switch (menu) {
        case 0: {
            userMode = 0;
            gotoxy(53, 15);
            printf("유저명을 입력해주세요.\n");
            gotoxy(60, 17);
            scanf("%s", userName);
            sayHello();
            easyMode();
            break;
        }
        case 2: {
            userMode = 1;
            gotoxy(53, 15);
            printf("유저명을 입력해주세요.\n");
            gotoxy(60, 17);
            scanf("%s", userName);
            init();
            hardMode();
            break;
        }
        case 4: {
            FILE* file = fopen(SAVE, "w");
            fprintf(file, "%s %d %d %d", userName, userMoney, userLevel, userMode);
            fclose(file);
            if (userMode) {
                hardMode();
            }
            else {
                easyMode();
            }
            break;
        }
        case 6: {
            gotoxy(53, 15);
            printf("게임을 종료합니다.\n\n\n\n\n\n\n\n");
            return 0;
        }
              return 0;
    }
    


    
}