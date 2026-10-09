// /Game/BP/Tools/WorldTool/Tech/BP_WorldToolFunctionLibrary.BP_WorldToolFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WorldToolFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static void ConvertSplineData(FRiverSplineList List, FTransform Transform, UObject* __WorldContext, TArray<FRiverSplineSetup>& Setup);  // parameters 0x68
    UFUNCTION(BlueprintCallable) static void FillSplineLists(TArray<FWTSplineMesh>& SplineMeshComps, UObject* __WorldContext, TArray<FRiverSplineList>& SplineList);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void FindRiverSplineLevel(FWTSplineMesh Comp, TArray<FBoxSphereBounds>& Bounds, UObject* __WorldContext, int32& Level);  // parameters 0xCC
    UFUNCTION(BlueprintCallable) static void FindShrinkWrapSplineLevel(FWTShrinkWrap Comp, TArray<FBoxSphereBounds>& Bounds, UObject* __WorldContext, int32& Level);  // parameters 0x64
    UFUNCTION(BlueprintCallable) static void SplitShrinkWrapIntoLevels(TArray<FShrinkWrapSplineList>& ListsIn, TArray<FBoxSphereBounds>& Bounds, UObject* __WorldContext, TArray<FShrinkWrapSplineList>& ListsOut);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void SplitSplineListsBasedOnDistance(TArray<FRiverSplineList>& ListsIn, float MaxDistance, UObject* __WorldContext, TArray<FRiverSplineList>& ListsOut);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void SplitSplineListsIntoLevels(TArray<FRiverSplineList>& ListsIn, TArray<FBoxSphereBounds>& Bounds, UObject* __WorldContext, TArray<FRiverSplineList>& ListsOut);  // parameters 0x38
};
