// /Game/BP/Objects/World/Items/Deployables/AI/BP_Ram_Corpse.BP_Ram_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ram_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x07A8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool HasWool;  // 0x07B0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Ram_Corpse(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_HasWool();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateCorpseMaterials();
};
