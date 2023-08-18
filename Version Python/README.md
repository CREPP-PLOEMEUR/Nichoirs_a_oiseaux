# Projet de Nichoir Connecté

![Nichoir Connecté](images/nichoir.jpg)

Le Projet de Nichoir Connecté est une initiative permettant d'observer l'activité des oiseaux de manière discrète. Ce nichoir est équipé d'un Raspberry Pi Zero W, d'un capteur PIR (Passive Infrared) et d'un ensemble de LED infrarouges, le tout logé dans un boîtier en bois. Cette combinaison de composants permet de détecter la présence d'oiseaux et d'illuminer l'intérieur du nichoir pour une observation facilitée.

## Fonctionnalités

- **Détection de Présence**: Le capteur PIR détecte les mouvements dans le nichoir, ce qui permet de savoir quand les oiseaux entrent ou sortent.

- **Éclairage Intérieur**: Lorsqu'un mouvement est détecté, les LED infrarouges s'allume pour offrir une vision claire de l'intérieur du nichoir, même pendant la nuit.

- **Connectivité WiFi**: Grâce au Raspberry Pi Zero W, le nichoir peut être connecté à un réseau WiFi, permettant ainsi de recevoir des notifications en temps réel sur votre appareil.

- **Enregistrement Vidéo**: 

## Matériaux Requis

- Raspberry Pi Zero W
- Capteur PIR
- LED infrarouges
- Résistances et câbles
- Boîtier en bois
- Caméra Raspberry Pi

## Montage

## Dépendances

### Mises à jour
Avant d'installer les dépendances, veuillez faire une mise à jour du système en saisissant les commandes suivantes dans un terminal :

- `sudo apt-get update`
- `sudo apt-get upgrade`

### Installations

Voici la liste des dépendances nécessaires pour le fonctionnement de ce projet. Chaque dépendance peut s'installer avec la ligne de commande associée (dans un terminal sous le Raspberry Pi) : 

- **pip** : `sudo apt-get install python3-pip`
- **picamera** : `pip3 install picamera`
- **botle** : `pip3 install bottle`
- **git** : `sudo apt-get install git`

## Configuration et Utilisation

1. Clonez ce dépôt sur votre Raspberry Pi Zero W.

`git clone https://github.com/CREPP-PLOEMEUR/Nichoirs_a_oiseaux`

2. Exécutez le programme à l'aide de la commande `python3 main.py`.

3. Vous pouvez accéder au flux vidéo et aux notifications via l'adresse IP de votre Raspberry Pi.

## Axes d'optimisations

1. Réduire la consommation de l'ensemble [1]
2. Faire une redirection de port pour accéder au nichoir depuis l'extérieur du réseau local

## Contribution

Les contributions à ce projet sont les bienvenues. Si vous souhaitez apporter des améliorations ou ajouter de nouvelles fonctionnalités, n'hésitez pas.


**Note**: Ce projet est à titre expérimental et à des fins éducatives. Utilisez-le de manière responsable.


## Bibliographie et lectures associées

[1] Jeff Geerling, "Raspberry Pi Zero - Conserve power and reduce draw to 80mA"
[2] Nicolas Le Guerroué


*Ce README a été rédigé par Nicolas Le Guerroué*