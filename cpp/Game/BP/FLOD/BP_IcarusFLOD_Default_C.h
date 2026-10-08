// /Game/BP/FLOD/BP_IcarusFLOD_Default.BP_IcarusFLOD_Default_C
// Derives from: AFLOD > AInfo > AActor > UObject
// size 0x2F9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusFLOD_Default_C : public AFLOD
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OverrideDescriptions;  // 0x02F8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_IcarusFLOD_Default(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FLODDebugStats();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
