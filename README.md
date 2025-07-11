# VirtualGamePad

VirtualGamePad, bilgisayarınızı uzaktan bir mobil cihaz üzerinden kontrol etmenizi sağlayan açık kaynaklı bir projedir. Mobil uygulama, bilgisayarınıza bağlanarak sanal bir gamepad gibi çalışır ve klavye/fare girdilerini bilgisayara iletir. Oyunlar veya diğer uygulamalar için özelleştirilebilir tuş haritaları sunar.

## Özellikler
- Android mobil uygulaması ile Windows bilgisayarı kontrol etme
- Klavye ve fare simülasyonu (oyun veya uygulama fark etmeksizin)
- Özelleştirilebilir tuş haritaları ve profil desteği
- QR kod ile hızlı bağlantı
- Açık kaynak kodlu ve topluluk katkısına açık

## Platformlar
- **PC Sunucu:** Windows 10/11 (Qt6 ile geliştirilmiştir)
- **Mobil İstemci:** Android (Kotlin, Jetpack Compose)

## Kurulum

### PC Sunucu (Windows)
1. [Qt 6.8](https://www.qt.io/download-open-source) ve [CMake](https://cmake.org/download/) kurulu olmalıdır.
2. Depoyu ve alt modülleri klonlayın:
   ```bash
   git clone --recurse-submodules https://github.com/kitswas/VirtualGamePad.git
   ```
3. Derleme adımları:
   ```bash
   cd Controller-PC-main
   cmake -B build
   cmake --build build
   ```
4. `VGamepadPC.exe` dosyasını çalıştırarak sunucuyu başlatın.

### Mobil İstemci (Android)
1. `Mobile Client/app` klasörünü Android Studio ile açın.
2. Gerekli bağımlılıkların yüklenmesini bekleyin.
3. Uygulamayı cihazınıza veya emülatöre yükleyin.

## Kullanım
1. PC sunucusunda uygulamayı başlatın ve port numarasını not edin.
2. Mobil uygulamayı açın, bilgisayarın IP adresini ve portunu girin veya QR kod ile otomatik doldurun.
3. Bağlantı kurulduktan sonra mobil cihazınızdan bilgisayarı kontrol edebilirsiniz.
4. Farklı oyunlar veya uygulamalar için tuş profilleri oluşturabilirsiniz.

## Katkı ve Geri Bildirim
- Hataları veya önerileri [GitHub Issues](https://github.com/kitswas/VirtualGamePad/issues) üzerinden bildirebilirsiniz.
- Katkıda bulunmak için lütfen bir fork oluşturup pull request gönderin.

## Lisans
Bu proje açık kaynaklıdır. Detaylar için lütfen ilgili klasörlerdeki LICENSE veya LICENCE.TXT dosyalarını inceleyin.

---
Daha fazla bilgi ve dokümantasyon için: [kitswas.github.io/VirtualGamePad/](https://kitswas.github.io/VirtualGamePad/) 