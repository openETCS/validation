c- Clasical B model
----

Classical B model of §5.9
Done with AtelierB 4.1

**************************
    Procedure On-Sight
     Classical B model
**************************
       Benoît Lucet
 benoit.lucet@systerel.fr
**************************

See https://github.com/openETCS/validation/blob/master/VnVUserStories/VnVUserStorySysterel/02-DAS2V/c-ClassicalBModel/ProcedureOnSight/ProcedureOS.pdf for a textual description

The model is split into three main processing modules, one of which corresponds to the actual on-sight procedure,
and the two others being used as data conditioning :
* os_mode_level : determines the ETCS level and the mode. Contains the on-sight procedure algorithm,
* os_consist : checks data consistency, provides adaptation to the current ETCS level (BTM or radio),
* os_train_info : elaborates the location and the speed of the train.

These three modules are imported by the main sequencer, os_main_1, which calls their respective operations.
The main sequencer also imports the input module os_in, and the output module os_out.

The typing machine, os_typ, and the constant machine, os_cte_conf_bs, are both imported by os_main, the entry point
of the software, which also imports os_main_1.

This IMPORTS based vertical layout is complemented by a horizontal aspect : the SEES clause, which enables a component
to access another component's data. It is a possible for a component to see the components to its left, but not to its right.
Thus, a cycle-free graph is maintained.

The following parts describe the different modules in a more in-depth manner.

Typing module
----

Given the simplicity of the model, almost all of the variables are typed by either INT or NAT.
Only three enumerated types are defined : t_mamode, t_level and t_mode.

The os_typ machine imports the scalar constant machine os_cte_conf_bs.

The machines suffixed by "_os" are base machines : they act as connection points and are interfaces
with the rest of the software, generally written in C or ADA.

Input module
----

Once again, the model is simple enough to not require a specific input processing module.
Though, for the sake of methodology and realism, it has been written as a simple copying module :
the input data of os_in_bs is copied in os_in for use by the other modules.

In most cases, its purpose is to rearrange, filter, and adapt data prior to use by the software.

Treatment module
----

Each of the main modules (os_consist, os_train_info and os_mode_level) is split into three levels
of IMPORTS. Let's take the example of os_consist.

* The first level, consisting of os_consist, os_consist_r and os_consist_i, specifies the main operations.
* The second level, consisting of os_consist_1 and os_consist_1_i, specifies the invariant connecting the
abstract variables of os_consist with the concrete variables of os_consist_2. This level also implements the
"read" operations, which allow access to the variables.
* The third level, consisting of os_consist_2 and os_consist_2_i, implements the concrete variables and
the "write" operations.

Copy functions
----

When a variable established at a given cycle needs to be saved for the next cycle, its value is simply copied
in an other variable suffixed by "_prev". The copy functions are then called at the end of the cycle.
Usually, both variables (e.g. "var" and "var_prev") are defined in the same machine. However, as seen in this
example, it is not always possible : the ETCS level is established in os_mode_level, but used first in os_consist.
Since it would be methodologically incorrect for a module to write a variable of another module, the copy operation
is - in this case - deported in the main sequencer.

Elementary Operations
----

It is in some cases difficult to prove that the sum (or product) of two integers is also an integer.
Thus, we introduce "magical" elementary operations add_int_int and mul_int_int.
They are specified in the base machine elop_bs and guarantee that the result of the operation is inferior or equal to MAXINT.

Practically, they are implemented outside of the B model by an operation which fails whenever the result is out of the acceptable
boundaries.

----
end of document
