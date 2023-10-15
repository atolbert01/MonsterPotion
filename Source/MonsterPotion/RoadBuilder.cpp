// Fill out your copyright notice in the Description page of Project Settings.


#include "RoadBuilder.h"

// Sets default values
ARoadBuilder::ARoadBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARoadBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARoadBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARoadBuilder::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
	sectionLength = GetActorScale3D().X * 1197.f;

	for (int i = 0; i < FMath::TruncToInt(spline.GetSplineLength() / sectionLength) - 1; i++)
	{
	}
}