// /Script/AIModule.NavLocalGridManager
// Derives from: UObject
// size 0x58, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h

UCLASS()
class UNavLocalGridManager : public UObject
{
protected:
    TArray<FCombinedNavGridData,TSizedDefaultAllocator<32> > CombinedGrids;  // 0x0028, not reflected
    TArray<FNavLocalGridData,TSizedDefaultAllocator<32> > SourceGrids;  // 0x0038, not reflected
    int32 VersionNum;  // 0x0048, not reflected
    int32 NextGridId;  // 0x004C, not reflected
    int32 MaxActiveSourceGrids;  // 0x0050, not reflected
    uint32 : 1 bNeedsRebuilds;  // 0x0054, not reflected
public:
    UFUNCTION(BlueprintCallable) static int32 AddLocalNavigationGridForBox(UObject* WorldContextObject, const FVector& Location, FVector Extent, FRotator Rotation, int32 Radius2D, float Height, bool bRebuildGrids);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) static int32 AddLocalNavigationGridForCapsule(UObject* WorldContextObject, const FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32 Radius2D, float Height, bool bRebuildGrids);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static int32 AddLocalNavigationGridForPoint(UObject* WorldContextObject, const FVector& Location, int32 Radius2D, float Height, bool bRebuildGrids);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static int32 AddLocalNavigationGridForPoints(UObject* WorldContextObject, const TArray<FVector>& Locations, int32 Radius2D, float Height, bool bRebuildGrids);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static bool FindLocalNavigationGridPath(UObject* WorldContextObject, const FVector& Start, const FVector& End, TArray<FVector>& PathPoints);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void RemoveLocalNavigationGrid(UObject* WorldContextObject, int32 GridId, bool bRebuildGrids);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static bool SetLocalNavigationGridDensity(UObject* WorldContextObject, float CellSize);  // parameters 0xD

    // Virtual functions that start here:
    //   ProjectGrids
};
