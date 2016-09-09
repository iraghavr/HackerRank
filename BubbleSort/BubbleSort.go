package main
import "fmt"

func main() {
    var n int
    fmt.Scanf("%d", &n)
    a := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scanf("%d", &a[i])
    }
    var swaps int
    for i := 0; i < n; i++ {
        var x int
        for j := 0; j < n-1; j++ {
            if a[j] > a[j+1] {
                a[j], a[j+1] = a[j+1], a[j]
                x++
            }
        }
        if x == 0 {
            break
        }
        swaps += x
    }
    fmt.Println("Array is sorted in", swaps, "swaps.")
    fmt.Println("First Element:", a[0])
    fmt.Println("Last Element:", a[n-1])