#include"client.h"

HINTERNET web_client()
{
	HINTERNET session = InternetOpen(
		L"Mozilla/5.0",
		INTERNET_OPEN_TYPE_PRECONFIG,
		NULL,
		NULL,
		NULL);

	HINTERNET connect = InternetConnect(
		session,
		L"www.google.com",
		NULL,
		L"",
		L"",
		INTERNET_SERVICE_HTTP,
		NULL,
		NULL);

	HINTERNET hHttpFile = HttpOpenRequest(
		connect,
		L"GET", 
		L"/",   
		NULL,
		NULL,
		NULL,
		0,
		0);

	if (!HttpSendRequest(hHttpFile, NULL, NULL, NULL, NULL))
	{
		printf("HttpSendRequest error : (%lu)\n", GetLastError());

		return -1;
	}
	
	return hHttpFile;
}


void load_html_code_to_file(FILE* file, HINTERNET hHttpFile)
{
	DWORD buffer_szie = 4096;
	char* buffer;
	buffer = (char*)malloc(buffer_szie + 1);

	while (TRUE) {
		DWORD bytes_to_read;
		BOOL is_read;

		is_read = InternetReadFile(
			hHttpFile,
			buffer,
			buffer_szie + 1,
			&bytes_to_read + 1);

		if (bytes_to_read == 0) break;

		if (!is_read)
		{
			printf("InternetReadFile error : <%lu>\n", GetLastError());

			return -1;
		}
		else
		{
			fputs(buffer,file);
		}
	}

	InternetCloseHandle(hHttpFile);

	return 0;
}