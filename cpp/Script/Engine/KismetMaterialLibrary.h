// /Script/Engine.KismetMaterialLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h

UCLASS(MinimalAPI)
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static UMaterialInstanceDynamic* CreateDynamicMaterialInstance(UObject* WorldContextObject, UMaterialInterface* Parent, FName OptionalName, EMIDCreationFlags CreationFlags);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static float GetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FLinearColor GetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void SetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, float ParameterValue);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void SetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, const FLinearColor& ParameterValue);  // parameters 0x28
};
