/**
 * get_bit - returns the value of a bit at a given index.
 * @index: starting from 0 of the bit you want to get.
 * @n: number to get bit.
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bit = ((n >> index) & 1);

	return (bit);
}
