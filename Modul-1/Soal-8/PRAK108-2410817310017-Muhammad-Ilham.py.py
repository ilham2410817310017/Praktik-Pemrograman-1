import math
putaran = 5
jarak_tempuh_km = 14 
keliling_taman = jarak_tempuh_km / putaran
jari_jari = keliling_taman / (2 * math.pi)

print("Diketahui :")
print("Pak Dengklek mengelilingi taman =", putaran, "Putaran")
print("Jarak tempuh Pak Dengklek =", jarak_tempuh_km, "Kilometer")
print("\nJawaban :")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah", round(jari_jari, 2), "Kilometer")
