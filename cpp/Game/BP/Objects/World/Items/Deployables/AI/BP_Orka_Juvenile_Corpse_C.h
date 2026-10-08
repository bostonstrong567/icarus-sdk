// /Game/BP/Objects/World/Items/Deployables/AI/BP_Orka_Juvenile_Corpse.BP_Orka_Juvenile_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Orka_Juvenile_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Orka_Juvenile_Corpse(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
