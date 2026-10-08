// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5B2, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Dropship_Grenade_Flare_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio_FlareFire;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FlareSmoke;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flare;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Small;  // 0x05A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Large;  // 0x05A8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsPreviewActor;  // 0x05B0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<PreviewActorType> PreviewType;  // 0x05B1, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Dropship_Grenade_Flare(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitArrow();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_HideFlareEffects();
    UFUNCTION(BlueprintCallable) void OnProjectileFired(FVector Impulse, FVector InstigatorVelocity, FProjectileFireParams AdvancedParameters);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnRep_PreviewType();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetItemVisible(bool bVisible);  // parameters 0x1
};
