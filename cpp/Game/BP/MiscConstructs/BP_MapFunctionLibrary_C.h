// /Game/BP/MiscConstructs/BP_MapFunctionLibrary.BP_MapFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_MapFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static void FromUV(FVector2D UV, UObject* __WorldContext, FVector2D& Fractional);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetAlphabet(UObject* __WorldContext, TArray<FString>& Alphabet);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetGridSize(UObject* __WorldContext, float& GridSize);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetLowestGroundHeightAtLocation(FVector GridLocation, bool TraceForLandscapeOnly, UObject* __WorldContext, FVector& Location, bool& Success);  // parameters 0x25
    UFUNCTION(BlueprintCallable) void GetSurfaceHeightAtLocation(FVector GridLocation, bool IncludeActorSurfaces, UObject* __WorldContext, FVector& Location, bool& Success);  // parameters 0x25
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetUV(FVector2D Fractional, UObject* __WorldContext, FVector2D& UV);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetZeroIndex(UObject* __WorldContext, int32& Index);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GridToIndex(FString Grid, UObject* __WorldContext, FIntPoint& Index);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GridToLocation(FString Grid, FVector2D UV, UObject* __WorldContext, FVector2D& Location);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IndexToGrid(FIntPoint Index, UObject* __WorldContext, FString& Grid);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IndexToLocation(FIntPoint Index, UObject* __WorldContext, FVector2D& Location);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void IsPointBelowLevel(FVector WorldLocation, bool TraceForLandscapeOnly, UObject* __WorldContext, bool& BelowLevel);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void IsPointOutsideOfLevel(FVector WorldLocation, UObject* __WorldContext, bool& IsOutside);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static void LocationToGrid(FVector2D Location, UObject* __WorldContext, FString& Grid, FVector2D& UV);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static void LocationToIndex(FVector2D Location, UObject* __WorldContext, FIntPoint& Index);  // parameters 0x18
};
