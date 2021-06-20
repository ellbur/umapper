#!/usr/bin/env rakudo

my @lines = './keys.h'.IO.lines;

my $in-enum = False;

for @lines -> $line {
  if not $in-enum {
    if $line ~~ /.*typedef\senum.*/ {
      $in-enum = True;
    }
  }
  else {
    if $line ~~ /^\}\skey_code\;$/ {
      last;
    }
    else {
      if $line ~~ /^\s*(\w+)\,.*/ -> (Str() $name) {
        say "[$name] = \"$name\",";
      }
    }
  }
}

