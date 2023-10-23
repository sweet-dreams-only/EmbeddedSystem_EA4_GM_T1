# ======================================================================================================================
#      File: Sections/Requirements/__init__.py
#   Project: EA4 Release Notes Generator
#   Created: 2017-01-04
#  Modified: 2017-01-04
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2017 Nxtr Automotive
#
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2017-01-04  1     Jared     Initial file creation
# ----------------------------------------------------------------------------------------------------------------------
# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
from Sections.Group import Group


# ======================================================================================================================
# Requirements Group Class
# ----------------------------------------------------------------------------------------------------------------------
class Requirements(Group):
    def __init__(self):
        Group.__init__(self, 'Requirement Implementation')
        self.weight = 10



# End of File: Sections/Requirements/__init__.py