%%
%% This is file `fac.cls'
%%
%% Springer Formal Aspects in Computing document class
%% Copyright (2000) Cambridge University Press
%%
%% by Alison Woollatt, based on fac.cls v1.01 1999/08/03 
%%
%% Includes fleqn.clo by the LaTeX3 project team
%%
%% Bugs (in the case of unchanged files) should be reported to
%% texline@cup.cam.ac.uk
%%
%% \CharacterTable
%%  {Upper-case    \A\B\C\D\E\F\G\H\I\J\K\L\M\N\O\P\Q\R\S\T\U\V\W\X\Y\Z
%%   Lower-case    \a\b\c\d\e\f\g\h\i\j\k\l\m\n\o\p\q\r\s\t\u\v\w\x\y\z
%%   Digits        \0\1\2\3\4\5\6\7\8\9
%%   Exclamation   \!     Double quote  \"     Hash (number) \#
%%   Dollar        \$     Percent       \%     Ampersand     \&
%%   Acute accent  \'     Left paren    \(     Right paren   \)
%%   Asterisk      \*     Plus          \+     Comma         \,
%%   Minus         \-     Point         \.     Solidus       \/
%%   Colon         \:     Semicolon     \;     Less than     \<
%%   Equals        \=     Greater than  \>     Question mark \?
%%   Commercial at \@     Left bracket  \[     Backslash     \\
%%   Right bracket \]     Circumflex    \^     Underscore    \_
%%   Grave accent  \`     Left brace    \{     Vertical bar  \|
%%   Right brace   \}     Tilde         \~}
%%
\NeedsTeXFormat{LaTeX2e}[1997/12/01]
\ProvidesClass{fac}[2000/07/13 v2.00 Springer Formal Aspects in Computing
  ^^Jdocument class (wide design)]

\newif\ifprodtf

\DeclareOption{oneside}{\relax}
\DeclareOption{twoside}{\@twosidetrue \@mparswitchtrue}
\DeclareOption{draft}{\setlength\overfullrule{5\p@}}
\DeclareOption{final}{\setlength\overfullrule{\z@}}
\DeclareOption{onecolumn}{\@twocolumnfalse}
\DeclareOption{twocolumn}{\relax}
\DeclareOption{titlepage}{\relax}
\DeclareOption{notitlepage}{\relax}
\DeclareOption{leqno}{\relax}
\DeclareOption{fleqn}{\relax}
\DeclareOption{prodtf}{\prodtftrue}
\ExecuteOptions{twoside,final,onecolumn}
\ProcessOptions\relax

\PassOptionsToPackage{fleqn}{amsmath}
\AtBeginDocument{\@ifpackageloaded{amsmath}{\@mathmargin\mathindent\relax}{}}

%\RequirePackage{multicol}% version 1997/12/16 v1.5 or later
%\RequirePackage{pagefram}% CUP LaTeX 2e package version 1998/04/23 v0.2 

%\RequirePackage{pagefram}% CUP LaTeX 2e package version 1998/04/23 v0.2 
\ifprodtf \RequirePackage{CUPTimes,fac2esym,pagefram}\fi

\setlength\lineskip{1\p@}
\setlength\normallineskip{1\p@}
\renewcommand\baselinestretch{}

\renewcommand\normalsize{%
  \@setfontsize\normalsize\@xpt\@xipt
  \abovedisplayskip 6\p@ \@plus 1\p@ \@minus 1\p@
  \belowdisplayskip \abovedisplayskip
  \abovedisplayshortskip 3\p@ \@plus 1\p@
  \belowdisplayshortskip \abovedisplayshortskip
  \let\@listi\@listI
}

\normalsize

\newcommand\small{%
  \@setfontsize\small\@viiipt\@ixpt
  \abovedisplayskip 6\p@ \@plus 1\p@ \@minus 1\p@
  \belowdisplayskip \abovedisplayskip
  \abovedisplayshortskip 3\p@ \@plus 1\p@
  \belowdisplayshortskip \abovedisplayshortskip
  \def\@listi{\leftmargin\leftmargini
    \topsep 2\p@ \@plus 1\p@ \@minus 1\p@
    \parsep \z@ \itemsep 2\p@}%
}

\newcommand\footnotesize{%
  \@setfontsize\footnotesize\@viiipt\@ixpt
  \abovedisplayskip 5\p@ \@plus 1\p@ \@minus 1\p@
  \belowdisplayskip \abovedisplayskip
  \abovedisplayshortskip \z@ \@plus 1\p@
  \belowdisplayshortskip \abovedisplayshortskip
  \def\@listi{\leftmargin\leftmargini
    \topsep 2\p@ \@plus 1\p@ \@minus 1\p@
    \parsep \z@ \itemsep 2\p@}%
}

\newcommand\scriptsize{\@setfontsize\scriptsize\@viipt\@viiipt}
\newcommand\tiny{\@setfontsize\tiny\@vpt\@vipt}
\newcommand\large{\@setfontsize\large\@xiipt\@xivpt}
\newcommand\Large{\@setfontsize\Large\@xivpt{16}}

\ifprodtf
  \newcommand\LARGE{\@setfontsize\LARGE{16}{18}}
  \newcommand\titlesize{\@setfontsize\titlesize{24}{29}}
\else
  \newcommand\LARGE{\@setfontsize\LARGE\@xviipt{18}}
  \newcommand\titlesize{\@setfontsize\titlesize\@xxvpt{29}}
\fi
\newcommand\huge{\@setfontsize\huge\@xxpt{25}}
\newcommand\Huge{\@setfontsize\Huge\@xxvpt{30}}

\newcommand\affilsize{\@setfontsize\affilsize\@viiipt\@xpt}
\newcommand\medium{\@setfontsize\medium\@xipt\@xipt}

\DeclareOldFontCommand{\rm}{\normalfont\rmfamily}{\mathrm}
\DeclareOldFontCommand{\sf}{\normalfont\sffamily}{\mathsf}
\DeclareOldFontCommand{\tt}{\normalfont\ttfamily}{\mathtt}
\DeclareOldFontCommand{\bf}{\normalfont\bfseries}{\mathbf}
\DeclareOldFontCommand{\it}{\normalfont\itshape}{\mathit}
\DeclareOldFontCommand{\sl}{\normalfont\slshape}{\@nomath\sl}
\DeclareOldFontCommand{\sc}{\normalfont\scshape}{\@nomath\sc}
\DeclareRobustCommand*\cal{\@fontswitch\relax\mathcal}
\DeclareRobustCommand*\mit{\@fontswitch\relax\mathnormal}

\ifprodtf \else
  \DeclareTextFontCommand\textsfi{\usefont{OT1}{cmss}{m}{sl}}
  \DeclareMathAlphabet\mathsfi            {OT1}{cmss}{m}{sl}
  \DeclareTextFontCommand\textsfb{\usefont{OT1}{cmss}{bx}{n}}
  \DeclareMathAlphabet\mathsfb            {OT1}{cmss}{bx}{n}
  \DeclareTextFontCommand\textsfbi{\usefont{OT1}{cmss}{m}{sl}}
  \DeclareMathAlphabet\mathsfbi            {OT1}{cmss}{m}{sl}

  \setlength\oddsidemargin{0pc}
  \setlength\evensidemargin{0pc}
  \setlength\topmargin{0pc}
\fi

\setlength\marginparwidth{2.0cm}
\setlength\marginparsep{10\p@}

\setlength\headheight{11\p@}
%\setlength\headsep{11\p@}
\setlength\headsep{22\p@}
\setlength\topskip{11\p@}
\setlength\footskip{26\p@}

%\setlength\textheight{50\baselineskip}
\setlength\textheight{55\baselineskip}
\addtolength\textheight{\topskip}
\setlength\textwidth{165mm}%{29pc}
\setlength\columnsep{8.5mm}%{10\p@}
\setlength\columnseprule{\z@}

\setlength\footnotesep{6.65\p@}
\setlength{\skip\footins}{16.5\p@ \@plus 12\p@ \@minus 1\p@}

\setlength\floatsep{11\p@ \@plus 5.5\p@ \@minus 1\p@}
\setlength\textfloatsep{15\p@ \@plus 4.5\p@ \@minus 3\p@}
\setlength\intextsep{11\p@ \@plus 5.5\p@ \@minus 2\p@}

\setlength\dblfloatsep{11\p@ \@plus 5.5\p@ \@minus 2\p@}
\setlength\dbltextfloatsep{15\p@ \@plus 4.5\p@ \@minus 3\p@}

\setlength\@fptop{\z@ \@plus 0fil}
\setlength\@fpsep{11\p@ \@plus 0fil}
\setlength\@fpbot{\z@ \@plus 3fil}
\setlength\@dblfptop{\z@ \@plus 0fil}
\setlength\@dblfpsep{11\p@ \@plus 0fil}
\setlength\@dblfpbot{\z@ \@plus 3fil}
\setlength\marginparpush{5\p@}

\setlength\parskip{\z@ \@plus .3\p@}
\setlength\parindent{1.5em}
\setlength\partopsep{\z@ \@plus 1\p@}
\@lowpenalty   51
\@medpenalty  151
\@highpenalty 301
\@beginparpenalty -\@lowpenalty
\@endparpenalty   -\@lowpenalty
\@itempenalty     -\@lowpenalty
\clubpenalty\z@
\widowpenalty\@M

\newcommand\section{%
  \@startsection{section}{1}{\z@}
    {-19\p@ \@plus -5.5\p@ \@minus -2.25\p@}
    {11\p@ \@plus \z@ \@minus 1\p@}
    {\large\normalfont\bfseries\raggedright}%
}

\newcommand\subsection{%
  \@startsection{subsection}{2}{\z@}
    {-21\p@ \@plus -2.25\p@ \@minus -2.25\p@}
    {11\p@ \@plus \z@ \@minus 1\p@}
    {\medium\normalfont\bfseries\raggedright}%
}

\newcommand\subsubsection{%
  \@startsection{subsubsection}{3}{\z@}
    {-11\p@ \@plus -2.25\p@ \@minus -2.25\p@}
    {11\p@ \@plus \z@ \@minus 1\p@}
    {\medium\normalfont\itshape\raggedright}%
}

\newcommand\paragraph{%
  \@startsection{paragraph}{4}{\z@}
    {11\p@ \@plus 2.25\p@ \@minus 1\p@}
    {-.5em}
    {\normalsize\normalfont\bfseries}%
}

\newcommand\subparagraph{%
  \@startsection{subparagraph}{4}{\parindent}
    {11\p@ \@plus 2.25\p@ \@minus 1\p@}
    {-.5em}
    {\normalsize\normalfont\itshape}%
}

\def\@seccntformat#1{\csname the#1\endcsname.\enskip}% FROM LATEX.LTX

%\newcommand\appendixname{Appendix}

\newcommand\appendix{\par
  \setcounter{section}\z@
  \renewcommand\thesection{\@Alph\c@section}%
}

% from latex.ltx

% remove \clearpage
\def \twocolumn {%
% \clearpage
  \global\columnwidth\textwidth
  \global\advance\columnwidth-\columnsep
  \global\divide\columnwidth\tw@
  \global\hsize\columnwidth
  \global\linewidth\columnwidth
  \global\@twocolumntrue
  \global\@firstcolumntrue
  \col@number \tw@
  \@ifnextchar [\@topnewpage\@floatplacement
}

\setlength\leftmargini  {1.5em}
\setlength\leftmarginii {1.25pc}
\setlength\leftmarginiii{1.25pc}
\setlength\leftmarginiv {1.25pc}
\setlength\leftmarginv  {1pc}
\setlength\leftmarginvi {1pc}

\setlength\leftmargin{\leftmargini}
\setlength\labelsep{.5em}
\setlength\labelwidth{\leftmargini}
\addtolength\labelwidth{-\labelsep}

\newcommand\makeRLlabel[1]{\rlap{{\normalfont\rmfamily #1}}\hss}
\newcommand\makeRRlabel[1]{\hss\llap{{\normalfont\rmfamily #1}}}

\def\@listI{\leftmargin\leftmargini
  \topsep 6\p@ \@plus 1\p@ \@minus 1\p@
  \itemsep 2\p@ \@plus 1\p@ \@minus .5\p@
  \parsep \z@
}
\let\@listi\@listI
\@listi

\def\@listii{\leftmargin\leftmarginii
  \labelwidth\leftmarginii \advance\labelwidth-\labelsep
  \topsep 6\p@ \@plus 1\p@ \@minus 1\p@
  \parsep \z@ \itemsep 2\p@
  \let\makelabel\makeRRlabel
}

\def\@listiii{\leftmargin\leftmarginiii
  \labelwidth\leftmarginiii \advance\labelwidth-\labelsep
  \topsep 6\p@ \@plus 1\p@ \@minus 1\p@
  \parsep \z@ \partopsep \z@ \itemsep \topsep
  \let\makelabel\makeRRlabel
}

\def\@listiv{\leftmargin\leftmarginiv
  \labelwidth\leftmarginiv \advance\labelwidth-\labelsep
  \let\makelabel\makeRRlabel
}

\def\@listv{\leftmargin\leftmarginv
  \labelwidth\leftmarginv \advance\labelwidth-\labelsep
  \let\makelabel\makeRRlabel
}

\def\@listvi{\leftmargin\leftmarginvi
  \labelwidth\leftmarginvi \advance\labelwidth-\labelsep
  \let\makelabel\makeRRlabel
}

\renewenvironment{itemize} % FROM LATEX.LTX
  {\ifnum \@itemdepth >\thr@@ \@toodeep \else
     \advance\@itemdepth\@ne
     \edef\@itemitem{labelitem\romannumeral\the\@itemdepth}%
     \expandafter
     \list
       \csname\@itemitem\endcsname
       {\let\makelabel\makeRRlabel}%
   \fi}
  {\endlist}

\newcommand\labelitemi{$\m@th\bullet$}
\newcommand\labelitemii{\normalfont\bfseries --}
\newcommand\labelitemiii{$\m@th\cdot$}
\newcommand\labelitemiv{$\m@th*$}

\renewenvironment{enumerate} % FROM LATEX.LTX
  {\ifnum \@enumdepth >\thr@@ \@toodeep\else
     \advance\@enumdepth\@ne
     \edef\@enumctr{enum\romannumeral\the\@enumdepth}%
   \fi
   \@ifnextchar [{\@enumeratetwo}{\@enumerateone}}
  {\endlist}

\def\@enumeratetwo[#1]{%
  \expandafter
  \list
    \csname label\@enumctr\endcsname
    {\settowidth\labelwidth{\normalfont\rmfamily #1}%
     \leftmargin\labelwidth \advance\leftmargin\labelsep
     \usecounter{\@enumctr}%
     \let\makelabel\makeRRlabel}%
}

\def\@enumerateone{%
  \expandafter
  \list
    \csname label\@enumctr\endcsname
    {\usecounter{\@enumctr}%
     \let\makelabel\makeRRlabel}%
}

\newcommand\labelenumi  {\theenumi.}
\newcommand\labelenumii {(\theenumii)}
\newcommand\labelenumiii{\theenumiii}
\newcommand\labelenumiv {\theenumiv}

\renewcommand\theenumi  {\@arabic\c@enumi}
\renewcommand\theenumii {\@alph\c@enumii}
\renewcommand\theenumiii{\@roman\c@enumiii}
\renewcommand\theenumiv {\@Alph\c@enumiv}

\renewcommand\p@enumii {\theenumi.}
\renewcommand\p@enumiii{\theenumi.\theenumii.}
\renewcommand\p@enumiv {\p@enumiii\theenumiii.}

\newcommand*\descriptionlabel[1]{\hspace\labelsep \normalfont\bfseries #1}

\newenvironment{description}
  {\list{}{\labelwidth\z@
    \itemindent-\leftmargin
    \let\makelabel\descriptionlabel}}
  {\endlist}

\newenvironment{verse}
  {\let\\\@centercr
   \list{}{\itemsep\z@
     \itemindent -1.5em%
     \listparindent \itemindent
     \leftmargin \parindent
     \rightmargin\leftmargin
     \advance\leftmargin 1.5em}\item[]}
  {\endlist}

\newenvironment{quotation}
  {\small\normalfont\rmfamily
   \list{}{\listparindent 1.5em%
     \leftmargin\z@ \rightmargin\leftmargin
     \parsep \z@ \@plus 1\p@}%
   \item[]}
  {\endlist}

\let\quote\quotation
\let\endquote\endquotation

\newcommand\maketitle{\par
%  \begingroup
    \newpage
    \global\@topnum\z@
    \@maketitle
    \thispagestyle{titlepage}%
    \@thanks
    \if@correspondset\relax \else \make@correspond\fi
%  \endgroup
%  \setcounter{footnote}\z@
  \global\let\@maketitle\relax
  \global\let\@thanks\@empty
  \global\let\@title\@empty
  \global\let\@author\@empty
  \global\let\maketitle\relax
  \global\let\thanks\relax
}

\renewcommand\and{\end{author@tabular}\vskip 6\p@\par
  \begin{author@tabular}[t]{@{}l@{}}}

\def\@maketitle{\newpage
% \if@shortcom \vspace*{30\p@}\else \vspace*{95\p@}\fi
% \if@shortcom \vspace*{30\p@}\else \vspace*{74\p@}\fi
  \if@shortcom \vspace*{30\p@}\else \vspace*{85\p@}\fi
  {\raggedright \sloppy
   \if@shortcom
     {\LARGE\normalfont
      \bfseries\itshape\selectfont\strut Short Communication\par}%
     {\large\normalfont\itshape Edited by\ \@editor\par}%
     \vskip 38\p@
   \fi
   {\titlesize\normalfont\bfseries\strut \@title \par}%
   \vskip 11\p@
   {\large\normalfont\rmfamily
    \begin{author@tabular}[t]{@{}l@{}}\@author
    \end{author@tabular}\par}%
   \vskip 11\p@
  }%
  \par\noindent
  \vskip 22\p@
}

\newenvironment{abstract}
  {\normalsize\normalfont\rmfamily
   \list{}{\leftmargin\z@ \rightmargin\leftmargin
     \parsep \z@ \@plus 1\p@ \listparindent\parindent}%
   \item[]{\normalfont\bfseries Abstract.}\enskip\ignorespaces}
%  {\endlist\titlerule}
   {\endlist}

\newcommand\titlerule{\vspace{3\p@}\footnoterule\vspace{7\p@}\par}

\renewcommand\twocolumn{\begin{multicols}{2}}
\renewcommand\onecolumn{\end{multicols}\bigskip}

\newenvironment{keywords}
  {\normalsize\normalfont\rmfamily
   \list{}{\leftmargin\z@ \rightmargin\leftmargin
     \parsep \z@ \@plus 1\p@}%
   \item[]{\normalfont\bfseries Keywords:}\enskip\ignorespaces}
  {\endlist\vspace{38pt plus 5pt}}% extra vert space added for 2-col version
  

\mark{{}{}}

\renewcommand\author{\@ifnextchar [{\@authortwo}{\@authorone}}
\def\@author{}
\def\@authortwo[#1]#2{\gdef\@author{#2}\gdef\@shortauthor{#1}}
\def\@authorone#1{\gdef\@author{#1}\gdef\@shortauthor{#1}}

\newcommand\shortauthor[1]{\gdef\@shortauthor{#1}}
\def\@shortauthor{}

\renewcommand\title{\@ifnextchar [{\@titletwo}{\@titleone}}
\def\@title{}
\def\@titletwo[#1]#2{\gdef\@title{#2}\gdef\@shorttitle{#1}}
\def\@titleone#1{\gdef\@title{#1}\gdef\@shorttitle{#1}}

\newcommand\shorttitle[1]{\gdef\@shorttitle{#1}}
\def\@shorttitle{\@title}

\newcommand\volume[1]{\gdef\@volume{#1}}
\def\@volume{0}

\newcommand\pagerange[1]{\gdef\@pagerange{#1}}
\def\@pagerange{1--000}

\newcommand\pubyear[1]{\gdef\@pubyear{#1}}
\def\@pubyear{19XX}

\newif\if@shortcom
\newcommand\shortcom{\@shortcomtrue}

\newcommand\editor[1]{\gdef\@editor{#1}}
\def\@editor{}

\newif\if@correspondset
\newcommand\correspond[1]{\gdef\@correspond{#1}\@correspondsettrue}
\def\@correspond{\@shortauthor}

\newcommand\makecorrespond{\make@correspond}

\def\make@correspond{%
  {\def\@makefntext##1{\parindent 1em\noindent\normalfont\rmfamily ##1}%
   \footnotetext{{\normalfont\itshape
     Correspondence and offprint requests to\/}: \@correspond}}%
}

\newcommand\receivedline{\@ifnextchar [{\rec@arg}{\rec@noarg}}
\def\rec@noarg{\par\noindent{\small\normalfont\itshape Received \@date}}
\def\rec@arg[#1]{\par\noindent{\small\normalfont\itshape Received #1}}

\newcommand\acceptedline[2]{\par\noindent{\small\normalfont\itshape
  Accepted in revised form #1 by #2}}

\newcommand\journal[1]{\gdef\@journal{#1}}
\ifprodtf
  \journal{Formal Aspects of Computing (\number\@pubyear) \@volume: \@pagerange\\
    \copyright\ \@pubyear\ BCS}
\else
  \journal{Under consideration for publication in Formal Aspects of
    \rlap{Computing}\\ {}}
\fi

\def\ps@headings{%
  \let\@mkboth\markboth
  \def\@oddhead{\small\normalfont\rmfamily \@shorttitle \hfill \thepage}%
  \def\@evenhead{\small\normalfont\rmfamily \thepage \hfill \@shortauthor}%
  \let\@oddfoot\@empty
  \let\@evenfoot\@empty
  \def\sectionmark##1{\markboth{##1}{}}%
  \def\subsectionmark##1{\markright{##1}}%
}

\def\ps@myheadings{%
  \let\@mkboth\@gobbletwo
  \def\@oddhead{\small\normalfont\rmfamily \rightmark \hfill \thepage}%
  \def\@evenhead{\small\normalfont\rmfamily \thepage \hfill \leftmark}%
  \let\@oddfoot\@empty
  \let\@evenfoot\@empty
  \let\sectionmark\@gobble
  \let\subsectionmark\@gobble
}

\newcommand\outerline{\rule{100\p@}{1.5\p@}}

\def\ps@titlepage{%
  \let\@mkboth\@gobbletwo
  \def\@oddhead{\footnotesize\normalfont\rmfamily
    \raisebox{\z@}[8\p@][1\p@]{\parbox{.7\textwidth}{\@journal}}\hfill
    \ifprodtf
      \raisebox{8\p@}[10\p@][2\p@]{\parbox[t]{100\p@}{\raggedleft
        \outerline\\[-3.3\p@]%
        {\normalfont\sffamily\bfseries\fontsize{14}{14}\selectfont
         Formal Aspects\break
         of Computing\par}\vskip-3.4\p@ \outerline}}%
    \fi}%
  \let\@evenhead\@oddhead
  \let\@evenfoot\@empty
  \let\@oddfoot\@empty
  \let\sectionmark\@gobble
  \let\subsectionmark\@gobble
}

\def\@xnthm#1#2[#3]{% FROM LATEX.LTX
\expandafter\@ifdefinable\csname #1\endcsname
  {\@definecounter{#1}\@newctr{#1}[#3]%
   \expandafter\xdef\csname the#1\endcsname{\expandafter\noexpand
   \csname the#3\endcsname \@thmcountersep \@thmcounter{#1}}%
   \global\@namedef{#1}{\@thm{#1}{#2}}%
   \global\@namedef{#1*}{\@thmstar{#1}{#2}}%
   \global\@namedef{end#1}{\@endtheorem}%
   \global\@namedef{end#1*}{\@endthmstar}}%
}

\def\@ynthm#1#2{% FROM LATEX.LTX
\expandafter\@ifdefinable\csname #1\endcsname
  {\@definecounter{#1}%
   \expandafter\xdef\csname the#1\endcsname{\@thmcounter{#1}}%
   \global\@namedef{#1}{\@thm{#1}{#2}}%
   \global\@namedef{#1*}{\@thmstar{#1}{#2}}%
   \global\@namedef{end#1}{\@endtheorem}%
   \global\@namedef{end#1*}{\@endthmstar}}%
}

\def\@othm#1[#2]#3{% FROM LATEX.LTX
  \@ifundefined{c@#2}{\@nocounterr{#2}}%
    {\expandafter\@ifdefinable\csname #1\endcsname
    {\global\@namedef{the#1}{\@nameuse{the#2}}%
     \global\@namedef{#1}{\@thm{#2}{#3}}%
     \global\@namedef{#1*}{\@thmstar{#2}{#3}}%
     \global\@namedef{end#1}{\@endtheorem}%
     \global\@namedef{end#1*}{\@endthmstar}}}%
}

\newif\ifrembrks
\newcommand\removebrackets{\rembrkstrue}

\def\@begintheorem#1#2{% FROM LATEX.LTX
  \normalfont\rmfamily \trivlist
  \item[\hskip \labelsep{\normalfont\bfseries #1\ #2.}]%
}

\def\@opargbegintheorem#1#2#3{% FROM LATEX.LTX
  \normalfont\rmfamily \trivlist
  \item[\hskip \labelsep{\normalfont\bfseries
        #1\ #2\ \ifrembrks #3\global\rembrksfalse\else (#3)\fi.}]%
}

\def\@endtheorem{\endtrivlist}% FROM LATEX.LTX

\def\@thmstar#1#2{\@ifnextchar[{\@ythmstar{#1}{#2}}{\@xthmstar{#1}{#2}}}
\def\@xthmstar#1#2{\@beginthmstar{#2}{\csname the#1\endcsname}\ignorespaces}
\def\@ythmstar#1#2[#3]{\@opargbeginthmstar{#2}{\csname the#1\endcsname}{#3}%
  \ignorespaces}

\def\@thmstarcounter#1{{}}
\def\@thmstarcountersep{{}}

\def\@beginthmstar#1#2{%
  \normalfont\rmfamily \trivlist
  \item[\hskip \labelsep{\normalfont\bfseries #1.}]%
}

\def\@opargbeginthmstar#1#2#3{%
  \normalfont\rmfamily \trivlist
  \item[\hskip \labelsep{\normalfont\bfseries
        #1\ \ifrembrks #3\global\rembrksfalse\else (#3)\fi.}]%
}

\def\@endthmstar{\endtrivlist}

\newenvironment{proof}
  {\@ifnextchar[{\@oprf}{\@nprf}}
  {\hspace*{1em}{\proofbox}\endtrivlist}

\newenvironment{proof*}
  {\@ifnextchar[{\@oprf}{\@nprf}}
  {\endtrivlist}

\def\@oprf[#1]{\normalfont\rmfamily \trivlist
  \item[\hskip \labelsep{\normalfont\itshape #1}]%
}

\def\@nprf{\normalfont\rmfamily \trivlist
  \item[\hskip \labelsep{\normalfont\itshape Proof.}]%
}

\ifprodtf
  \newcommand\proofbox{\ensuremath{\CUPproofbox}\relax}
\else
  \newsavebox{\proofsavebox}
  \sbox{\proofsavebox}
    {\unitlength 1\p@\begin{picture}(6.5,6.5)%
     \put(0,0){\framebox(6.5,6.5){}}\end{picture}}
  \newcommand\proofbox{\usebox{\proofsavebox}\relax}
\fi

\newcommand\mathproofbox{\rlap{\quad\proofbox}}

\setlength\arraycolsep{5\p@}
\setlength\tabcolsep{6\p@}
\setlength\arrayrulewidth{.5\p@}
\setlength\doublerulesep{1.5\p@}

\setlength\tabbingsep{\labelsep}
\setlength{\skip\@mpfootins}{\skip\footins}

\setlength\fboxsep{3\p@}
\setlength\fboxrule{\arrayrulewidth}

\setcounter{secnumdepth}{3}

%\newcounter{part}
\newcounter{section}
\newcounter{subsection}[section]
\newcounter{subsubsection}[subsection]
\newcounter{paragraph}[subsubsection]
\newcounter{subparagraph}[paragraph]
%\def\thepart          {\arabic{part}}
\renewcommand\thesection       {\@arabic\c@section}
\renewcommand\thesubsection    {\thesection.\@arabic\c@subsection}
\renewcommand\thesubsubsection {\thesubsection.\@arabic\c@subsubsection}
\renewcommand\theparagraph     {\thesubsubsection.\@arabic\c@paragraph}
\renewcommand\thesubparagraph  {\theparagraph.\@arabic\c@subparagraph}

\newcommand\@pnumwidth{1.55em}
\newcommand\@tocrmarg {2.55em}
\newcommand\@dotsep{4.5}
\setcounter{tocdepth}{2}

\def\@dottedtocline#1#2#3#4#5{% FROM LATEX.LTX
  \ifnum #1>\c@tocdepth \else
    \vskip \z@ \@plus.2\p@
    {\leftskip #2\relax \rightskip \@tocrmarg \parfillskip -\rightskip
     \parindent #2\relax\@afterindenttrue
     \interlinepenalty\@M
     \leavevmode
     \@tempdima #3\relax
     \advance\leftskip \@tempdima \null\hskip -\leftskip
     {#4}\nobreak
     \leaders\hbox{$\m@th
        \mkern \@dotsep mu\hbox{\phantom{.}}\mkern \@dotsep
        mu$}\hfill
     \nobreak
     \hb@xt@\@pnumwidth{\hfil\normalfont \normalcolor #5}%
     \par}%
  \fi
}

\newcommand\contentsname{Contents}

\newcommand\tableofcontents{%
  \section*{\contentsname}\@starttoc{toc}%
  \par\vspace{11\p@}%
}

\newcommand*\l@section[2]{%
  \addpenalty{\@secpenalty}%
  \@tempdima 1.5em%
  \begingroup
    \parindent \z@ \rightskip \@pnumwidth
    \parfillskip -\@pnumwidth
    \normalfont\rmfamily\leavevmode
    \advance\leftskip\@tempdima
    \hskip -\leftskip
    #1\nobreak\hfil \nobreak\hb@xt@\@pnumwidth{\hss \ }\par
  \endgroup
}

\newcommand*\l@subsection{\@dottedtocline{2}{1.5em}{2.3em}}
\newcommand*\l@subsubsection{\@dottedtocline{3}{3.8em}{3.2em}}
\newcommand*\l@paragraph{\@undottedtocline{4}{7.0em}{4.1em}}
\newcommand*\l@subparagraph{\@undottedtocline{5}{10em}{5em}}

\newcommand\listfigurename{List of Figures}

\newcommand\listoffigures{%
  \section*{\listfigurename\@mkboth{\listfigurename}{\listfigurename}}%
  \@starttoc{lof}%
  \par\vspace{11\p@}%
}

\newcommand*\l@figure{\@dottedtocline{1}{1.5em}{2.3em}}

\newcommand\listtablename{List of Tables}

\newcommand\listoftables{%
  \section*{\listtablename\@mkboth{\listtablename}{\listtablename}}%
  \@starttoc{lot}%
  \par\vspace{11\p@}%
}

\let\l@table\l@figure

\newif\ifnobr@cket
\DeclareRobustCommand\nbcite{\nobr@ckettrue\cite}

\def\@cite#1#2{\ifnobr@cket\else[\fi % FROM LATEX.LTX
  {#1\if@tempswa , #2\fi}%
  \ifnobr@cket\nobr@cketfalse\else]\fi
}

\newcommand\refname{References}

\newenvironment{thebibliography}[1]
  {\section*{\refname}%
   \addcontentsline{toc}{section}{\refname}%
   \small\normalfont\rmfamily
   \list{\@biblabel{\@arabic\c@enumiv}}
     {\labelwidth 3.5pc%
      \leftmargin\labelwidth
      \advance\leftmargin\labelsep
      \itemsep \z@
      \usecounter{enumiv}%
      \let\p@enumiv\@empty
      \renewcommand\theenumiv{\@arabic\c@enumiv}%
      \let\makelabel\makeRLlabel}
   \parindent\z@
   \parskip\z@ \@plus .1\p@\relax
   \sloppy\clubpenalty\z@ \widowpenalty\@M
   \sfcode`\.\@m}
  {\def\@noitemerr
   {\@latex@warning{Empty `thebibliography' environment}}%
   \endlist}

\newcommand\newblock{\hskip .11em \@plus.33em \@minus.07em}

\newcommand\indexname{Index}

\newenvironment{theindex}
  {\section*{\indexname}%
   \addcontentsline{toc}{section}{\indexname}%
   \footnotesize\normalfont\rmfamily
   \parindent\z@
   \parskip\z@ \@plus .1\p@\relax
   \let\item\@idxitem}
  {\par}

\newcommand\@idxitem{\par\hangindent 1em}
\newcommand\subitem {\@idxitem \hspace*{1em}}
\newcommand\subsubitem{\@idxitem \hspace*{1em}}
\newcommand\indexspace{\par\vskip\baselineskip \relax}

\renewcommand\footnoterule{%
  \kern-3\p@ \hrule \@width 12pc \@height .5\p@ \kern 2.5\p@}

\newcommand\@makefntext[1]{%
  \parindent 1em\noindent $^{\@thefnmark}$\enskip \normalfont\rmfamily #1}

\setcounter{topnumber}{2}
\renewcommand\topfraction{.9}
\setcounter{bottomnumber}{1}
\renewcommand\bottomfraction{.5}
\setcounter{totalnumber}{3}
\renewcommand\textfraction{.1}
\renewcommand\floatpagefraction{.85}
\setcounter{dbltopnumber}{2}
\renewcommand\dbltopfraction{.9}
\renewcommand\dblfloatpagefraction{.85}

\let\@@caption\caption
\newif\if@contcap
\newcommand\contcaption{\@contcaptrue\addtocounter{\@captype}\m@ne \@@caption}

\newif\ifrem@fullpt
\newcommand\removefullpoint{\global\rem@fullpttrue}

\def\cap@extra{\if@contcap {\normalfont\itshape ---cont.}\else \ifrem@fullpt \else .\fi\fi\ }

\long\def\@makecaption@figure#1#2{%
  \ifbot@fig \rule{\textwidth}{.25\p@}\fi
  \vskip 5.5\p@
  \setbox\@tempboxa\hbox{#1\cap@extra #2}%
  \ifdim \wd\@tempboxa >\hsize
    #1\cap@extra #2\par
  \else
    \hb@xt@\hsize{\hfil\box\@tempboxa\hfil}%
  \fi
  \global\rem@fullptfalse
  \global\@contcapfalse
  \global\bot@figfalse
}

\long\def\@makecaption@table#1#2{\vskip 5.5\p@
  \setbox\@tempboxa\hbox{#1\cap@extra #2}%
  \ifdim \wd\@tempboxa >\hsize
    #1\cap@extra #2\par
  \else
    \hb@xt@\hsize{\box\@tempboxa\hfill}%
  \fi
  \global\rem@fullptfalse
  \global\@contcapfalse
}

\newcounter{table}
\renewcommand\thetable{\@arabic\c@table}
\def\fps@table{tbp}
\def\ftype@table{1}
\def\ext@table{lot}
\newcommand\tablename{Table}
\def\fnum@table{\tablename~\thetable}

\def\fstyle@table{\small\normalfont\rmfamily}
\def\fjust@table{\sloppy}
\def\fcapjust@table{\sloppy}
\def\fcapsize@table{\small\normalfont\bfseries}
\def\fcapstyle@table{\small\normalfont\rmfamily}

\newenvironment{table}
  {\@float{table}\let\@makecaption\@makecaption@table}
  {\end@float}

\newenvironment{table*}
  {\@dblfloat{table}\let\@makecaption\@makecaption@table}
  {\end@dblfloat}

\newcounter{figure}
\renewcommand\thefigure{\@arabic\c@figure}
\def\fps@figure{tbp}
\def\ftype@figure{2}
\def\ext@figure{lof}
\newcommand\figurename{Fig.}
\def\fnum@figure{\figurename~\thefigure}

\def\fstyle@figure{\normalfont\rmfamily}
\def\fjust@figure{\sloppy}
\def\fcapjust@figure{\sloppy}
\def\fcapsize@figure{\small\normalfont\bfseries}
\def\fcapstyle@figure{\small\normalfont\rmfamily}

\newenvironment{figure}
  {\@float{figure}\let\@makecaption\@makecaption@figure}
  {\end@float}

\newenvironment{figure*}
  {\@dblfloat{figure}\let\@makecaption\@makecaption@figure}
  {\end@dblfloat}

\newif\ifbot@fig
\newenvironment{bottomfigure}{\let\@makecaption\@makecaption@figure
  \def\fps@figure{b}%
  \setcounter{bottomnumber}{1}%
  \global\bot@figtrue
  \@float{figure}\fstyle@figure}
  {\end@float}

\long\def\@caption#1[#2]#3{\par\addcontentsline{\csname % FROM LATEX.LTX
  ext@#1\endcsname}{#1}{\protect\numberline{\csname
  the#1\endcsname}{\ignorespaces #2}}\begingroup
  \@parboxrestore
  \normalsize
  \@makecaption{\csname fcapjust@#1\endcsname
                \csname fcapsize@#1\endcsname
                \csname fnum@#1\endcsname}%
               {\csname fcapstyle@#1\endcsname \ignorespaces #3}\par
 \endgroup
}

\def\@xfloat #1[#2]{% FROM LATEX.LTX
  \def\@captype {#1}%
  \def\@fps {#2}%
  \@onelevel@sanitize \@fps
  \def \reserved@b {!}%
  \ifx \reserved@b \@fps
    \@fpsadddefault
  \else
    \ifx \@fps \@empty
      \@fpsadddefault
    \fi
  \fi
  \ifhmode \@bsphack\@floatpenalty-\@Mii \else \@floatpenalty-\@Miii\fi
  \ifinner
    \@parmoderr\@floatpenalty\z@
  \else
    \@next\@currbox\@freelist
      {%
       \@tempcnta \sixt@@n
       \expandafter \@tfor \expandafter \reserved@a
         \expandafter :\expandafter =\@fps
         \do
          {%
           \if \reserved@a h%
             \ifodd \@tempcnta
             \else
               \advance \@tempcnta \@ne
             \fi
           \fi
           \if \reserved@a t%
             \@setfpsbit \tw@
           \fi
           \if \reserved@a b%
             \@setfpsbit 4%
           \fi
           \if \reserved@a p%
             \@setfpsbit 8%
           \fi
           \if \reserved@a !%
             \ifnum \@tempcnta>15
               \advance\@tempcnta -\sixt@@n\relax
             \fi
           \fi
           }%
       \@tempcntb \csname ftype@\@captype \endcsname
       \multiply \@tempcntb \@xxxii
       \advance \@tempcnta \@tempcntb
       \global \count\@currbox \@tempcnta
       }%
    \@fltovf
  \fi
  \global \setbox\@currbox
    \color@vbox
      \normalcolor
      \vbox \bgroup
        \hsize\columnwidth \@parboxrestore
        \@floatboxreset
        \csname fstyle@\@captype\endcsname
        \csname fjust@\@captype\endcsname
}

\def\author@tabular{\let\@halignto\@empty \@authortable}
\let\endauthor@tabular\endtabular

\def\@authortable{\leavevmode \hbox \bgroup $\let\@acol\@tabacol
  \let\@classz\@tabclassz
  \let\@classiv\@tabclassiv
  \let\\\author@tabcrone
  \@tabarray}

\def\author@tabcrone{{\ifnum0=`}\fi
  \@xtabularcr
  \affilsize\normalfont\rmfamily
  \let\\\author@tabcrtwo
  \ignorespaces}

\def\author@tabcrtwo{{\ifnum0=`}\fi
  \@xtabularcr[-4\p@]%
  \affilsize\normalfont\rmfamily
  \let\\\author@tabcrtwo
  \ignorespaces}

\let\oldtabular\tabular
\let\endoldtabular\endtabular

\renewenvironment{tabular}% FROM LATEX.LTX
  {\let\@halignto\@empty
%
   \def\hline{\noalign{\ifnum0=`}\fi
     \vskip 3\p@
     {\hb@xt@.667\textwidth{\hrulefill}}%
     \vskip 3\p@
     \futurelet \@tempa\@xhline}%
%
   \def\@xhline{\ifx\@tempa\hline
     \vskip -6\p@
     \vskip \doublerulesep
     \fi
     \ifnum0=`{\fi}}%
%
   \def\fullhline{\noalign{\ifnum0=`}\fi
     \vskip 3\p@
     {\hb@xt@\textwidth{\hrulefill}}%
     \vskip 3\p@
     \futurelet \@tempa\@xfhline}%
