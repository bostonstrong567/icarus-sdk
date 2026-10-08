// /Game/BP/Objects/World/Items/WorldObjects/Prebuilt/BP_SolHideout.BP_SolHideout_C
// Derives from: ABP_Prebuilt_Base_C > APrebuiltStructure > AIcarusActor > AActor > UObject
// size 0x430, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SolHideout_C : public ABP_Prebuilt_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0428, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SolHideout(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillCrates();
    UFUNCTION(BlueprintCallable) void GetChest(AIcarusItem*& Array_Element);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
};
