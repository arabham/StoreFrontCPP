// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Register.generated.h"

UCLASS()
class STOREFRONTCPP_API ARegister : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARegister();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Default")
	TObjectPtr<USceneComponent> Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Default")
	TObjectPtr<UStaticMeshComponent> Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Volumes")
	TObjectPtr<UBoxComponent> EmployeeSide;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Volumes")
	TObjectPtr<UBoxComponent> CustomerSide;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
