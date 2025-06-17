#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GMCDurationModifier.generated.h"

class UGMC_AbilitySystemComponent;

UCLASS(BlueprintType, Blueprintable, Abstract)
class GMCABILITYSYSTEM_API UGMCDurationModifier : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent)
	float CalculateValue(UGMCAbilityEffect* SourceEffect, float BaseValue);
	virtual float CalculateValue_Implementation(UGMCAbilityEffect* SourceEffect, float BaseValue)
	{
		return BaseValue;
	}
};
