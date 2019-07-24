# Lem-in

## Development prerequisites:
libft folder as a submodule. Don't forget to update it:
`git submodule init`
`git submodule update`

## Project overview

Project of school 42: let all ants pass from room start to the room end through the shortest way.

The program receives the data describing the ant farm from the standard output
in the following format:
```number_of_ants
   the_rooms
   the_links
```

## Mandatory part

### Validation (according to common sense)
#### Comments
* Proper comments starts with only one '#'
* Comments can be at any line
* Comments are treated on the begining of the line only
 Attempt to make comment obscure by adding any spaces like `_#` will
result in error

#### Ants
* The number of ants must be integer
* It can contain spaces or tabs before/after
* Any other characters will be considered as 
error

#### Commands
* `##start` signals the ant farm’s entrance and `##end` its exit
* Any unknown command will be ignored

#### Rooms
* Not necessarily numbers(zdfg, qwerty)
* Never starts with the character L nor with the character #

## Notes for myself:
There is double declaration in files of lem_in.h (browsing in clion)
