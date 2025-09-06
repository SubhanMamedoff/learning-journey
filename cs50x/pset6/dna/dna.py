import csv
import sys


def main():

    # TODO: Check for command-line usage
    if len(sys.argv) == 3:
        try:
            rows = []
            with open(sys.argv[1], 'r') as database_file:
                database = csv.DictReader(database_file)
                for row in database:
                    rows.append(row)
            sequence_file = open(sys.argv[2], 'r')
            sequence = sequence_file.read()
        except FileNotFoundError:
            print("File Not Found")
            return 1
    else:
        print("Usage: python dna.py database.csv sequence.txt")

    # TODO: Find longest match of each STR in DNA sequence
    strs = rows[0].keys()
    strs = list(strs)[1:]

    results = {}
    for subsequence in strs:
        results[subsequence] = longest_match(sequence, subsequence)

    for person in rows:
        person_dict = {}
        for key in results:
            person_dict[key] = int(person[key])
        if person_dict == results:
            print(person["name"])
            break
    else:
        print("No match")


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
