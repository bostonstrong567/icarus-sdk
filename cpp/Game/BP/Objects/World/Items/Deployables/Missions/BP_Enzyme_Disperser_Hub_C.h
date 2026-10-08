// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Enzyme_Disperser_Hub.BP_Enzyme_Disperser_Hub_C
// Derives from: ABP_Enzyme_Disperser_C > ABP_Deployable_ManualToggle_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Enzyme_Disperser_Hub_C : public ABP_Enzyme_Disperser_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0798, size 0x8

    UFUNCTION(BlueprintCallable) void ActiveUpdated(bool bNewActive);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Enzyme_Disperser_Hub(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateHighlight(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
};
