package main

import (
	"fmt"
	"math"
)

func main() {
	var n, l int64
	fmt.Scan(&n, &l)

	var x = make([]int64, n)
	for i := 0; i < int(n); i++ {
		fmt.Scan(&x[i])
	}

	p := int64(0)
	sum := int64(0)
	for i := 1; i < int(n); i++ {
		if x[i] - x[i-1] == l {
			fmt.Println("NO")
			return
		} else if x[i] - x[i-1] < l {
			sum += x[i] - x[i-1]
			if sum >= l {
				fmt.Println("NO")
				return
			}
		} else {
			sum = 0
			p = int64(math.Max(float64(p+2*l), float64(x[i-1])))
			if x[i] <= p {
				fmt.Println("NO")
				return
			}
		}
	}

	fmt.Println("YES")
}
