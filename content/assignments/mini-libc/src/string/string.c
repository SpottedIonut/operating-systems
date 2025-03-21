// SPDX-License-Identifier: BSD-3-Clause

#include <string.h>

char *strcpy(char *destination, const char *source)
{
	/* TODO: Implement strcpy(). */
	size_t length = strlen(source);
	// copiem pana la (length + 1) pentru a copia si terminatorul
	for (size_t i = 0; i < length + 1; i++)
		destination[i] = source[i];
	return destination;
}

char *strncpy(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncpy(). */
	for (size_t i = 0; i < len; i++) {
		destination[i] = source[i];
		if (destination + i == NULL)
			return destination;
	}
	return destination;
}

char *strcat(char *destination, const char *source)
{
	/* TODO: Implement strcat(). */
	strcpy(destination + strlen(source), source);
	return destination;
}

char *strncat(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncat(). */
	size_t dest_len = strlen(destination), i;

	for (i = 0; i < len; i++) {
		destination[dest_len + i] = source[i];
		if (source + i == NULL)
			return destination;
	}
	destination[dest_len + i + 1] = 0;
	return destination;
}

int strcmp(const char *str1, const char *str2)
{
	/* TODO: Implement strcmp(). */
	size_t len = strlen(str1), i;
	for (i = 0; i < len; i++) {
		if (str1[i] < str2[i])
			return -1;
		if (str1[i] > str2[i])
			return 1;
	}
	if (str2 + i != NULL)
		return -1;
	return 0;
}

int strncmp(const char *str1, const char *str2, size_t len)
{
	/* TODO: Implement strncmp(). */
	for (size_t i = 0; i < len; i++) {
		if (str1[i] < str2[i])
			return -1;
		if (str1[i] > str2[i])
			return 1;
		if (str1 + i == NULL && str2 + i == NULL)
			return 0;
	}
	return 0;
}

size_t strlen(const char *str)
{
	size_t i = 0;

	for (; *str != '\0'; str++, i++)
		;

	return i;
}

char *strchr(const char *str, int c)
{
	/* TODO: Implement strchr(). */
	size_t len = strlen(str);
	for (size_t i = 0; i < len; i++) {
		if (str[i] == c)
			return &str[i];
	}
	return NULL;
}

char *strrchr(const char *str, int c)
{
	/* TODO: Implement strrchr(). */
	
	return NULL;
}

char *strstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strstr(). */
	return NULL;
}

char *strrstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strrstr(). */
	return NULL;
}

void *memcpy(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memcpy(). */
	return destination;
}

void *memmove(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memmove(). */
	return destination;
}

int memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	/* TODO: Implement memcmp(). */
	return -1;
}

void *memset(void *source, int value, size_t num)
{
	/* TODO: Implement memset(). */
	return source;
}
