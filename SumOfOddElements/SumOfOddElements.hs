checkFilter n = odd n

f arr = sum $ filter checkFilter arr
        
main = do
   inputdata <- getContents
   putStrLn $ show $ f $ map (read :: String -> Int) $ lines inputdata
