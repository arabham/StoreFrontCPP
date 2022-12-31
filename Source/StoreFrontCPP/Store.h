// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
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
	TArray<AActor*> Sections;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Store Data")
	TArray<AActor*> StockedItems;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Store Data")
	TArray<AActor*> UnstockedItems;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
