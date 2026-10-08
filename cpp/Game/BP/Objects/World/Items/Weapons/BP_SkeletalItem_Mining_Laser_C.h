// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Mining_Laser.BP_SkeletalItem_Mining_Laser_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Mining_Laser_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_HeatHaze;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_MiningLaserBeam_Overheat;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Steam_Tiny;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x05A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_MiningLaser;  // 0x05A8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFillableComponent* Fillable;  // 0x05B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StoredUnits;  // 0x05B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WantOn;  // 0x05BC, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* PilotLightRef;  // 0x05C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HeatValue;  // 0x05C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOverheated;  // 0x05CC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynMatRef;  // 0x05D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* Curve;  // 0x05D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x05E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Mining_Laser(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetItemVisible(bool bVisible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleParticle(bool Play);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateHeat(float NewHeat, bool IsOverheated);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void UpdateLaserTarget(FVector TargetLocation);  // parameters 0xC
};
