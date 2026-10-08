// /Script/Engine.KismetGuidLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetGuidLibrary.h

UCLASS()
class UKismetGuidLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_GuidToString(const FGuid& InGuid);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_GuidGuid(const FGuid& A, const FGuid& B);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void Invalidate_Guid(FGuid& InGuid);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValid_Guid(const FGuid& InGuid);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGuid NewGuid();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_GuidGuid(const FGuid& A, const FGuid& B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Parse_StringToGuid(FString GuidString, FGuid& OutGuid, bool& Success);  // parameters 0x21
};
