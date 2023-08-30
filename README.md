# Parrot

Courte description de votre projet en une ou deux phrases.

## Table des matières

- [Aperçu](#aperçu)
- [Prérequis](#prérequis)
- [Installation](#installation)
- [Licence](#licence)

## Aperçu

# PROJET : CHIFFRAGE

L'objectif de ce projet est de chiffrer un fichier source en utilisant l'algorithme du "perroquet". Cet algorithme se base sur un mot-clé (le perroquet) pour chiffrer le texte en calculant la différence ASCII caractère par caractère.

## Illustration du principe du perroquet :

Mot source à chiffrer : Olivier
Mot-clé (perroquet) : abcd

|Résultat en calcul ASCII|  |
|---|---|
|('O'-'a')|('l'-'b')|
|('i'-'c')|('v'-'d')|
|('i'-'a')|('e'-'b')|
|('r'-'c')|  |

Concaténation des codes ASCII : `bcdebdacf`

L'utilisateur devra définir son propre mot-clé perroquet. Celui qui chiffre et déchiffre le texte doit connaître ce mot ou phrase du "perroquet". Un fichier nommé "peroq.def" contiendra la chaîne de caractères du perroquet.

Le projet nécessitera deux fichiers :
- Source ("source.txt") : contenant le texte à chiffrer
- Résultat ("dest.crt") : contenant le texte chiffré

De plus, la source sera supprimée après le chiffrement pour ne conserver que le fichier chiffré.

Pour faciliter l'utilisation du programme, un menu simple et convivial sera proposé à l'utilisateur, incluant l'ensemble des fonctionnalités.

À la fin du projet, vous déposerez l'intégralité du projet dans la section "Travaux". Cela inclura un fichier zip de votre projet avec tous les fichiers nécessaires à son exécution, ainsi qu'un fichier texte contenant le lien vers votre dépôt distant.

**CONSEIL :** Pour favoriser la réutilisation, créez des fonctions indépendantes en leur attribuant des rôles spécifiques.

---

**Note :** Vous devriez utiliser un dépôt distant pour sauvegarder l'ensemble de vos fichiers et assurer leur suivi. Seuls les fichiers .c et .h seront suivis.

Bon courage !


## Prérequis

Indiquez les prérequis nécessaires pour exécuter votre projet. Cela pourrait inclure les outils, bibliothèques, dépendances ou environnement spécifique.

## Installation

Expliquez comment installer et configurer votre projet. Étapes spécifiques à suivre pour mettre en place l'environnement nécessaire.

```bash
git clone https://github.com/votre-utilisateur/votre-projet.git
cd votre-projet
make

