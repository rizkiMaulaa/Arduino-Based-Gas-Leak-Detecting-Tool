# 🔧 Arduino Based Gas Leak Detection Tool

Proyek ini adalah project mata kuliah Dasar Mikroprosesor (Semester 3).  
Alat ini dirancang untuk mendeteksi gas berbahaya menggunakan sensor gas (contoh: MQ-2/MQ-5) dan memberikan peringatan dini melalui buzzer dan LED.  

---

## 👥 Anggota Kelompok

- Istianah  
- Naga Tunggal  
- Rizki Maula

---

## 🎯 Tujuan Proyek

Untuk mengurangi resiko dari kebocoran gas maka diperlukan perangkat yang dapat mendeteksi lebih awal apabila terjadi kebocoran gas dengan memberikan sinyal peringatan kepada pengguna, sehingga pengguna dapat mengantisipasi kerugian dan resiko keselamatan.

---

## 🛠️ Komponen yang Digunakan
- Sensor Gas MQ2
- Potentiometer
- Motor Servo
- LCD
- Kabel USB
- LED
- Power Bank

---

## ⚡ Prinsip Kerja

1. Sensor gas membaca konsentrasi gas di udara dan potensiometer sebagai pengatur ambang batas.
2. Jika sensor membaca konsentrasi gas di udara melebihi ambang batas yang ditentukan, maka:
  - Buzzer akan berbunyi.
  - LED akan menyala.
  - Motor Servo akan menyimpang 90 derajat yang akan memutar katup gas hingga saluran gas menutup.
3. Jika sensor membaca konsentrasi gas di udara kurang dari ambang batas yang ditentukan, maka:
  - Buzzer tetap dalam keadaan mati.
  - LED tetap dalam keadaan padam.
  - Motor Servo tidak akan menyimpang dan katup gas tetap terbuka untuk mengalirkan gas.

---

## 📜 Lisensi
Proyek ini dibuat untuk tujuan edukasi. Silakan gunakan, modifikasi, dan kembangkan lebih lanjut.  
