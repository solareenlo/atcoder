package main

import (
	"fmt"
	"sort"
)

func main() {
	var n, k int
	fmt.Scan(&n, &k)

	a := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}

	b := make([]int, n)
	copy(b, a)
	sort.Ints(b)

	res := k / n
	k = k % n

	m := make(map[int]int, n)
	for i := 0; i < k; i++ {
		m[b[i]] = 1
	}

	for i := 0; i < n; i++ {
		fmt.Println(res + m[a[i]])
	}
}
