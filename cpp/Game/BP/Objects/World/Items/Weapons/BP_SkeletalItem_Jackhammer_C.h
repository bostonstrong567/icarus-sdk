// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Jackhammer.BP_SkeletalItem_Jackhammer_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5AE, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Jackhammer_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_JackhammerActiveIdle;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_JackhammerStart;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_JackhammerHit;  // 0x05A0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IdleOn;  // 0x05A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LastIdleOn;  // 0x05A9, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool InUse;  // 0x05AA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LastInUse;  // 0x05AB, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DidHit;  // 0x05AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LastDidHit;  // 0x05AD, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Jackhammer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDynamicStateUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_DidHit();
    UFUNCTION(BlueprintCallable) void OnRep_IdleOn();
    UFUNCTION(BlueprintCallable) void OnRep_InUse();
};
