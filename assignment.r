input <- readline(prompt = "Enter an integer :")
input <- as.integer(input)
cat("Is input is equal to 94842 ?", input == 94842, "\n")

input <- readline(prompt = "Enter an input :")
# input <- NA
cat("Is input is equal to N.A. ?", is.na(input), "\n")

input <- readline(prompt = "Enter an input :")
input <- as.integer(input)
cat("Is input lower than -12 or greater than 29 ?", input > 29 || input < -12, "\n")

input <- readline(prompt = "Enter an input :")
input <- as.integer(input)
input <- 121
cat("Is input an odd number and lies between 8 and 12 or between 100 and 150 ?", input %% 2 == 1 && ((input > 8 && input < 12) || (input > 100 && input < 150)), "\n")

alice.prefs <- c("Twitter", "Chrome", "Mac", "Summer")
bob.prefs <- c("Facebook", "Chrome", "PC", "Summer")
common <- alice.prefs == bob.prefs
cat(all(common), "\n")
cat(any(common), "\n")

age <- c(18, NA, 25, 71, NA, 45, NA, NA, 18)
temp <- age
result <- is.na(age)
print(result)
indices <- which(result)
print(indices)
for(i in length(indices):1){
  temp <- temp[-indices[i]]
}
print(temp)
print(age[!result])

attach(cars)
speed
dist
cat("Average of speed is", mean(speed), "\n")
cat("Average of dist is", mean(dist), "\n")
cat("Standard Deviation of speed is", sd(speed), "\n")
cat("Standard Deviation of dist is", sd(dist), "\n")

hist(dist)
hist(speed)

plot(speed, dist)

speed <- cars$speed
dist <- cars$dist

print(which(speed >= 15))
print(which.min(dist))
print(speed[which.max(dist)])

n <- readline(prompt = "Enter an integer :")
n <- as.integer(n)

factorial <- function(n){
  if(n == 0){
    return(1);
  }
  return(n * factorial(n - 1));
}
print(factorial(n))

a <- readline(prompt = "Enter an integer :")
a <- as.integer(a)
b <- readline(prompt = "Enter an integer :")
b <- as.integer(b)
n <- readline(prompt = "Enter an integer :")
n <- as.integer(n)

fibonacci <- function(a, b, n){
  if(n == 1){
    return(a)
  }else if(n == 2){
    return(b)
  }
  for(i in 3:n){
    c = a + b
    a = b
    b = c
  }
  return(c)
}
print(fibonacci(a, b, n))

str1 <- "Hjkahkfha"
cat("Length of", str1, "is", nchar(str1))

str2 <- "akdhfkah"
str3 <- paste(str1,str2, sep = "-")
str4 <- paste(str1, str2, str3, sep = "")
cat(str1, str2, str3, str4, "\n")
print(str2 == "akdhfkah")
print(str2 == str1)
substr1 = substr(str2, 2, 5)
substr2 = substring(str2, 2)
print(substr1)
print(substr2)
# print(substr(str2, 2, 5) <- "hiih")

shape <- c("round","oval","long","round","oval","long","round","oval","long","round","oval","long")
pattern <- c("pattern","pattern","pattern","plain","plain","plain","pattern","pattern","pattern","plain","plain","plain")
shade <- c("light","light","light","light","light","light","dark","dark","dark","dark","dark","dark")
count <- c(2,0,3,1,3,2,9,0,2,1,11,2)

output <- data.frame(Shape = shape, Pattern = pattern, Shade = shade, Count = count)
# print(output)
write.csv(output, file = "data.csv", quote = FALSE, row.names = FALSE)
input <- read.csv(file = "data.csv", header = TRUE, nrows = 50)
print(input[1][2])

cat("Which sort of candy is most common in the bag of candies ?\n", shape[which.max(count)], pattern[which.max(count)], shade[which.max(count)], "\n")
cat("Sum of number of all candies of round shape is", sum(count[which(shape == "round")]), "\n")

# sort
