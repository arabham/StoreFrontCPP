// Property of Do Over Games

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "S_ItemInfo.h"
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


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	UStaticMesh* ShelfItemMesh;

	UFUNCTION(BlueprintCallable)
	UStaticMesh* SetItemMeshInItemSpot(FS_ItemInfo Item);
};
