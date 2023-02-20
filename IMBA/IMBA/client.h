#pragma once
#pragma comment ( lib, "Wininet.lib" )

#include<Windows.h>
#include<wininet.h>
#include<stdio.h>



HINTERNET web_client();
void load_html_code_to_file(FILE* file, HINTERNET hHttpFile);