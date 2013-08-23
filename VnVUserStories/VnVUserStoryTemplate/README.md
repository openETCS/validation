Guideline for Using the Folders in a V&V User Story

Start: Copy the directory "VnVUserStoryTemplate" and rename the copy
to reflect the object of the activity. E.g. to "VerificationSSRS", to
contain all the verification activities concerning the SSRS. If there
are very different activities concerning one design step (artifact),
then there may be more than one folder hierarchy for that topic. E.g.,
"VnVBrakingCurvesCEA" and "MCBrakingCurvesRoTWT". Names are defined in
a "First-Act-First-Choose" way. Just make sure that the names are
somewhat self explanatory, so that confusions are avoided.

Then use the subdirectories as explained below. For s distributed
effort like our project, it is important to have some accessible
documentation defining and describing the activity. This is to be done
in "00-Definition", see below.

00-Definition

This should contain a document describing the task and its current
state. The task desription defines the DAS2V, its position in the
design process, the verification or validation activity (process),
tools used, and so on. All main files/references from the folders
01-Requirements, 02-DAS2V, 03-ToolsAndUtilities, 04-Results shall be
explained. 

The state should be updated from time to time. 


01-Requirements

Requirement documents or references to them are collected here. 


02-DAS2V

The folder to place all files which make up the object of verification
(or validation). 

03-ToolsAndUtilities

What the name says: For a FLOSS development, all tools should be
open. If they are not available elsewhere, they should be collected
here. If they are not open, they need not be placed here (the project
will have to decide in the end how to cope with the situation).

04-Results

Only final or important intermediate results shall be placed here. A
summary shall list what has been proved, resp., established. This is
to be supplemented by evidence or a description how to (re-)produce
the evidence on demand, depending on the process and methods employed.

05-Work

All other things which might be of interest to other participants in
the project can be put here.

----
end of document
