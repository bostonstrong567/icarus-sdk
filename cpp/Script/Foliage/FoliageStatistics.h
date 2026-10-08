// /Script/Foliage.FoliageStatistics
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Foliage/Public/FoliageStatistics.h

UCLASS()
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static int32 FoliageOverlappingBoxCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FBox Box);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static int32 FoliageOverlappingSphereCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);  // parameters 0x24
};
