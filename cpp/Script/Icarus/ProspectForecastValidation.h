// /Script/Icarus.ProspectForecastValidation
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Weather/ProspectForecastValidation.h

UCLASS()
class UProspectForecastValidation : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static int32 ValidateRow(const FProspectForecastRowHandle& ProspectForecastRow, FString& OutString);  // parameters 0x2C
};
