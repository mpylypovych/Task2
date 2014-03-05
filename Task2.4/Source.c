/*
4. З клавіатури ввести послідовність структур з даними у формі <Числовий код>,
<Повідомлення>. Відсортувати введені записи в порядку спадання кодів і роздрукувати 
відсортований масив. Визначити кількість повідомлень, в кодах яких є поруч дві 
однакові цифри.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "myio.h"

#define MAX_MESSAGE_LENGTH 256

struct DATA
{
	unsigned long code;
	char message[MAX_MESSAGE_LENGTH];
};



int CompareCodes(const void *a, const void *b)
{
	const struct DATA *A = a;
	const struct DATA *B = b;
	unsigned long x = A->code;
	unsigned long y = B->code;
	return y-x;
}


bool CheckCode(unsigned long ix)
{
	bool b = 0;
	unsigned long ix0 = ix % 10;
	unsigned long ix1 = (ix /= 10) % 10;
	while (ix)
	{
		if (ix0 == ix1)
		{
			b = 1;
			break;
		}
		ix0 = ix1;
		ix1 = (ix /= 10) % 10;
	}
	return b;
}

int main()
{

	unsigned long n;
	printf("Enter the number of messages:\n");
	n = getNumber();

	void* pTemp = malloc(n*sizeof(struct DATA));
	struct DATA* data = pTemp;
	printf("For each message enter the code, press Enter, then enter the message itself:\n");
	for (unsigned long i = 0; i < n; i+=1)
	{
		data[i].code = getNumber();
		scanf("%s", (data[i].message));
	}

	qsort(data,n,sizeof(struct DATA),CompareCodes);
	
	printf("\nSorted array:\n\n");
	for (int i = 0; i < n; i+=1)
		printf("%i %s\n", data[i].code, data[i].message);

	int ans = 0;
	for (int i = 0; i < n; i += 1)
		ans += CheckCode(data[i].code);

	printf("The number of messages with code, containing same adjacent digits:\n%i\n", ans);
	printf("Press Enter to exit.\n");
	getchar(); getchar();

	return 0;
}