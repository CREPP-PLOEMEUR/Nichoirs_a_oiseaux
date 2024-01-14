# Raspberry Pi


L'objectif de ce document est de configurer rapidement le raspberry-pi pour le projet de nichoir 2023-2024


## Configuration

### Système d'exploitation

pour connaitre la version de votre Raspberry-Pi, saisir la commande suivante dans un terminal : 

```cat /etc/os-release```


Résultat de la commande 
```
PRETTY_NAME="Raspbian GNU/Linux 11 (bullseye)"
NAME="Raspbian GNU/Linux"
VERSION_ID="11"
VERSION="11 (bullseye)"
VERSION_CODENAME=bullseye
ID=raspbian
ID_LIKE=debian
HOME_URL="http://www.raspbian.org/"
SUPPORT_URL="http://www.raspbian.org/RaspbianForums"
BUG_REPORT_URL="http://www.raspbian.org/RaspbianBugs"
```

Puis saisir les commandes suivantes : 

```
sudo apt-get update
sudo apt-get -y upgrade
sudo apt-get install python3-picamera2
```

### Branchement de la caméra

Le coté bleue de la nappe doit être du coté du port Ethernet et de la prise Jack (son)

### Raspi-config

Il convient de désactiver la caméra "legacy".
Pour cela, saisir `sudo raspi-config` puis dans `Interfaces options` > `Legacy Camera` > `No`

Faire un redémarrage du raspberry-pi (`sudo shutdown`)

### Essais de la caméra

Saisir la commande suivante dans un terminal : 

```libcamera-still -o test.jpg```
