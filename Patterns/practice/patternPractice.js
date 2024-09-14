const n = 4;
for (let row = 0; row <= n; row++) {
  let str = "";
  for (let col = 0; col <= row; col++) {
    str += "*";
  }
  console.log(str);
}
