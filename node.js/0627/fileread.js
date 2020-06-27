var fs = require("js");
fs.readFile("sample.txt", "itf8", function (err, data) {
  console.log(data);
});
