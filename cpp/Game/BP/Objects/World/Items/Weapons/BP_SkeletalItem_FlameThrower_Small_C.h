// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_FlameThrower_Small.BP_SkeletalItem_FlameThrower_Small_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_FlameThrower_Small_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* PilotLight;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Pilot;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* PilotAudio;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x05A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flamethrower_FX;  // 0x05A8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFillableComponent* Fillable;  // 0x05B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StoredUnits;  // 0x05B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxStoredUnits;  // 0x05BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WantOn;  // 0x05C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttachPointName;  // 0x05C4, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* PilotVFX;  // 0x05D0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_FlameThrower_Small(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetItemVisible(bool bVisible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleParticle(bool Play);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateStoredUnits();
};
