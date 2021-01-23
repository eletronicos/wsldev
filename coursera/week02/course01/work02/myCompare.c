
int myCompare(const void *elem1, const void *elem2){
	unsigned int *p1, *p2;
       	p1 = (unsigned int *)elem1;
	p2 = (unsigned int *)elem2;
	return (*p1 % 10) - (*p2 % 10);
}

