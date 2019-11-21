# c-arrays

Γράψτε ένα πρόγραμμα στη C το οποίο:
1. Θα δημιουργεί με κλήση της συνάρτησης rand() δύο (2) ταξινομημένους κατ’ αύξουσα σειρά μονοδιάστατους πίνακες Μ και Ν στοιχείων αντίστοιχα, τους οποίους και θα τους εμφανίζει στη οθόνη. Το εύρος τιμών των στοιχείων του πίνακα είναι στο διάστημα [100-999].
Προσέξτε, το πρόγραμμα θα φροντίζει ο κάθε πίνακας να διατηρεί ταξινομημένα τα στοιχεία του όταν δίδονται τιμές για αυτά από τη συνάρτηση rand() – Δηλαδή δεν θα «γεμίζουμε» πρώτα τον πίνακα και μετά θα κάνουμε ταξινόμηση των στοιχείων του. Επίσης, θα φροντίζει ώστε να μην υπάρχουν διαδοχικά στοιχεία που να είναι ίσα μεταξύ τους.
2. Το πρόγραμμα σας στη συνέχεια θα δημιουργεί ένα τρίτο πίνακα, ο οποίος θα περιέχει ταξινομημένα τα στοιχεία των 2 αρχικών (ταξινομημένων) πινάκων. Στην περίπτωση που ένα στοιχείο είναι κοινό και στους δυο πίνακες, τότε αυτό θα εμφανίζεται μόνο μια φορά στον τρίτο πίνακα. Αυτός ο τρίτος πίνακας θα πρέπει προφανώς να έχει αριθμό στοιχείων ικανό να χωρέσει και τους 2 αρχικούς πίνακες (διάσταση τουλάχιστον Μ+Ν). Το πρόγραμμα σας θα εμφανίζει στο τέλος το νέο πίνακα αντίστροφα (στοιχεία φθίνουσα σειρά).
Προσοχή ξανά: δεν θα δημιουργείται ο νέος πίνακας απλά ενώνοντας τους δύο αρχικούς και μετά να γίνεται ταξινόμηση των στοιχείων του. Θα φροντίζετε ο νέος πίνακας να διατηρείται ταξινομημένος καθώς καταχωρούνται σε αυτό τα στοιχεία των δυο αρχικών πινάκων. 


Write a programm in c

1. Will create using rand 2 sorted 1 dimensional arrays, with length m and n respectively and will print then on screen. The range of values will be 100-999. Should take care the values of arrays remain always sorted while inserted. Will not insert the values and sort them afterwards. should be no duplicates in arrays.

2. After that the programm creates a third array that holds sorted the values of the 2 previously generated arrays. This third array should be big enough to pass all values of the 2 arrays. The programm prints the new array with values in reversed order. Should not concatenate the 2 arrays to create the third and sort its values later. Should take care to keep the new array sorted while its generated.
