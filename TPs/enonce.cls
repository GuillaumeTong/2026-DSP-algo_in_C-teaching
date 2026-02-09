% Classe de documents pour sujets et corrections de TP.
% Écrite par Emmanuel Beffara
% Modifiée par Samuel Hym

% vim: syntax=tex

\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{TP}

% On se base sur la classe article pour avoir les sections, etc.

\LoadClass{article}
\date{}

% Réglages pour le français

\RequirePackage[latin1]{inputenc}
\RequirePackage[T1]{fontenc}
\RequirePackage[french]{babel}
\RequirePackage{comment}

%\FrenchItemizeSpacingfalse

% Quelques packages utiles

\RequirePackage{alltt,url,moreverb}
\RequirePackage{amssymb,amsmath,stmaryrd}
\RequirePackage{array}

\renewcommand\verbatimtabsize{4\relax}

% La mise en page se fait avec geometry.

\RequirePackage[a4paper,margin=3cm]{geometry}

% Numérotation et formatage d'exercices

\newcounter{exo}

%   On met de l'espace avant les exercices, sauf après une section

\newif\ifexoskip
\exoskiptrue

\let\oldsection\section
\def\section{\exoskipfalse\oldsection}

%   Les énoncés sont formatés avec un environnement exo:
%
%   \begin{exo}[titre optionnel]
%     ... énoncé ...
%   \end{exo}

\RequirePackage{ifthen}

\newenvironment{exo}[1][]{%
  \refstepcounter{exo}%
  \par\medbreak%
  \list{\textbf{Exercice \theexo %
  \ifthenelse{\equal{#1}{}}{}{ --- {\boldmath\itshape#1}}\quad}}{%
    \leftmargin=-\@totalleftmargin%
    \advance\leftmargin 5mm%
    \itemindent=-5mm%
    \advance\leftmargin\labelsep%
    \labelwidth=0cm%
    \rightmargin=0cm}%
  \item}{%
  \endlist}

%   Les corrections sont aussi des environnements qu'on peut
%   exclure (utile pour la version ``sujet'' :) )

\newenvironment{correction}[1][]{%
  \ifexoskip\bigbreak\else\nobreak\fi%
  \noindent\llap{$\blacktriangleright$ }%
  \textbf{Correction%
    \ifthenelse{\equal{#1}{}}{}{ --- {\boldmath\itshape#1}}\quad}%
  \par\smallskip\exoskiptrue}
{}

% Quelques macros utilitaires

\newcommand\cmd[1]{«~\texttt{#1}~»}
\newcommand\cmdarg[1]{\rmfamily{\emph{#1}}}

\def\NN{\mathbb{N}}
\let\leq\leqslant
\let\geq\geqslant
\let\epsilon\varepsilon

