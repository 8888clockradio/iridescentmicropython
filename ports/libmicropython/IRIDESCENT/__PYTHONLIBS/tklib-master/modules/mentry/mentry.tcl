#==============================================================================
# Main Mentry package module.
#
# Copyright (c) 1999-2022  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require -exact mentry::common 3.16

package provide mentry $::mentry::version
package provide Mentry $::mentry::version

::mentry::useTile 0
::mentry::createBindings
