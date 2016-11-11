class Person

      def initialize(firstname, lastname, id)

          @firstname = firstname
          @lastname = lastname
          @id = id
      end

      def printPerson
      
           print("Name: ",@lastname, ", ",@firstname, "\nID: ", @id)
      end 
end       

class Student < Person
 
      def initialize(firstname, lastname, id, scores)

          @score = scores.map(&:to_i).reduce(:+) / scores.size

          super(firstname, lastname, id)  
      end  

      def calculate

          @score >= 90 ? 'O' : @score>=80 ? 'E' : @score>=70 ? 'A' : @score>=55 ? 'P' : @score>=40 ? 'D' : 'T'
      end 
end

input = gets.split()
firstName = input[0]
lastName = input[1]
id = input[2].to_i

numScores = gets.to_i

scores = gets.split()

scores.each do |v|
       score = Integer(v)
end

#scores = gets.strip().split().map!(&:to_i)

s = Student.new(firstName, lastName, id, scores)
s.printPerson
print("\nGrade: ", s.calculate)