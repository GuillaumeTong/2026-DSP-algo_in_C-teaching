/*-debut-*/
   .data
UnNom :
   .long 43,54,32,76 /*@\tikz \coordinate (comment);@*//* 4 entiers. */
   .globl _start 
/*@\tikz \coordinate (start);@*/_start:
   movl $5, %eax     /* EAX nombre d'entiers restant à additionner */
   movl $0, %ebx     /* EBX va contenir la somme de ces entiers */
   movl $UnNom, %ecx /* ECX << pointe >> sur l'élément à additionner */
top:
   addl (%ecx), %ebx  /* Additionne EBX ECX, résultat dans EBX */
   addl $4, %ecx     /* Déplace le <<pointeur>> sur le suivant */
   decl %eax         /* Décrémente le compteur EAX */
   jnz top           /* Si EAX non nul <<sauter>> à top: */
done:
   movl %ebx, UnAutre /* sinon, le resultat est stocké */
   movl    $0,%ebx     /* Ces instructions permettent d'invoquer de */ 
   movl    $1,%eax     /* terminer l'exécution d'un programme */
   int     $0x80       /* assembleur et sont indispensable */
/*-fin-*/
	/* Utilisateur d'emacs, veillez à ajouter une ligne vide après
	ce commentaire afin de ne pas provoquer un Segmentation fault */

