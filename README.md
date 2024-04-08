# **ht**ml to p**hp**

hthp is a program made for converting html files into php files. It is a simple C program no one asked for but everyone needed. With this magic 37 lines of code you can turn your boring html into magical php!

## Building

This simple yet powerful program is as easy to build as to use. Simply type this one line into your console and you're ready to go!

```console
$ gcc -o main.c hthp -wall -werror -wpedantic
```

## Usage

hthp is used as simple as typing few letters in your console of choice. The command is following:
```console
$ ./hthp <input file> <output file>
```

### Example

Imagine you want to use php instead of html and renaming the file is simply not good enough for such a cool codder like you! Ideal solution would be to use hthp.

Example of html file:
```html
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>I got scammed for</title>
</head>
<body>
  <p>9.99$ so I can rename my html file to php.</p>
</body>
</html>
```

So to turn our html file to php we simply have to type (assuming you are in the same folder you built hthp)
```console
$ ./hthp index.html index.php
```

And here we are, you are now a happy user of hthp. If you'd like to support us... YOU WON'T.