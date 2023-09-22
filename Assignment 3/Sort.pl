# Variables
my @array = ();

# Function Calling
userInput(); # Gets User input
sortArray(); # Sorts the array.

# Prints out array
print("@array");

=begin comment
    Type: Function
    Name: userInput
    Return: Void
    Description: Asks the ten times to enter in Integer Values. Once the array has reached
    the maximum of ten values, the function is exited.
=end comment
=cut
sub userInput {
    while(scalar @array < 10) {
        print("Enter in value: ");
        my $tmp = <STDIN>;
        push(@array, $tmp);
    }

    return undef
}

=begin comment
    Type: function
    Name: sortArray
    Return: Void
    Description: Sorts the array in ascending order. If the OUTTER value is greater than the INNER value, then
    the two values are switched in placement of the array.
=end comment
=cut
sub sortArray {
=multi-line comment
    for(my $i = 0; $i < scalar @array; $i++) {
        for(my $j = $i + 1; $j < scalar @array; $j++) {
            if($array[j] < $array[i]) {
                my $tmp = $array[i];
                $array[i] = $array[j];
                $array[j] = $tmp;
            }
        }
    }
=end comment
=cut

    foreach $i (@array) {
        foreach $j (@array) {
            if($j > $i) {
                ($i, $j) = ($j, $i);
            }
        }
    }

    return undef
}