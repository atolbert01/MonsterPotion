// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Components/SplineComponent.h>
#include "GameFramework/Actor.h"
#include "RoadBuilder.generated.h"
UCLASS()
class MONSTERPOTION_API ARoadBuilder : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ARoadBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float sectionLength;
	USplineComponent spline;
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
