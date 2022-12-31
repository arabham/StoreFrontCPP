// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "E_ItemName.generated.h"


UENUM(BlueprintType)
enum class E_ItemName : uint8
{
	DefaultName,
	Snickers,
	Spam,
	MountainDew,
	Microwave,
	Blender,
	Toaster,
	Maze,
	Plush,
	Robot,
	E_ItemName_Max UMETA(Hidden),
};


/**
 * 
 */
UCLASS()
class STOREFRONTCPP_API UItemName : public UUserDefinedEnum
{
	GENERATED_BODY()
	
};
