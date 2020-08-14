#include "simple_sort.h"

void simple_sort(int *arr, int len)
{
	int *m_ptr, t;
	for (int i = 0; i < len - 1; i++)
	{
		m_ptr = &arr[i];
		for (int j = i + 1; j < len; j++)
		{
			if (*m_ptr > arr[j])
			{
				m_ptr = &arr[j];
			}
		}
		if (m_ptr != &arr[i])
		{
			t = arr[i];
			arr[i] = *m_ptr;
			*m_ptr = t;
		}
	}
}
