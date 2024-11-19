totaldetik = int(input("Masukkan detik: "))

hari = totaldetik // 86400
sisadetik = totaldetik % 86400
jam = sisadetik // 3600
sisadetik %= 3600
menit = sisadetik // 60
detik = sisadetik % 60

if hari > 0:
    print(f"{int(hari)} hari {jam:02}:{menit:02}:{detik:02}")
else: 
    print(f"{jam:02}:{menit:02}:{detik:02}")
