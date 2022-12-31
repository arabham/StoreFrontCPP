// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "Engine/DataTable.h"
#include <StoreFrontCPP/E_ItemType.h>
#include <StoreFrontCPP/E_ItemName.h>
#include <StoreFrontCPP/E_ItemManufacturer.h>
#include "S_ItemInfo.generated.h"


USTRUCT(BlueprintType)
struct FS_ItemInfo : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Class", MakeStructureDefaultValue = "None"))
	TObjectPtr<UClass> Class;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Index", MakeStructureDefaultValue = "0"))
	int32 Index;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Name"))
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "ItemName", MakeStructureDefaultValue = "NewEnumerator0"))
	E_ItemName ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Manufacturer", MakeStructureDefaultValue = "NewEnumerator0"))
	E_ItemManufacturer Manufacturer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Type", MakeStructureDefaultValue = "NewEnumerator0"))
	E_ItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Price", MakeStructureDefaultValue = "0.000000"))
	double Price;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Image", MakeStructureDefaultValue = "None"))
	TObjectPtr<UTexture2D> Image;
};


/**
 * 
 */
UCLASS()
class STOREFRONTCPP_API UItemInfo : public UUserDefinedStruct
{
	GENERATED_BODY()
	

};
