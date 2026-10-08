// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_FlameThrower_LavaHunter.BP_SkeletalItem_FlameThrower_LavaHunter_C
// Derives from: ABP_SkeletalItem_FlameThrower_Small_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_FlameThrower_LavaHunter_C : public ABP_SkeletalItem_FlameThrower_Small_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flamethrower_FX1;  // 0x05E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flamethrower_FX2;  // 0x05E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_0;  // 0x05F0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_FlameThrower_LavaHunter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayBurst();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SERVER_PlayBurst();
    UFUNCTION(BlueprintCallable) void ToggleParticle(bool Play);  // parameters 0x1
};
