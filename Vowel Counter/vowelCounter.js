function countVowel(str) {
  const regexp = /[AEIOU]/gi;

  const countVowels = str.match(regexp);

  return countVowels.length;
}

const string = prompt("Enter a string: ");

const result = countVowel(string);

console.log("This program has " + result + " vowels");
