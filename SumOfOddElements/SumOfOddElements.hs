-- Sum of Odd Elements.

-- You are given a list. Return the sum of odd elements from the given list. The input and output portions will be handled automatically. You need to write a function with the recommended method signature.

-- Constraints

-- The list will have elements 1 - 100.
-- Each element will be an integer where -100 <= X <= 100. 


-- Sample Input

-- 3
-- 2
-- 4
-- 6
-- 5
-- 7
-- 8
-- 0
-- 1

-- Sample Output

-- 16

-- Explanation

-- Sum of odd elements is 3 + 5 + 7 + 1 = 16

checkFilter n = odd n

f arr = sum $ filter checkFilter arr
        
main = do

   inputdata <- getContents

   putStrLn $ show $ f $ map (read :: String -> Int) $ lines inputdata
