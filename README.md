# PROJET : PARROT

## Introduction du projet

On souhaite à partir d’un fichier source, faire en sorte de le chiffrer en utilisant l’algorithme du « perroquet ».

Cet algorithme repose sur un mot (le perroquet) qui permet de chiffrer en calculant la différence
ASCII caractère par caractère.

### Illustration du principe du perroquet :

| Dénomination | Exemple |
|-----------|-----------|
| Mot source à chiffrer  | Olivier   |
| Perroquet   | abcd   |
| Résultat en calcul ascii   | (‘O’-‘a’)(‘l’-‘b’)(‘i’-‘c’)(‘v’-‘d’)(‘i’-‘a’)(‘e’-‘b’)(‘r’-‘c’)  |
| Résultat   | Concaténation des codes ASCII   |

L’utilisateur devra lui-même définir son propre perroquet.

Celui qui chiffre et qui déchiffre doit donc connaître le mot (ou la phrase) du
« perroquet ». On prévoira donc un fichier (« peroq.def ») contenant la chaine de
caractères du perroquet.

On disposera de 2 fichiers.
 - Source (« source.txt ») : contenant le texte à chiffrer
 - Résultat (« dest.crt ») : contenant le texte chiffré


De plus, on prévoira de supprimer la source après chiffrage de telle manière à ne conserver que
le fichier chiffré.

Afin de faciliter l’utilisation de votre programme, vous proposerez à l’utilisateur un menu
simple et convivial implémentant l’ensemble des fonctionnalités.

A l’issue de la durée du projet, vous déposerez dans la section "Travaux", le projet dans sa
globalité. Vous y mettrez le fichier zippé de votre projet ainsi que tous les fichiers nécessaires
à son exécution. Vous mettrez également un fichier texte contenant le lien vers votre dépôt
distant.

**CONSEIL :** En vue de faciliter la réutilisation des éléments, créer des fonctions indépendantes en leur définissant pour chacune un rôle bien précis.

---

**Note :** Vous utiliserez un dépôt distant afin de sauvegarder l'ensemble de vos fichiers et d'assurer le suivi. Les fichiers suivis seront uniquement les .c et .h.

Bon courage !

