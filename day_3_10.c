#include <stdio.h>
#include <stdlid.b>

int solutioin(int scores[]. int socres_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++) {
		if (0 <= scores[i] && scores[i] <= 200)
			count += 1;
	}
	return count;
}