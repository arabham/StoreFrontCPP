// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "S_ItemInfo.h"
#include "Shelf.h"
#include "Store.generated.h"

UCLASS(Blueprintable, BlueprintType)
class STOREFRONTCPP_API AStore : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStore();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Default")
	TObjectPtr<USceneComponent> Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Store Data")
	TArray<FS_ItemInfo> StoreInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Store Data")
	TArray<FS_ItemInfo> StockedItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Store Data")
	TArray<FS_ItemInfo> StoreStoreInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Store Data")
	TArray<FS_ItemInfo> LockedItems;

	// TODO: Remove need for blueprint access to make this unsigned
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Store Data")
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Store Data")
	int32 Marks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Store Data")
	int32 ItemCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Store Data")
	int32 StockCount;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Store Data")
	AShelf* MyShelf;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void BuyItemFromStoreStoreInventory(FS_ItemInfo ItemToBuy);

	UFUNCTION(BlueprintCallable)
	void AddItemStoreInventory(FS_ItemInfo ItemToAdd);

	UFUNCTION(BlueprintCallable)
	void StockItem(FS_ItemInfo ItemToStock);

	UPROPERTY(EditDefaultsOnly, Category = "Shelf")
	TSubclassOf<AShelf> ShelfClass;
};
