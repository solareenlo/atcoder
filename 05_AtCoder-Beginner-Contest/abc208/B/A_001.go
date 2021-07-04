package main

import "fmt"

func main() {
	var p int
	fmt.Scan(&p)

	res := 0
	for p > 0 {
		q := 1
		for i := 1; q * i <= p; i++ {
			q *= i
		}
		p -= q
		res++
	}

	fmt.Println(res)
}
