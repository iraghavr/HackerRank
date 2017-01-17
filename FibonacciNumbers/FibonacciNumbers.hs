module Main where


fib n | n == 1 = 0
      | n == 2 = 1
      | n > 2 = fib(n-1) + fib(n-2) 


main = do

    input <- getLine

    print . fib . (read :: String -> Int) $ input
