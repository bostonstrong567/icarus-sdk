// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Chainsaw.BP_SkeletalItem_Chainsaw_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x591, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Chainsaw_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* SFX_IdleLoop;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool TurnedOn;  // 0x0590, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Chainsaw(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDynamicStateUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_TurnedOn();
};
