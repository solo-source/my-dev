#tells whatever is executing the file that next following 
#commands execute sthrough bash shell.

#!/bin/bash

#Get the basic dependencies setup
sudo dnf update
sudo dnf upgrade -y

sudo dnf groupinstall "Development Tools" -y
sudo dnf install curl vim gnome-tweaks git -y

#install Volta(volta.sh)
curl https://get.volta.sh | bash


#install node using volta from the absolute pack
$HOME/.volta/bin/volta install node@lts
