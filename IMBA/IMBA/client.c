#include"client.h"


HINTERNET web_client()
{
	HINTERNET session = InternetOpen(
		USER_AGENT,
		INTERNET_OPEN_TYPE_PRECONFIG,
		NULL,
		NULL,
		NULL);

	HINTERNET connect = InternetConnect(
		session,
		HOST,
		NULL,
		L"",
		L"",
		INTERNET_SERVICE_HTTP,
		NULL,
		NULL);

	HINTERNET hHttpFile = HttpOpenRequest(
		connect,
		METHOD,
		URN,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL);

	if (!HttpSendRequest(hHttpFile, NULL, NULL, NULL, NULL))
	{
		printf("HttpSendRequest error : (%lu)\n", GetLastError());

		exit(-1);
	}
	
	return hHttpFile;
}

void load_html_code_to_file(FILE* file, HINTERNET hHttpFile)
{
	DWORD buffer_szie = BUFSIZ;
	char* buffer;
	buffer = (char*)malloc(buffer_szie + 2);
	
	while (TRUE) {
		DWORD bytes_to_read;
		BOOL is_read;

		is_read = InternetReadFile(
			hHttpFile,
			buffer,
			buffer_szie + 1,
			&bytes_to_read);

		if (bytes_to_read == 0) break;

		if (!is_read)
		{
			printf("InternetReadFile error : <%lu>\n", GetLastError());

			exit(-1);
		}
		else
		{
			buffer[bytes_to_read] = 0;
			fputs(buffer,file);
		}
	}

	free(buffer);
	InternetCloseHandle(hHttpFile);
}