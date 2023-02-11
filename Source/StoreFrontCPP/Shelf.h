// Property of Do Over Games

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemSpot.h"
#include "Shelf.generated.h"

UCLASS()
class STOREFRONTCPP_API AShelf : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShelf();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UItemSpot* ItemSpot = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;
};
