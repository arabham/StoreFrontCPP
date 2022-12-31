// Fill out your copyright notice in the Description page of Project Settings.


#include "Section.h"

// Sets default values
ASection::ASection()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Volume = CreateDefaultSubobject<UBoxComponent>(TEXT("Volume"));
	RootComponent = Volume;
}

// Called when the game starts or when spawned
void ASection::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

