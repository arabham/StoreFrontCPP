// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "E_ItemManufacturer.generated.h"


UENUM(BlueprintType)
enum class E_ItemManufacturer : uint8
{
	DefaultManufacturer,
	E_ItemManufacturer_Max UMETA(Hidden),
};


/**
 * 
 */
UCLASS()
class STOREFRONTCPP_API UItemManufacturer : public UUserDefinedEnum
{
	GENERATED_BODY()
	

};
