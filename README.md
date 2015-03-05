# Dirent Library

C++ Dirent Library Kullanımı

Bazen yazdığınız program ile klasörlerle ya da dosyalarla işlem yapmanız gerekebilir. Benim de ihtiyacım oldu. Biraz araştırdıktan sonra <strong>dirent</strong> kütüphanesini buldum. Bu kütüphane ile klasörler içindeki dosyaları listeleyebilir ya da dosya yoluna ulaşabilirsiniz. Bu yazımda Visual Studio 2010 kullanarak C++'ta belirtilen bir klasör içindeki dosyaları recursive ya da recursive olmadan listelemeyi göstereceğim.
<!--more-->
Öncelikle dirent.h Visual Studio'a yüklü olarak gelmiyor. Onun için kütüphaneyi indirmeli ve Visual Studio içine eklemeliyiz. <a href="http://www.softagalleria.net/dirent.php">dirent.h</a> adresinden son sürümünü indirebilirsiniz. İndirdiğiniz dirent.h dosyasını
<em>C:Program Files/Microsoft Visual Studio 10.0VCinclude</em>
adresine kopyalayın. Daha sonra visual studioyu açarak yeni bir c++ projesi oluşturun ve aşağıdaki kodu yapıştırın.

Kaynak:
<a href="http://recepdur.com/dirent-kutuphanesi/">recepdur.com/dirent-kutuphanesi</a>
