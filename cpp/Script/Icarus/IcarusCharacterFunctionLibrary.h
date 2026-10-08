// /Script/Icarus.IcarusCharacterFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Characters/IcarusCharacterFunctionLibrary.h

UCLASS()
class UIcarusCharacterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static int32 CalculatePlayerLevel(int32 ExperiencePoints, FCharacterGrowthRowHandle GrowthRowHandle);  // parameters 0x20
};
