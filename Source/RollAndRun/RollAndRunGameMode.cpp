// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RollAndRunGameMode.h"
#include "RollAndRunBall.h"

ARollAndRunGameMode::ARollAndRunGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ARollAndRunBall::StaticClass();
}
