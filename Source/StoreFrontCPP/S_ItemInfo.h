// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "Engine/DataTable.h"
#include "S_ItemInfo.generated.h"


USTRUCT(BlueprintType)
struct FS_ItemInfo : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()


public:
	FS_ItemInfo()
	: ItemName()
	, SellPrice(0)
	, WholesalePrice(0)
	, OwnedCount(0)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	FName ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	int32 SellPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	int32 WholesalePrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	int32 OwnedCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	TObjectPtr<UTexture> Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	UStaticMesh* ItemMesh;

};


/**
 * 
 */
UCLASS()
class STOREFRONTCPP_API UItemInfo : public UUserDefinedStruct
{
	GENERATED_BODY()
	

};
