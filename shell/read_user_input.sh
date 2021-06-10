#!/bin/bash
echo -e "Hi, please type the world: \c"
read word
echo "The word you entered is: $word"
echo -e "Can you please enter two words"
read word1 word2
echo "Here is your input: \"$word1\" \"$word2\""
echo -e "How do you feel about bash scripting?"
read
echo "You said $REPLY, I'm glad to hear that!"
echo -e "What your favourite colours? "

read -a colours
echo "My favorite colours are also ${colours[0]}, ${colours[1]} and ${colours[2]}:)"
