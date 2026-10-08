// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_DEV_Pyromancy_Flame.BP_SkeletalItem_DEV_Pyromancy_Flame_C
// Derives from: ABP_SkeletalItem_Wood_Flare_C > ABP_SkeletalItem_LightBase_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x658, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_DEV_Pyromancy_Flame_C : public ABP_SkeletalItem_Wood_Flare_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0650, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_DEV_Pyromancy_Flame(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
