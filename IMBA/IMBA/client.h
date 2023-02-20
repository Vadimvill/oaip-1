#pragma once
#pragma comment ( lib, "Wininet.lib" )

#include<Windows.h>
#include<wininet.h>
#include<stdio.h>

#define USER_AGENT L"Mozilla/5.0"
#define HOST L"www.google.com"
#define METHOD L"GET"
#define URN L"/"

HINTERNET web_client();
void load_html_code_to_file(FILE* file, HINTERNET hHttpFile);