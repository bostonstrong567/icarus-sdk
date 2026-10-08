// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_CheckeredFlag.BP_CheckeredFlag_C
// Derives from: ABP_National_Flag_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x768, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CheckeredFlag_C : public ABP_National_Flag_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0760, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_CheckeredFlag(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateFlag();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
