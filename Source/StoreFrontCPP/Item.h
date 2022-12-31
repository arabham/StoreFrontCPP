// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "UObject/Class.h"
#include "UObject/Object.h"
#include <StoreFrontCPP/E_ItemName.h>
#include <StoreFrontCPP/S_ItemInfo.h>
#include "Item.generated.h"


UCLASS()
class STOREFRONTCPP_API AItem : public AActor
{
	GENERATED_BODY()
	

public:	
	// Sets default values for this actor's properties
	AItem();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Default")
	TObjectPtr<USceneComponent> Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Default")
	TObjectPtr<UStaticMeshComponent> Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	FS_ItemInfo ItemInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	E_ItemName ItemName;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
