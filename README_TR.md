# WitchHunt

## Proje Özeti
**WitchHunt**, **ICBYTES** kütüphanesi kullanılarak C++ ile geliştirilmiş 2D bir oyun/simülasyon projesidir. Projenin amacı; yüksek seviye oyun motorlarına (Unity/Unreal vb.) bağlı kalmadan **game loop (oyun döngüsü)**, **olay tabanlı girdi işleme (event-driven input handling)**, **2D render/çizim hattı (rendering pipeline)** ve **basit durum yönetimi (state management)** gibi temel kavramları anlaşılır ve değerlendirilebilir bir kod tabanında göstermektir.


---

## Kullanılan Teknolojiler
- **Dil:** C++
- **Grafik & Girdi Kütüphanesi:** ICBYTES  
  https://github.com/cembaykal/ICBYTES
- **Geliştirme Ortamı:** Microsoft Visual Studio (Windows)
- **Yaklaşım:** Olay tabanlı programlama + prosedürel game loop tasarımı

---

## Proje Yapısı
Aşağıdaki yapı, akışın net takip edilebilmesi için bilerek minimal tutulmuştur:

```text
WitchHunt/
├── Main.cpp                 # Uygulama giriş noktası ve ana oyun döngüsü
├── WitchHunt.sln            # Visual Studio solution dosyası
├── WitchHunt.vcxproj        # Proje yapılandırması
├── WitchHunt.vcxproj.filters
├── WitchHunt.vcxproj.user
└── README.md
```

---

## Öne Çıkan Teknik Başlıklar
- **Game Loop Mimarisi**
  - Sürekli çalışan update–render döngüsü
  - Frame bazlı akış: *Input → Update → Render*
- **Girdi (Input) Yönetimi**
  - Klavye olaylarının ICBYTES üzerinden işlenmesi
  - Olay tabanlı kontrol mantığı
- **Rendering / Çizim**
  - 2D çizim primitifleri ve ekran güncellemesi
  - Sahne çıktısının yönetimi
- **Durum (State) Mantığı**
  - Oyun akışının temel durumlarla kontrol edilmesi (örn. başlangıç/oynanış)

Bu başlıklar, modern oyun motorlarının ve etkileşimli sistemlerin temelini oluşturur.

---

## Kurulum ve Çalıştırma

### Gereksinimler
- Windows
- **Visual Studio** (Desktop development with C++ bileşeni yüklü)
- ICBYTES kütüphanesi

### Adımlar
1. ICBYTES kütüphanesini indir:
   ```bash
   git clone https://github.com/cembaykal/ICBYTES
   ```

2. Bu repository'yi klonla:
   ```bash
   git clone <https://github.com/aanomali/WitchHunt>
   ```

3. `WitchHunt.sln` dosyasını Visual Studio ile aç.

4. Proje ayarlarında ICBYTES için:
   - **Include** (Header) yolu
   - **Library** (Lib) yolu  
   tanımlamalarını yap.

5. **Build** al ve çalıştır.

> Not: ICBYTES'in proje entegrasyonu, kullandığınız klasör yapısına göre değişebilir. Bu nedenle `Additional Include Directories` ve `Additional Library Directories` alanlarını kendi ortamınıza göre düzenleyin.

---

## Akademik / CV Odaklı Katkı ve Öğrenimler
Bu projeyle birlikte:
- C++ ile **düşük seviyede** (engine'siz) oyun programlama akışını kurma,
- Harici bir kütüphaneyi (ICBYTES) projeye dahil etme ve yapılandırma,
- Event-driven yaklaşım ile input yönetimi tasarlama,
- Render ve state kavramlarını temel seviyede uygulama  
konularında pratik kazanılmıştır.

---

## Geliştirme Fikirleri (Gelecek Çalışmalar)
- Nesne yönelimli mimari: `Engine / Entity / Input / Render` ayrımı
- Çarpışma (collision) sistemi
- Basit AI davranışları
- Skor ve UI katmanı
- Çoklu seviye (level) yapısı
- Değişken karakterler

---

## Lisans
Bu proje eğitim amaçlı geliştirilmiştir.  
ICBYTES kütüphanesinin lisans koşulları geçerlidir.
