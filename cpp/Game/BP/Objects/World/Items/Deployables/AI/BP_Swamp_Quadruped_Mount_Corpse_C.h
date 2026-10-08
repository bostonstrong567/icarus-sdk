// /Game/BP/Objects/World/Items/Deployables/AI/BP_Swamp_Quadruped_Mount_Corpse.BP_Swamp_Quadruped_Mount_Corpse_C
// Derives from: ABP_GOAP_Corpse_Mount_C > ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Swamp_Quadruped_Mount_Corpse_C : public ABP_GOAP_Corpse_Mount_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Swamp_Quadruped_Mount_Corpse(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
