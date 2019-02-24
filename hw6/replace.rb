x = STDIN.read

# f- -> gh-
x = x.gsub(/\b[f]/, 'gh')
x = x.gsub(/\b[F]/, 'Gh')

# -sh -> -ti
x = x.gsub(/[s][h]\b/, 'ti')
x = x.gsub(/[S][h]\b/, 'Ti')
x = x.gsub(/[s][H]\b/, 'tI')
x = x.gsub(/[S][H]\b/, 'TI')

# -i- -> -o-
x = x.gsub(/\Bi\B/, 'o')
x = x.gsub(/\BI\B/, 'O')

puts x	
