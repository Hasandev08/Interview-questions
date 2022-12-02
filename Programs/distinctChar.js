//Time Complexity is O(n)

let NO_OF_CHARS = 256

function printDistinct(str) {
  let count = new Array(NO_OF_CHARS)

  for (let i = 0; i < NO_OF_CHARS; i++) count[i] = 0 //initialization of count array to 0
  
  //charCodeAt(0) gives the unicode of the character
  
  let i = 0
  for (i = 0; i < str.length; i++) {
    if (str[i] !== ' ') {
      count[str[i].charCodeAt(0)]++ //Adding numbers to the count array so that the distinct
    } //characters can be distinguished
  }

  let n = i
  for (i = 0; i < n; i++) {
    if (str[i].charCodeAt(0) === 1) console.log(str[i]) //printing the distinct characters
  }
}