%
   \def\@xfhline{\ifx\@tempa\fullhline
     \vskip -6\p@
     \vskip \doublerulesep
     \fi
     \ifnum0=`{\fi}}%
%
   \def\@arrayrule{\@addtopreamble{\hskip -.5\arrayrulewidth
                                   \hskip .5\arrayrulewidth}}%
   \@tabular}
  {\endoldtabular}

\newdimen\mathindent
\mathindent\parindent
%\mathindent 0pc

\renewcommand\[{\relax
                \ifmmode\@badmath
                \else
                  \begin{trivlist}%
                    \@beginparpenalty\predisplaypenalty
                    \@endparpenalty\postdisplaypenalty
                    \item[]\leavevmode
%                   \newdimen\nsize %following 4 lines to reduce displayed eqns by 1pt
%                   \nsize\f@size\p@
%                   \advance\nsize -1\p@
%                   \fontsize{\nsize}{\f@baselineskip}\selectfont
                      \hb@xt@\linewidth\bgroup $\m@th\displaystyle %$
                      \hskip\mathindent\bgroup
                \fi}

\renewcommand\]{\relax
                \ifmmode
                      \egroup $\hfil% $
                    \egroup
                  \end{trivlist}%
                \else \@badmath
                \fi}

\renewenvironment{equation}%
    {\@beginparpenalty\predisplaypenalty
     \@endparpenalty\postdisplaypenalty
     \refstepcounter{equation}%
     \trivlist \item[]\leavevmode
 %   \newdimen\nsize %following 4 lines to reduce displayed eqns by 1pt
 %   \nsize\f@size\p@
 %   \advance\nsize -1\p@
 %   \fontsize{\nsize}{\f@baselineskip}\selectfont
       \hb@xt@\linewidth\bgroup $\m@th% $
         \displaystyle
         \hskip\mathindent}%
        {$\hfil % $
         \displaywidth\linewidth\hbox{\@eqnnum}%
       \egroup
     \endtrivlist}

\renewenvironment{eqnarray}{%
    \stepcounter{equation}%
    \def\@currentlabel{\p@equation\theequation}%
    \global\@eqnswtrue\m@th
    \global\@eqcnt\z@
    \tabskip\mathindent
    \let\\=\@eqncr
    \setlength\abovedisplayskip{\topsep}%
    \ifvmode
      \addtolength\abovedisplayskip{\partopsep}%
    \fi
    \addtolength\abovedisplayskip{\parskip}%
    \setlength\belowdisplayskip{\abovedisplayskip}%
    \setlength\belowdisplayshortskip{\abovedisplayskip}%
    \setlength\abovedisplayshortskip{\abovedisplayskip}%
%   \newdimen\nsize %following 4 lines to reduce displayed eqns by 1pt
%   \nsize\f@size\p@
%   \advance\nsize -1\p@
%   \fontsize{\nsize}{\f@baselineskip}\selectfont
    $$\everycr{}\halign to\linewidth% $$
    \bgroup
      \hskip\@centering
      $\displaystyle\tabskip\z@skip{##}$\@eqnsel&%
      \global\@eqcnt\@ne 
%      \hskip \tw@\arraycolsep \hfil${##}$\hfil
       \hfil${\;##\;}$\hfil
%      &\global\@eqcnt\tw@ \hskip \tw@\arraycolsep
       &\global\@eqcnt\tw@ 
       $\displaystyle{##}$\hfil \tabskip\@centering&%
      \global\@eqcnt\thr@@
        \hb@xt@\z@\bgroup\hss##\egroup\tabskip\z@skip\cr}%
      {\@@eqncr
    \egroup
    \global\advance\c@equation\m@ne$$% $$
    \@ignoretrue
    }

\iffalse
\def\eqnarray{\stepcounter{equation}\let\@currentlabel=\theequation
\global\@eqnswtrue
\global\@eqcnt\z@\tabskip\@centering\let\\=\@eqncr
$$\halign to \displaywidth\bgroup\@eqnsel\hskip\@centering
  $\displaystyle\tabskip\z@{##}$&\global\@eqcnt\@ne
% \hskip 2\arraycolsep \hfil${##}$\hfil
  \hfil${\;##\;}$\hfil
% &\global\@eqcnt\tw@ \hskip 2\arraycolsep $\displaystyle\tabskip\z@{##}$\hfil 
  &\global\@eqcnt\tw@ $\displaystyle\tabskip\z@{##}$\hfil 
   \tabskip\@centering&\llap{##}\tabskip\z@\cr}\fi


\newcommand\today{}
\edef\today{\number\day\ \ifcase\month\or
  January\or February\or March\or April\or May\or June\or
  July\or August\or September\or October\or November\or December\fi
  \ \number\year}

\newif\iffontfound
\newcommand\checkfont[1]{%
  \batchmode
  \font\test=#1\relax
  \errorstopmode
  \fontfoundfalse
  \ifx\test\nullfont \else \fontfoundtrue\fi
}

\pagestyle{headings}
\pagenumbering{arabic}
\frenchspacing
\flushbottom


\endinput

% end of file fac.cls
