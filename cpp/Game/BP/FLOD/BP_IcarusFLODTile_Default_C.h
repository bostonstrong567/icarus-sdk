// /Game/BP/FLOD/BP_IcarusFLODTile_Default.BP_IcarusFLODTile_Default_C
// Derives from: AFLODTile > AInfo > AActor > UObject
// size 0x2E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusFLODTile_Default_C : public AFLODTile
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_IcarusFLODTile_Default(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FLODTileDebugDestroyAllInstances(int32 RecordIndex, bool Restore);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void FLODTileDebugInstancesCurrent();
    UFUNCTION(BlueprintCallable) void FLODTileDebugInstancesCurrentAdv();
    UFUNCTION(BlueprintCallable) void FLODTileDebugStats();
    UFUNCTION(BlueprintCallable) void ToggleDebugInstancesCurrent(bool ShowAdvanced);  // parameters 0x1
};
