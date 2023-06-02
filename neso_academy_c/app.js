var mergeAlternately = function (word1, word2) {
  const w1Len = word1.length;
  const w2Len = word2.length;
  let i = 0;
  let w1Index = 0;
  let w2Index = 0;
  let merged = [];

  while (w1Index < w1Len && w2Index < w2Len) {
    merged[i++] = word1[w1Index++];
    merged[i++] = word2[w2Index++];
  }

  while (w1Index < w1Len) {
    merged[i++] = word1[w1Index++];
  }

  while (w2Index < w2Len) {
    merged[i++] = word2[w2Index++];
  }


  return merged.join("");
};

console.log(
  mergeAlternately("dajmknzgidixqgt", "nahamebx") === "dnaajhmakmnezbgxidixqgt"
);
