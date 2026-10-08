// /Game/BP/Objects/World/Items/Deployables/AI/BP_BlueBack_Lava_Mount_Corpse.BP_BlueBack_Lava_Mount_Corpse_C
// Derives from: ABP_GOAP_Corpse_Mount_C > ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BlueBack_Lava_Mount_Corpse_C : public ABP_GOAP_Corpse_Mount_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x07C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_BlueBack_Lava_Mount_Corpse(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
