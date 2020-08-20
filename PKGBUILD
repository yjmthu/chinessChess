# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

# Maintainer: xmuli <xmulitech@gmail.com>
pkgname=chinessChess
pkgver=5.6.0
pkgrel=1
epoch=
pkgdesc="A game that can be played against the LAN based on Qt: Chinese Chess"
arch=('x86_64')
url="https://github.com/xmuli/chinessChess"
license=('GPL3')
groups=()
depends=()
makedepends=()
checkdepends=()
optdepends=()
provides=()
conflicts=()
replaces=()
backup=()
options=()
install=
changelog=
source=("$pkgname::git://github.com:xmuli/chinessChess")
noextract=()
md5sums=()
validpgpkeys=()

prepare() {
	cd "$pkgname"
	patch -p1 -i "$srcdir/$pkgname-$pkgver.patch"
}

build() {
	cd "$pkgname"
	./configure --prefix=/usr
	make
}

check() {
	cd "$pkgname"
	make -k check
}

package() {
	cd "$pkgname-$pkgver"
	make DESTDIR="$pkgdir/" install
}
