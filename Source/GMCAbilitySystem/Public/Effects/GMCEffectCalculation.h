#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GMCEffectCalculation.generated.h"

class UGMC_AbilitySystemComponent;

UCLASS(BlueprintType, Blueprintable, Abstract)
class GMCABILITYSYSTEM_API UGMCEffectCalculation : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GMAS|Effects|Calculation")
	float CalculateEffectValue(float BaseValue, UGMC_AbilitySystemComponent* OwnerAbilityComponent, UGMC_AbilitySystemComponent* SourceAbilityComponent);
	virtual float CalculateEffectValue_Implementation(float BaseValue, UGMC_AbilitySystemComponent* OwnerAbilityComponent, UGMC_AbilitySystemComponent* SourceAbilityComponent)
	{
		return BaseValue;
	}
};
