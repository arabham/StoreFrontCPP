// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "E_ItemType.generated.h"


UENUM(BlueprintType)
enum class E_ItemType : uint8
{
	DefaultType,
	Groceries,
	HouseholdGoods,
	Toys,
	BeautySupplies,
	PetGoods,
	Electronics,
	Tools,
	E_ItemType_Max UMETA(Hidden),
};


/**
 * 
 */
UCLASS()
class STOREFRONTCPP_API UItemType : public UUserDefinedEnum
{
	GENERATED_BODY()
	
};
