import Control.Applicative
import Control.Monad

solve :: Int -> Int

solve 0 = 1

solve n | odd n = 2 * solve (n - 1)
        | even n = 1 + solve (n - 1)

getInt :: IO Int
getInt = read <$> getLine

main :: IO ()

main = do 

     t <- getInt
 
     replicateM_ t $ do

        cycle <- getInt
      
        print $ solve cycle

        