// Fill out your copyright notice in the Description page of Project Settings.


#include "Register.h"

// Sets default values
ARegister::ARegister()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
	EmployeeSide = CreateDefaultSubobject<UBoxComponent>(TEXT("Employee Side"));
	EmployeeSide->SetupAttachment(Mesh);
	CustomerSide = CreateDefaultSubobject<UBoxComponent>(TEXT("Customer Side"));
	CustomerSide->SetupAttachment(Mesh);
}

// Called when the game starts or when spawned
void ARegister::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARegister::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

