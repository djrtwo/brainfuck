char st[32768];

int main(void) {
	char *p = st;

	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;

	while(*p){
		++p;
		++*p;
		++*p;
		++*p;
		++*p;
		++*p;
		++*p;
		++*p;
		++p;
		++*p;
		++*p;
		++*p;
		++*p;
		++*p;
		++*p;
		++*p;
		++*p;
		++*p;
		++*p;
		++p;
		++*p;
		++*p;
		++*p;
		++p;
		++*p;
		--p;
		--p;
		--p;
		--p;
		--*p;
	}

	++p;
	++*p;
	++*p;
	putchar(*p);
	++p;
	++*p;
	putchar(*p);
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	putchar(*p);
	putchar(*p);
	++*p;
	++*p;
	++*p;
	putchar(*p);
	++p;
	++*p;
	++*p;
	putchar(*p);
	--p;
	--p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	++*p;
	putchar(*p);
	++p;
	putchar(*p);
	++*p;
	++*p;
	++*p;
	putchar(*p);
	--*p;
	--*p;
	--*p;
	--*p;
	--*p;
	--*p;
	putchar(*p);
	--*p;
	--*p;
	--*p;
	--*p;
	--*p;
	--*p;
	--*p;
	--*p;
	putchar(*p);
	++p;
	++*p;
	putchar(*p);
	++p;
	putchar(*p);
}
