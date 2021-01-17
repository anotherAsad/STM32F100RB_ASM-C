// arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 code.c -o main.S
int smain(){
	int x = 5;
	return x*x;
}
