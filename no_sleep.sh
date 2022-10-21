#! /bin/bash    # can be replaced with zsh for zsh shell

echo "running script to prevent sleep..."
caffeinate -i -w $$ &         

# caffeinate is a built-in utility in macosx,
# -i option prevents idle sleep, 
# -w specifies to wait until specified process finishes
# & runs the script as a background process
