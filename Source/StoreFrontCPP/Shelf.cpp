// Property of Do Over Games


#include "Shelf.h"

// Sets default values
AShelf::AShelf()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
	ItemSpot = CreateDefaultSubobject<UItemSpot>(FName("Item Spot"));
}

// Called when the game starts or when spawned
void AShelf::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShelf::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

