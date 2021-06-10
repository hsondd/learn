#!/bin/bash

echo "Your UID is ${UID}"

UID_TO_TEST_FOR='1000'

if [[ "${UID}" -ne "${UID_TO_TEST_FOR}" ]]
then
	echo "Your UID does not match ${UID_TO_TEST_FOR}."
	exit 1
fi

USER_NAME=$(id -un)

if [[ "${?}" -ne 0 ]]
then
	echo 'The id command did not execute successfully'
	exit 1
fi
echo "Your user name is ${USER_NAME}"


USER_NAME_TEST_FOR='hson'
if [[ ${USER_NAME} = ${USER_NAME_TEST_FOR} ]]
then
	echo "Your user name matcheds ${USER_NAME_TEST_FOR}"
fi
