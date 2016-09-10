n = gets.strip.to_i
a = gets.strip
a = a.split(' ').map(&:to_i)

total_number_of_swaps = 0
a.each do |el|
    number_of_swaps = 0
    idx = 0
    while(idx < a.length - 1)
        if(a[idx] > a[idx + 1])
            a[idx], a[idx + 1] = a[idx + 1], a[idx]
            number_of_swaps += 1
            total_number_of_swaps += 1
        end
        idx += 1
    end
    if(number_of_swaps == 0)
        break
    end
end

puts "Array is sorted in #{total_number_of_swaps} swaps."
puts "First Element: #{a[0]}"
puts "Last Element: #{a[-1]}"