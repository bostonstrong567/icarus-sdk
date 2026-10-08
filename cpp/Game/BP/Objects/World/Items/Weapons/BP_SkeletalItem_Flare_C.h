// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Flare.BP_SkeletalItem_Flare_C
// Derives from: ABP_SkeletalItem_Flare_Arrow_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Flare_C : public ABP_SkeletalItem_Flare_Arrow_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Flare(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetupColor();
};
