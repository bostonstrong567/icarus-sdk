// /Game/Prototypes/BP_PrototypeFunctionLibrary.BP_PrototypeFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PrototypeFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void DebugLineText(FVector LineStart, FVector LineEnd, FLinearColor Color, float Duration, float Thickness, FString Text, UObject* __WorldContext);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static void DebugSphereText(FVector Center, float Radius, int32 Segments, FLinearColor Color, float Duration, float Thickness, FString Text, UObject* __WorldContext);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetSplineDistanceAtLocation(USplineComponent* Spline, FVector Location, UObject* __WorldContext, float& Distance);  // parameters 0x24
};
