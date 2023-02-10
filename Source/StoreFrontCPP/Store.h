// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Item.h"
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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Store Data")
	TArray<AItem*> StoreInventory;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Store Data")
	TArray<AItem*> StockedItems;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Store Data")
	TArray<AActor*> StoreStoreInventory;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Store Data")
	TArray<AActor*> LockedItems;

	// TODO: Remove need for blueprint access to make this unsigned
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Store Data")
	int32 Level;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Store Data")
	int32 Marks;

	int32 ItemCount;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void BuyItemFromStoreStoreInventory(int32 IWholePrice);

	UFUNCTION(BlueprintCallable)
	void AddItemStoreInventory(AItem* ItemToAdd);

	UFUNCTION(BlueprintCallable)
	void StockItem(AItem* ItemToStock);

};
