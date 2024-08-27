TO get a list of groups belonging to the current user:

```sh
groups $USER
```

To add a user to a group:

```sh
sudo usermod -aG group_name $USER
```

To refresh the new changes to a group, where 'group_name' is the group's name:

```sh
newgrp group_name
```