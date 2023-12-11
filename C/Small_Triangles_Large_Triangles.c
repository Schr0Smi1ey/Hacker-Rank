#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
float calculateArea(float a,float b,float c){
    float p = (a + b + c)/2;
    float s = p*(p-a)*(p-b)*(p-c);
    return (sqrt(s));
}
void sort_by_area(triangle* tr, int n) {
    for(int i=0;i<n;i++){
        float x = calculateArea(tr[i].a,tr[i].b, tr[i].c);
        for(int j = i+1;j<n;j++){
            float y = calculateArea(tr[j].a,tr[j].b, tr[j].c);
            if((x - y) > 1e-7){
                triangle temp = tr[i];
                tr[i] = tr[j];
                tr[j] = temp;
                x = y;
            }
        }
    }
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}